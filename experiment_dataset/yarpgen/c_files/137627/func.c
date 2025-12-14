/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137627
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
    var_12 = min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (min((var_7), (((/* implicit */long long int) max((((/* implicit */int) var_6)), (var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_1 - 2] [i_2] [i_2] [i_4 - 2] [i_0 + 1] [i_1 - 2] = ((/* implicit */_Bool) (-(((long long int) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1]))));
                                arr_15 [i_1 + 4] [i_1 + 4] [i_1 + 4] = ((/* implicit */short) arr_3 [i_0 + 1] [i_1 + 2] [i_2]);
                            }
                        } 
                    } 
                } 
                var_13 = ((max((((/* implicit */long long int) min((var_11), (((/* implicit */int) arr_7 [i_0]))))), (min((var_2), (((/* implicit */long long int) arr_1 [i_0 + 1])))))) << (((arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_1 + 4] [i_1 + 2]) + (2862211462439354661LL))));
                var_14 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max((-6037631907002659421LL), (134217728LL)))) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]))))), (max((var_3), (((/* implicit */int) arr_7 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 8; i_5 += 1) 
    {
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_2 [i_5 + 2]) : (((/* implicit */int) var_9))))) - (var_7)));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_5 - 1] [i_5 - 3] [i_5 - 2])))))));
    }
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_1))));
}
