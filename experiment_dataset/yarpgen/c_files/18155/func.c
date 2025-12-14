/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18155
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
    var_16 = ((/* implicit */long long int) min((var_11), (var_11)));
    var_17 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */long long int) var_4);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)214)))))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [(short)6] [i_1] [i_2] [i_2] [i_3 - 2] [i_3 - 2] [i_4]))))), (min((var_3), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [(signed char)10] [i_3 - 1] [1ULL] [(signed char)10] [i_4])))))));
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((arr_1 [i_0] [i_1]) + (((/* implicit */int) var_13)))), (((((/* implicit */int) (unsigned short)31)) << (((((/* implicit */int) (short)20583)) - (20581))))))))));
                                var_21 = (i_1 % 2 == zero) ? (((/* implicit */short) max((((/* implicit */int) min((arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_3 + 3] [i_0 + 1] [i_0 + 1] [i_3]), (arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_4] [i_4] [i_4] [i_4])))), (((((/* implicit */int) (short)-31697)) / (max((((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] [i_3])), (arr_7 [i_1])))))))) : (((/* implicit */short) max((((/* implicit */int) min((arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_3 + 3] [i_0 + 1] [i_0 + 1] [i_3]), (arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_4] [i_4] [i_4] [i_4])))), (((((/* implicit */int) (short)-31697)) * (max((((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] [i_3])), (arr_7 [i_1]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0]))));
                }
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_1)))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [(_Bool)1] [(_Bool)1] [(short)14] [i_1] [i_1] [i_1] [i_1])), (var_13))))))) ? (min(((~(((/* implicit */int) (unsigned short)65504)))), (((/* implicit */int) var_13)))) : (((/* implicit */int) max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [(unsigned short)8]), (arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_1])))))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))) ^ (min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [4]))))), (min((((/* implicit */long long int) arr_6 [(unsigned short)0])), (arr_0 [i_0])))))));
            }
        } 
    } 
}
