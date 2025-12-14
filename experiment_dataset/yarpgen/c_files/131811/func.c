/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131811
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)8476)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_12))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_2] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1] [i_0 + 4])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0 + 1])))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_2 [i_1] [i_0] [i_1]))));
                        }
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0 - 2] [12LL] [i_0 - 2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))))) : (arr_3 [i_0 + 4] [i_0])));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (signed char)1))));
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [(signed char)5] [i_0] [i_0 + 4] [i_0 + 2] [i_1 + 2])) & (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 2] [i_0 + 4] [i_0 + 1] [i_1 + 2]))));
                    }
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [(unsigned short)8] [(signed char)7] [i_0 + 3] [i_1 + 1]))))), (((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_5])) ? (arr_1 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64))))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (5U)))))))))));
                        var_21 = ((/* implicit */unsigned short) (+((+(-1703178969)))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_22 = max(((unsigned short)39535), (((/* implicit */unsigned short) (signed char)56)));
                            var_23 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) - (arr_13 [i_6] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_0 - 1])) && (((/* implicit */_Bool) arr_5 [i_0 - 1]))))) : (((/* implicit */int) min((arr_6 [i_0 - 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]), (arr_6 [i_0 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2]))))));
                            var_24 = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)0))))));
                            arr_18 [i_0 - 2] [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_5] [i_6] = ((/* implicit */unsigned short) arr_17 [i_0] [4ULL] [i_0] [i_0 + 3] [(unsigned char)14] [i_0 + 3]);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (-(min((arr_13 [i_0] [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (signed char)-60))));
                            arr_22 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (!((((_Bool)0) && (((/* implicit */_Bool) -9223372036854775797LL))))))), (((((-6308737274142645986LL) > (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [9ULL]))))) : (var_8)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1099511627776LL))))) == (min((((((/* implicit */_Bool) arr_17 [i_8] [i_5] [(unsigned char)1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_24 [6LL] [i_0] [i_1] [i_1] [(signed char)3] [i_5] [i_8])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_15 [(signed char)4] [i_1] [(signed char)14] [i_5] [i_8]))))))));
                            arr_25 [14LL] [15U] [i_1] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) arr_14 [(short)7] [(short)7] [15ULL] [i_5]);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_1 [i_0 - 2]))));
                        }
                    }
                    arr_26 [i_2] [i_1] [i_2] = ((/* implicit */signed char) min((3113220951U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 736227736U)) && (((/* implicit */_Bool) var_4)))))));
                    arr_27 [i_1] = ((/* implicit */signed char) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_1 + 2] [i_1] [9] [i_0] [9ULL])) ? (((/* implicit */int) var_10)) : (var_8))))));
                }
            } 
        } 
    } 
}
