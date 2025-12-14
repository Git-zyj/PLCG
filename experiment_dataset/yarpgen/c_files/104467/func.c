/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104467
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
    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */_Bool) (+(((long long int) 6542244172971544062ULL))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((max((arr_4 [i_0]), (arr_4 [i_0]))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1]) : (((/* implicit */int) arr_1 [i_0]))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_2] [i_3 + 3]))), (6542244172971544050ULL)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3 + 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [(_Bool)1] [i_3] [i_3 + 2])) || (((/* implicit */_Bool) arr_12 [i_3 + 2] [(unsigned char)2] [(unsigned char)5] [i_3 - 1]))))), (arr_5 [i_0] [(short)13])));
                        var_14 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(1240841984U))))))), (arr_2 [i_3] [i_2])));
                        var_15 &= ((/* implicit */unsigned long long int) ((int) ((short) min((arr_3 [i_0] [i_2]), (((/* implicit */short) arr_5 [i_2] [i_3 + 2]))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) max((((unsigned long long int) arr_6 [i_0] [i_1])), (((/* implicit */unsigned long long int) (~(((long long int) arr_10 [i_2])))))));
                        arr_17 [i_4] [i_2] [i_1] [i_0] &= ((/* implicit */long long int) min((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)1)))) - (((/* implicit */int) arr_9 [(signed char)13] [(_Bool)1] [i_2] [i_4]))))), (((((((/* implicit */_Bool) (short)-15386)) || ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (2U)))));
                    }
                    var_17 = arr_10 [i_0];
                }
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_23 [i_5 + 1] [i_5] [i_6] = ((/* implicit */_Bool) ((unsigned char) ((signed char) arr_10 [i_5 + 4])));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((11904499900738007546ULL) << (((/* implicit */int) arr_1 [i_6]))))) ? (min((arr_15 [i_0] [i_1] [i_5] [i_6]), (1240841979U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_1] [i_5 + 3] [i_6]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-117)))))))) : (min((6542244172971544072ULL), (((/* implicit */unsigned long long int) (+(arr_11 [i_6]))))))));
                    }
                    var_19 = ((/* implicit */unsigned short) min((min((arr_20 [(short)5] [i_1] [i_5 + 4] [i_5 + 3]), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-19)) + (2147483647))) << (((arr_15 [i_0] [i_0] [i_0] [i_0]) - (949184809U)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [(_Bool)1] [i_5] [i_5 + 4] [i_5 - 1] [(unsigned short)1] [i_1])) < (((/* implicit */int) arr_14 [i_5] [i_5] [i_5 + 4] [i_5 + 1] [i_1] [i_0])))))));
                }
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_31 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_15 [i_9] [i_1] [i_7] [i_9])) ? (arr_15 [i_0] [i_0] [(unsigned short)15] [i_0]) : (arr_15 [i_0] [i_1] [i_7] [i_8]))), (((/* implicit */unsigned int) (!((_Bool)1))))));
                                arr_32 [i_9] [i_8] [i_7] [i_1] [i_0] = (-(((((/* implicit */_Bool) arr_25 [3ULL] [i_8] [(unsigned char)6])) ? (11904499900738007552ULL) : (((/* implicit */unsigned long long int) 1U)))));
                                var_20 = ((/* implicit */long long int) (!(max((arr_24 [i_0] [i_0]), (arr_24 [7ULL] [i_0])))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((6542244172971544069ULL) * (((/* implicit */unsigned long long int) arr_4 [i_9]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_8])))))));
                                var_22 -= 6542244172971544072ULL;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_2);
}
