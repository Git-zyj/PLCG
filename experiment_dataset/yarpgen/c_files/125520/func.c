/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125520
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
    var_12 = ((/* implicit */unsigned char) (-((-(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((max((((/* implicit */long long int) var_8)), (arr_4 [i_0 - 2]))) >= (((((/* implicit */_Bool) arr_4 [i_0 - 4])) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 - 1])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_2]))))), (max((arr_1 [i_2 - 1]), (((/* implicit */short) arr_8 [i_0 - 3]))))));
                            arr_11 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 2])))))));
                            var_14 -= ((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_0 - 3] [i_0])), (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((/* implicit */int) arr_8 [(unsigned short)20])) : (((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
