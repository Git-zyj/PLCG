/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178271
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
                var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0])), (var_2))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_7))))))));
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_3]))))))));
                arr_13 [i_2 + 3] [i_3] = ((/* implicit */unsigned short) 3382190245U);
                arr_14 [i_3] = ((/* implicit */unsigned long long int) max((arr_3 [i_3]), (((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))));
            }
        } 
    } 
}
