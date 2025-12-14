/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156589
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 529624539165648818LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    arr_6 [i_2] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [(unsigned short)2] [i_2] [i_2] [i_0 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_2 - 3] [4LL] [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [2LL] [i_3] [i_4 + 2])) > (((/* implicit */int) (_Bool)1)))))))), (((((unsigned int) 2095104U)) % (((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_2] [i_0]))))));
                                arr_14 [i_2] [i_3] [i_2] [i_1] [i_2] = arr_4 [10] [i_2] [i_2];
                                arr_15 [i_4] [i_4] [i_2 - 1] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)4] [i_2]))) + (2212800306U)))) ? (((((/* implicit */_Bool) 3803206141U)) ? (17179869183ULL) : (((/* implicit */unsigned long long int) -1077167133)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_2] [i_3]) > (((/* implicit */unsigned long long int) -6775247577355594858LL))))))))));
                                arr_16 [2LL] [i_1] [(_Bool)1] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 2] [i_0 - 1] [i_2 - 2]))) ? (min((var_14), (((/* implicit */long long int) (signed char)-117)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 - 2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_2] [3U] [3U] [i_2 + 1] [i_3] [i_2])))))))));
                                var_18 = max((((/* implicit */int) (signed char)-90)), ((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11603))));
                    var_20 = ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_1)), (2587948105188467386LL)))))) ? ((-(max((var_5), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_5] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_2])) ? (5866399328003263247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [i_2])))));
                        var_21 |= ((/* implicit */unsigned int) (-(arr_8 [i_0] [i_1] [i_1] [i_5])));
                        var_22 -= ((/* implicit */signed char) var_6);
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (arr_0 [(unsigned char)6]) : (3697726785U)))) ? (((((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_0] [(signed char)14] [i_0 + 1] [i_0])) + (((/* implicit */int) arr_11 [(signed char)8] [i_1] [i_1] [(_Bool)1] [i_2])))) : (arr_10 [i_2 - 3] [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 2])));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) (-(var_0)));
                            var_25 = ((((/* implicit */int) arr_11 [13LL] [i_0 + 2] [i_2 - 1] [(unsigned short)14] [i_2])) != (((/* implicit */int) ((signed char) arr_9 [i_0 - 1] [i_0 - 1] [0] [2U] [(unsigned char)6] [i_5]))));
                            var_26 = ((/* implicit */long long int) var_10);
                        }
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_18 [i_5 - 2] [i_1] [i_2] [i_2 - 3] [i_1]))));
                            arr_25 [i_2] [i_2] [i_1] [i_1] [(signed char)3] = ((/* implicit */int) (~(((((/* implicit */_Bool) 7564154454300712770ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17371956805620780084ULL)))));
                            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(signed char)9] [i_0 + 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned char)10] [i_0 + 2] [i_0 - 2] [i_2 - 3] [i_5 - 2])) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        arr_30 [i_2] [i_1] [i_2] [i_8 + 1] = ((arr_2 [i_0 + 1] [i_2 + 1] [i_8 + 2]) & (arr_2 [i_0 + 1] [i_2 - 1] [i_8 + 1]));
                        var_29 |= ((/* implicit */unsigned int) (signed char)-37);
                        var_30 = 15585338104089579254ULL;
                    }
                }
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (-(arr_2 [10U] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */long long int) 233332000U)) & (((((/* implicit */_Bool) 3471705068U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)126))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            {
                var_32 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (min((((((/* implicit */_Bool) 541984243U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) : (arr_31 [i_9]))), (((/* implicit */unsigned int) arr_35 [i_9] [i_9]))))));
                var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9] [7U]))) * (arr_34 [(_Bool)1] [i_10] [i_9]))) + (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_9])) * (((/* implicit */int) arr_32 [(_Bool)1])))))))) ? (((unsigned long long int) min((((/* implicit */unsigned long long int) 1999075198U)), (13900505005126790715ULL)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_9] [i_10])))))));
            }
        } 
    } 
    var_34 &= ((/* implicit */unsigned short) var_1);
    var_35 &= ((/* implicit */signed char) -1637210409);
}
