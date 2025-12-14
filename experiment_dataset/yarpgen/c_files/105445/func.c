/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105445
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
    var_13 = ((/* implicit */unsigned int) 3763164793240733220LL);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_14 |= ((/* implicit */unsigned long long int) 3763164793240733237LL);
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) != (arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)1)))))) >= (max((((/* implicit */long long int) (short)-7)), (arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (arr_2 [i_1 + 3])));
            var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (18446744073709551614ULL)))) : ((-(((/* implicit */int) var_5))))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0])), ((unsigned short)15)))))) : (((/* implicit */int) (unsigned char)207))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_18 = max((((/* implicit */long long int) arr_5 [i_0] [i_2])), (((((/* implicit */_Bool) (unsigned short)65528)) ? ((~(arr_1 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_2] [7ULL]))))))));
            var_19 = ((/* implicit */short) (((~(max((6891377879063973932ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56945))) - (max((((/* implicit */unsigned int) (unsigned char)92)), (3371369578U))))) - (923654659U)))));
            var_20 -= ((/* implicit */_Bool) var_7);
            var_21 = ((/* implicit */_Bool) max((var_4), (9223372036854775807LL)));
        }
        var_22 = ((/* implicit */short) (((_Bool)1) ? (((var_9) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)57374))))) : (((var_7) >> (((((/* implicit */int) (short)28075)) - (28051))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */short) var_9)), (var_3))))))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_23 = ((/* implicit */long long int) arr_9 [i_3]);
        var_24 = ((/* implicit */short) ((((/* implicit */int) max((arr_9 [i_3]), (((/* implicit */unsigned short) (short)-16384))))) & ((+(((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((arr_11 [i_3] [i_4]) ? (-4404086568196403852LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [(short)23]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((var_4) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5])))))))));
                    var_26 = ((/* implicit */short) (unsigned short)6819);
                    var_27 = ((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (((/* implicit */unsigned long long int) ((arr_11 [i_3] [i_5]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))));
                    var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (max((var_7), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_4] [i_5])))) : (var_11)))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((/* implicit */int) var_10)) + (max(((-(((/* implicit */int) arr_15 [i_5])))), (((/* implicit */int) var_3))))));
                                var_30 -= ((/* implicit */short) max((max((((/* implicit */int) arr_9 [i_3])), (arr_14 [i_3] [i_3] [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_5] [i_7])))))));
                                var_31 = ((/* implicit */int) (!(max((arr_16 [i_3] [(short)21] [i_3] [i_3] [i_3]), (arr_16 [(unsigned short)1] [i_6] [(unsigned short)1] [i_3] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_32 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_10)))) * (((/* implicit */int) var_2))))), (var_7));
            var_33 = ((/* implicit */long long int) ((max((18446744073709551613ULL), (((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5)))))))) ^ (var_11)));
            var_34 = ((/* implicit */short) ((((/* implicit */int) max((var_3), (var_0)))) < (((((/* implicit */int) arr_11 [i_3] [i_3])) - (((/* implicit */int) var_3))))));
        }
    }
    for (short i_9 = 2; i_9 < 18; i_9 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) var_3);
        var_36 = ((/* implicit */unsigned long long int) var_3);
        var_37 = ((/* implicit */_Bool) (((~(max((((/* implicit */unsigned int) (short)-32761)), (57885788U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_9 - 2] [i_9])) != (((/* implicit */int) (unsigned short)8))))))));
        var_38 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_4)), (var_7))), (((/* implicit */unsigned long long int) var_0))));
    }
    var_39 = ((/* implicit */short) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) max((((-690301982) == (((/* implicit */int) var_8)))), (((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0))))))))));
    var_40 = ((/* implicit */unsigned char) max((((max((var_11), (((/* implicit */unsigned long long int) var_5)))) != (max((var_7), (((/* implicit */unsigned long long int) var_6)))))), (var_12)));
}
