/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150592
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -34770392)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64158)) || (((/* implicit */_Bool) var_4))))), (var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_8)))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (max((((/* implicit */int) var_3)), (-1808184778)))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [8U])))))));
        var_14 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4155))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0] [i_0]))))))));
        var_15 &= min((((/* implicit */int) ((unsigned short) (signed char)-118))), (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 14ULL));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1808184778) >= (((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1355398547U)) ? (arr_5 [i_1 - 1]) : (((/* implicit */int) (short)15052))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((signed char) 3002502075U));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 2777331616U)) ? (((/* implicit */int) (unsigned char)15)) : (arr_5 [i_1])))));
                var_17 = ((/* implicit */unsigned long long int) ((_Bool) 1627452111));
                arr_13 [i_1] = (signed char)118;
            }
            for (unsigned short i_4 = 4; i_4 < 20; i_4 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15760)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned short)47565)))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) (unsigned char)216);
                    arr_19 [i_1] [i_1] [i_4 - 1] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2147483643)) % (arr_10 [i_2 - 1] [i_1] [i_2])));
                }
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))))) ? (arr_8 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1])))));
                        arr_26 [i_1] [i_2] [i_4] [i_1] [i_6 + 1] [i_4] [i_7] = ((/* implicit */short) ((signed char) ((unsigned char) (unsigned short)47565)));
                        arr_27 [i_1] [i_1] [i_2] [i_6] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)8191)) & ((-2147483647 - 1)))) < (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_2) : (((/* implicit */int) var_5))))));
                        arr_28 [i_1] [i_7] = ((/* implicit */unsigned int) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_21 = ((/* implicit */short) ((unsigned int) ((arr_14 [i_1] [i_1 + 2] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_6] [(unsigned char)4]))))));
                    }
                    var_22 += 18446744073709551596ULL;
                }
                for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 2) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)231)) ? (-1118097409804690847LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-2147483647 - 1));
                }
                for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    var_24 = ((/* implicit */short) ((unsigned char) arr_15 [i_1] [i_1 - 1] [i_9 - 1] [i_9]));
                    var_25 += ((/* implicit */long long int) var_7);
                    arr_35 [i_2 + 1] [i_1] [i_4] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))));
                    var_26 = ((/* implicit */unsigned int) var_9);
                }
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_8 [i_2] [i_1] [i_2 - 1]))));
                var_28 = ((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2]);
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned int) 1930997438U)))));
                            var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_11]) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [i_1 + 2] [i_4 - 4] [i_4] [i_4 - 2])) != (((/* implicit */int) (signed char)-37))))) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_11] [i_2 - 2]))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4 - 4] [i_10] [i_1] [i_4 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))) : (arr_40 [i_4 - 3] [i_10] [i_1])));
                            arr_43 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2 + 1] [i_4 - 2])) || (((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2 + 1] [i_4 - 4]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_12 = 4; i_12 < 20; i_12 += 1) /* same iter space */
            {
                arr_46 [i_1] [i_2] [i_2] = 2777331589U;
                arr_47 [i_1 - 1] [i_2] |= -1LL;
                var_32 = ((/* implicit */int) ((unsigned int) (signed char)-25));
                arr_48 [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) var_6);
            }
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_33 &= ((/* implicit */long long int) arr_5 [i_1]);
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((short) (unsigned short)0)))));
            }
            arr_51 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_15 [i_1] [i_1] [i_2 - 2] [i_2]);
        }
        arr_52 [14ULL] &= ((/* implicit */unsigned char) ((var_3) ? (2777331610U) : (arr_32 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1])));
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) | (3U)));
            arr_56 [i_1] [i_1] = ((/* implicit */int) 2777331620U);
            var_36 = (unsigned char)221;
        }
        var_37 &= ((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_1 + 2] [i_1 + 2] [0LL] [i_1 + 2])))));
    }
}
