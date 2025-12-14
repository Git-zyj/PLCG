/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134578
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((signed char) (short)11514));
                var_13 = ((/* implicit */unsigned long long int) (~(((unsigned int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)1])))))));
                var_14 = ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)0)), ((short)11517)))) ? (((/* implicit */int) arr_0 [(unsigned short)4])) : (((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1]))) ? ((-(arr_1 [i_0]))) : (((/* implicit */int) var_9)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] &= ((/* implicit */signed char) min((min((((/* implicit */int) ((signed char) arr_9 [i_2]))), ((-(((/* implicit */int) var_12)))))), ((-(var_7)))));
                    arr_15 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_4] [i_3 + 2]))))) ? ((-(((/* implicit */int) arr_8 [(unsigned short)21] [i_3 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3 + 1])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_10);
    var_16 |= ((/* implicit */_Bool) var_4);
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
}
