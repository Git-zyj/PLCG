/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132665
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 += ((/* implicit */signed char) ((unsigned short) arr_1 [i_0]));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_7))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                    arr_14 [9LL] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned int) 6343952769463660320ULL));
                }
            } 
        } 
        arr_15 [i_1 - 1] [(unsigned short)12] = (~(arr_2 [i_1 - 2]));
        arr_16 [i_1] = var_11;
    }
    /* LoopSeq 4 */
    for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        arr_28 [i_4] = ((/* implicit */unsigned short) (!(((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48974)))))));
                        var_16 = ((/* implicit */long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((12102791304245891296ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (12102791304245891232ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_4 + 2] [i_6 - 1])))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) 4294967295U))));
                            var_19 -= ((/* implicit */unsigned long long int) var_11);
                        }
                        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) var_10);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_1))));
                            var_22 = ((/* implicit */long long int) 11428589718794350547ULL);
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) (unsigned short)21674)) - (21672)))));
                            arr_33 [i_4] [i_4] [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [i_9 + 1] [i_6 - 1]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) var_13);
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    }
                    arr_37 [i_4] = ((/* implicit */unsigned int) (unsigned short)0);
                }
            } 
        } 
        arr_38 [i_4] [i_4 + 3] = arr_25 [i_4 + 4] [8U] [i_4 - 3];
    }
    for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        arr_41 [i_11] = ((/* implicit */unsigned short) ((var_10) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)29368))) ? (((/* implicit */int) max((arr_6 [i_11] [i_11]), ((unsigned short)27048)))) : (((/* implicit */int) arr_9 [i_11])))))));
        var_26 = ((/* implicit */signed char) ((((((/* implicit */int) min((var_9), ((unsigned short)38488)))) == (((/* implicit */int) (unsigned short)8191)))) ? (((max((((/* implicit */unsigned long long int) (unsigned short)38487)), (11949625706708646277ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)93)), ((unsigned short)32736)))) / (((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (unsigned int i_13 = 2; i_13 < 18; i_13 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_1))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (-(((/* implicit */int) ((3154165696U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32800)))))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [(signed char)1] [i_11])) ? (((/* implicit */int) (unsigned short)30940)) : (((/* implicit */int) (unsigned short)64074))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) % (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9257))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)496)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min(((unsigned char)149), (var_6))))))));
    }
    for (unsigned char i_14 = 3; i_14 < 12; i_14 += 3) 
    {
        var_31 |= ((/* implicit */signed char) -4248633103647903954LL);
        var_32 = ((/* implicit */unsigned int) min((var_32), (((((((/* implicit */_Bool) arr_30 [i_14] [i_14] [i_14] [i_14 - 1] [i_14])) && (((/* implicit */_Bool) arr_30 [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 - 1] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (min((((/* implicit */unsigned int) arr_34 [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14 + 1])), (arr_21 [i_14])))))));
        var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)42932))))) : (6343952769463660320ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)27048))))) ? (arr_29 [i_14 - 1] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))))))));
    }
    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        arr_55 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16561)) ? (min((((/* implicit */unsigned long long int) (unsigned short)18717)), (16760500859833587662ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_15])))))));
        arr_56 [(unsigned char)0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-8142255807679432362LL) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        arr_57 [i_15] [i_15] = 18355562493156399950ULL;
        var_34 -= ((/* implicit */unsigned short) 1088066200U);
    }
}
