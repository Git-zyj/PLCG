/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187712
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
    var_13 -= ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 2] [i_1 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0 + 3] [i_1 - 2] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3 - 3] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_1) || (var_6))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1167384414)) ? (max((var_10), (((/* implicit */int) var_9)))) : (min((var_10), (((/* implicit */int) var_9)))))))));
                            arr_12 [i_0] [i_1 + 1] [i_2] [i_3] = var_5;
                            var_14 = ((/* implicit */short) min((((arr_5 [i_0] [3] [i_2] [i_3 - 2]) ? ((-(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2])))) : (((/* implicit */int) (_Bool)0)))), (min((arr_1 [i_2] [i_1]), (((var_6) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0 + 2]))))))));
                            arr_13 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) var_8)), ((-(((var_5) ? (-1167384407) : (903220091)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_3);
}
