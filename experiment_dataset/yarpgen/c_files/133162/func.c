/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133162
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
    var_14 = ((/* implicit */_Bool) max((max((max((((/* implicit */short) var_6)), (var_8))), (((/* implicit */short) var_4)))), (var_13)));
    var_15 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max(((~(min((((/* implicit */int) arr_0 [i_4])), (arr_8 [i_0] [i_0] [i_0]))))), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))));
                                var_17 -= ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_0 [i_1 - 3])))), (((/* implicit */int) arr_13 [i_2] [(unsigned char)3] [(_Bool)1] [(short)13] [i_2] [11ULL] [12]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned char) max((12822211305451086318ULL), (((/* implicit */unsigned long long int) (unsigned short)57393))));
                    var_18 -= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_0 + 2] [i_0]))))));
                    var_19 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)6] [i_2] [i_2 - 1]))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2 + 4]))))), (max((arr_9 [i_0 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [14LL])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(var_0))), (((/* implicit */long long int) var_9)))))));
    var_21 = ((/* implicit */signed char) (+((+(var_0)))));
}
