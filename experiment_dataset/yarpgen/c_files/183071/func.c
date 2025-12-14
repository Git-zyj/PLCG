/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183071
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
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(2147483647))), (((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (-2147483642)))))) ? (0U) : (3931013292U)));
    var_13 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = -2147483642;
                                var_15 = ((/* implicit */unsigned int) ((((0ULL) / (((/* implicit */unsigned long long int) var_0)))) < (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_4));
                                var_16 = var_2;
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((11677757107834856709ULL) < (((/* implicit */unsigned long long int) arr_10 [i_3] [i_4 + 1] [i_1 + 1] [i_4 + 1] [i_4 + 1] [i_2] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) (-(var_8)));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((signed char) var_6)))));
        var_20 ^= (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])));
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) var_11);
    }
}
