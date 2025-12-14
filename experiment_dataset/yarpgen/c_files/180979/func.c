/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180979
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_0 [i_0]))));
                                arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_4] [(signed char)9] [i_4] [i_4] [i_4] [i_4 + 4] [i_4 - 1]), (arr_10 [12LL] [i_4] [i_4] [i_4] [i_4] [i_4 + 4] [i_4 - 1])))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 9729886155570105013ULL)) ? (((/* implicit */int) (short)711)) : (((/* implicit */int) (short)32767))))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)32767))));
                                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_4 + 4] [i_4] [i_4 + 3] [i_4] [11LL]))) / (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (arr_2 [i_4 + 2] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) (-(21U)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (arr_2 [6LL] [0ULL] [i_3])))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] [6U]))) & (((((/* implicit */_Bool) max((arr_4 [i_2] [i_2]), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (arr_4 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0]))))))), ((~((~(((/* implicit */int) var_4))))))));
                    var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) max((var_2), (var_2)))), (16484606852497261239ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_2))));
                        var_23 = ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [(_Bool)1]);
                        var_24 = ((/* implicit */signed char) arr_9 [2ULL] [i_1] [i_2] [i_1]);
                    }
                }
            } 
        } 
    } 
}
