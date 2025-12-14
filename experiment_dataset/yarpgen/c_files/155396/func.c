/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155396
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1 + 1] [i_1 - 1]) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (min((arr_0 [i_0]), (9223372036854775807LL))))))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) (-2147483647 - 1))) > (arr_1 [i_0] [i_1])))), (max((((/* implicit */long long int) arr_2 [i_1])), (arr_0 [i_1])))))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_0))))) ? (arr_3 [i_1] [i_1] [i_0]) : (min((arr_2 [i_1 - 1]), (((/* implicit */int) var_6)))))))));
                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_1 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((arr_0 [i_0]) ^ (arr_0 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_0 [i_1 - 1])))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_20 ^= ((/* implicit */int) (((-(222162975659450734LL))) | (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (arr_3 [(short)14] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2] [i_1] [i_1]))))), (min((((/* implicit */long long int) arr_6 [i_1] [i_2] [i_1])), (arr_0 [i_2])))));
                                arr_15 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */short) (+((-(arr_1 [i_1 - 1] [i_1 - 1])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_2 [i_1 + 1])))) && (((/* implicit */_Bool) min((((/* implicit */int) var_16)), (arr_2 [i_2]))))));
                    arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_1 - 1] [i_2]);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((int) var_8)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_23 = ((/* implicit */int) var_1);
}
