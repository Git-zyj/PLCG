/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1456
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
    var_20 = ((/* implicit */short) var_0);
    var_21 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((35184371957760ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 35184371957760ULL)) && (((/* implicit */_Bool) 18446708889337593855ULL)))))))))) : ((-(18446708889337593855ULL))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~(arr_2 [i_0 + 2])));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (5424674212848834433ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])))))))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 18446708889337593850ULL))));
                    var_23 = ((/* implicit */signed char) ((9223372036854775803LL) & (9223372036854775807LL)));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 261888U)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) ((9223372036854775803LL) == (-9223372036854775792LL))))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 891209870773342277LL))));
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_0 [i_3]))))));
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_1] [(unsigned short)14] [i_3] [i_1])) ? (arr_0 [i_2]) : (arr_15 [i_1] [(unsigned char)0] [i_1] [i_1] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_1] [i_4]))))))));
                        }
                        arr_17 [i_1] [i_1] [(short)12] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-20995)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_4])))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_3 [i_2]) : (arr_3 [i_1]))))))));
                    }
                    for (long long int i_6 = 4; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) arr_12 [i_1] [i_3] [i_3] [i_1]);
                            arr_23 [i_1] [i_2] [i_2] [i_1] [i_6] [i_2] = ((/* implicit */unsigned long long int) (~(9223372036854775807LL)));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 605241636U)) && (((/* implicit */_Bool) 1057057893U)))) && (((/* implicit */_Bool) arr_14 [i_1 - 2] [i_2] [i_3] [i_1 - 2] [i_2] [i_1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) arr_9 [i_8] [i_1] [i_1] [i_2]);
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_14 [i_8] [i_6] [i_3] [(unsigned char)6] [i_2] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_6] [(short)15])) & (((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_3] [i_2]))))) : (4294967295U)));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (~(arr_19 [i_8] [i_2] [i_2] [i_6]))))));
                        }
                        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)169)) ^ (((/* implicit */int) (unsigned short)39220))))) == (35184371957765ULL)));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7313487865179933748LL)) ? (((((/* implicit */int) (signed char)103)) >> (((35184371957766ULL) - (35184371957763ULL))))) : (2086465076)))) <= (18446708889337593850ULL)));
                        var_35 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) >= (((/* implicit */int) arr_24 [8ULL] [i_2])))))))) ? (18446708889337593843ULL) : (((((((/* implicit */unsigned long long int) 9223372036854775802LL)) * (18446708889337593850ULL))) ^ (((/* implicit */unsigned long long int) -9223372036854775792LL))))));
                        var_36 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 8104680465321272613LL))))))) == (((/* implicit */int) arr_21 [i_1] [i_6] [i_3] [2U] [i_1]))));
                    }
                    for (long long int i_9 = 4; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_3 [i_9 + 1]))))));
                        arr_29 [i_1 - 1] [i_1] = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1]);
                    }
                    var_38 = arr_18 [i_3] [i_3] [i_1] [i_1] [i_1];
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3905511905U)) ? (((/* implicit */int) arr_24 [i_3] [i_1])) : (((/* implicit */int) arr_27 [i_3] [i_2] [i_3] [i_1] [i_2] [i_2]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_14 [(unsigned short)13] [(unsigned short)13] [(short)6] [i_1 + 2] [i_1 + 2] [i_1]) : (((/* implicit */unsigned long long int) arr_19 [i_1] [i_2] [i_2] [i_1 + 2])))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (16215600368190577818ULL) : (arr_2 [i_2]))) >= (((/* implicit */unsigned long long int) 4294967292U)))))));
                }
            } 
        } 
        var_40 *= ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) (unsigned char)113)) ? (arr_16 [i_1] [i_1] [i_1] [(signed char)14]) : (arr_0 [i_1]))) > (((((/* implicit */_Bool) arr_7 [(short)4] [(short)4])) ? (arr_16 [(unsigned short)12] [i_1] [i_1] [(unsigned short)12]) : (((/* implicit */long long int) 983213927U))))))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [6] [6]))) : (3418785287761345695LL)))) ? (arr_20 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(unsigned char)6] [i_10] [i_10] [i_10] [(unsigned char)6])))))))))));
        var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)126))));
        arr_33 [i_10] [i_10] = ((/* implicit */signed char) ((4439013826831434975LL) << (((983213927U) - (983213927U)))));
        arr_34 [i_10] [(unsigned short)8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) * (((/* implicit */int) arr_8 [(signed char)21] [i_10] [i_10])))))));
    }
}
