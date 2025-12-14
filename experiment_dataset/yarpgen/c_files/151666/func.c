/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151666
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) var_4);
                            arr_12 [i_0] [i_1] [(signed char)14] [i_0] [i_0] [i_0] &= min((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2 + 1])), (3892395238228241650ULL))), (((/* implicit */unsigned long long int) (unsigned char)21)));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [(signed char)12] = ((/* implicit */unsigned short) 5417311213270580381LL);
                            arr_14 [i_0] [4U] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
                            arr_15 [i_0] [i_0] [(short)9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_2 + 1] [i_0] [i_0] [i_0])) ? (arr_8 [(signed char)6] [i_2 - 1] [(signed char)6] [i_0] [(unsigned short)5] [i_1]) : (arr_8 [(unsigned short)14] [i_2 - 1] [(unsigned short)14] [i_0] [i_1] [i_3]))) / (((arr_5 [i_0] [i_0] [i_0]) ? (max((((/* implicit */int) var_5)), (arr_8 [i_3] [i_3] [i_2] [i_0] [i_3] [i_2]))) : (((/* implicit */int) arr_0 [i_2 - 1]))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) max((arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) - (16030)))));
                var_10 -= ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)1)), (597951597))))))));
    var_12 = ((/* implicit */unsigned char) ((((var_7) >= (var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)));
}
