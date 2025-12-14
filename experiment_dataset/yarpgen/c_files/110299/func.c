/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110299
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_8)))))))), (var_7)))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_2)))), (((733950009) + (var_6)))))) ? (var_6) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_2 [i_0]))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (max((((/* implicit */int) min((var_11), (arr_2 [i_1])))), (arr_4 [i_0] [i_1] [i_0]))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (arr_1 [i_0] [i_1])))))));
                var_17 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) max((var_6), (((/* implicit */int) arr_2 [i_0]))))) >= (((unsigned int) arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 - 1])) != (733950009))))));
                    var_19 = ((/* implicit */signed char) arr_11 [i_3]);
                    var_20 = ((/* implicit */short) (!(max((arr_9 [i_3 - 2] [i_3 - 1] [i_3 - 3]), (arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 1])))));
                }
            } 
        } 
    } 
}
