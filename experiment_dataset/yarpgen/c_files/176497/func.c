/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176497
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
    var_14 = var_4;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)49062)))) & (((/* implicit */int) (unsigned short)42307)))), (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_1] [(unsigned short)20] [i_2] [i_3] [i_3] [i_4] = max((arr_0 [(unsigned short)1]), (((unsigned short) (unsigned short)1)));
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_4])) % (((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_2 - 1]))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)55031)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_8 [i_4] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)52254))))))));
                                arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] [i_4] = (unsigned short)1;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) min(((unsigned short)16256), ((unsigned short)24880)))))), (((((/* implicit */_Bool) min((var_2), (var_8)))) ? ((~(((/* implicit */int) (unsigned short)51421)))) : (((/* implicit */int) (unsigned short)52247))))));
                                var_18 = ((unsigned short) ((unsigned short) (unsigned short)28));
                                arr_16 [i_0] [i_1] [i_0] [i_6] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned short)3488), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)64358)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((arr_3 [i_5 - 4] [i_1]), ((unsigned short)38165)))) : (((((/* implicit */int) arr_8 [(unsigned short)17] [i_2 + 1])) >> (((((/* implicit */int) (unsigned short)17582)) - (17563)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64358)) ? (((/* implicit */int) ((unsigned short) arr_20 [i_2 - 1] [i_1] [i_7 + 1] [i_7] [i_0]))) : (((/* implicit */int) max(((unsigned short)0), ((unsigned short)18026)))))))));
                                arr_24 [i_0] [i_1] [i_7] [i_7 - 1] [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)16266)) - (((/* implicit */int) (unsigned short)13)))), (((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned short)20065))))));
                                arr_25 [i_0] [i_1] [i_2] [(unsigned short)4] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(unsigned short)20] [(unsigned short)5])) ? (((/* implicit */int) min(((unsigned short)65535), (var_0)))) : (((((/* implicit */int) (unsigned short)1193)) / (((/* implicit */int) (unsigned short)8191))))));
                                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20909)) ? (((/* implicit */int) (unsigned short)8160)) : (((/* implicit */int) (unsigned short)38387))))) ? (((/* implicit */int) min(((unsigned short)63571), (arr_14 [i_0] [i_1] [i_2 + 1] [i_7] [i_8])))) : (((((/* implicit */_Bool) (unsigned short)38100)) ? (((/* implicit */int) arr_20 [(unsigned short)0] [i_7] [i_2 - 2] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_1]))))))) ? (((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (unsigned short)306)) : (((/* implicit */int) min((arr_2 [i_0] [(unsigned short)11] [i_7 + 1]), ((unsigned short)65534)))))) : (((((/* implicit */_Bool) min(((unsigned short)27356), (var_11)))) ? (((/* implicit */int) arr_5 [i_7] [i_2 + 1] [i_7 - 1] [i_7 - 1])) : (((((/* implicit */int) var_5)) % (((/* implicit */int) arr_7 [i_0] [(unsigned short)14]))))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) (unsigned short)23822))) ? (((/* implicit */int) min((var_7), ((unsigned short)65525)))) : (((/* implicit */int) (unsigned short)39521)))), (((((((/* implicit */int) (unsigned short)8646)) & (((/* implicit */int) (unsigned short)59185)))) / (((/* implicit */int) arr_13 [i_0] [(unsigned short)16] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = (unsigned short)8193;
    var_23 ^= ((unsigned short) (unsigned short)31542);
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                arr_39 [i_9] [i_9] [i_9] [i_12] [i_13] [i_9] = (unsigned short)511;
                                arr_40 [i_9] [i_10] [i_12] [i_12] [i_13] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)16), (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31542)) || (((/* implicit */_Bool) (unsigned short)65499))))) : ((+(((/* implicit */int) (unsigned short)65535))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] [(unsigned short)16] [(unsigned short)2] |= min(((unsigned short)189), ((unsigned short)1177));
                }
            } 
        } 
    } 
}
