/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110157
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) var_13);
                        arr_11 [i_0 + 1] [i_0] [i_0 - 1] [(_Bool)1] [i_0] [i_3] = ((/* implicit */_Bool) arr_0 [(short)10]);
                    }
                    /* vectorizable */
                    for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */long long int) ((_Bool) var_9));
                        var_19 = (!(arr_6 [i_0] [i_2 - 1] [i_1] [i_0]));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 -= ((/* implicit */long long int) 0ULL);
                        arr_18 [i_0] [i_2] [i_0] = arr_7 [(short)10] [(short)10];
                        arr_19 [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31))) : (arr_13 [(_Bool)1] [(_Bool)1] [i_2 - 1] [2ULL])))))));
                    }
                    arr_20 [i_0] [i_1] [(unsigned char)9] = ((/* implicit */short) min((1108866314203338855LL), (((/* implicit */long long int) max((var_13), (arr_6 [i_0] [i_1] [i_2] [i_1 - 1]))))));
                    arr_21 [i_0] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 2; i_6 < 7; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) ((var_12) ? (((/* implicit */int) arr_1 [i_6 + 2])) : (((/* implicit */int) (unsigned short)43949))))));
        var_22 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_6]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [0U] [i_6] [i_6 - 2] [i_6]))))) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) (unsigned short)62)))));
        arr_25 [i_6 + 3] = ((((/* implicit */long long int) ((((/* implicit */int) (short)-10299)) * (((/* implicit */int) var_1))))) <= (var_6));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29721))))))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)22175)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32767)))) * (((/* implicit */int) arr_16 [i_6] [i_6] [(short)10] [(short)10])))))));
    }
    for (short i_7 = 2; i_7 < 7; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (unsigned short)65473))))) : (arr_4 [(signed char)6])))) ? (max((((((/* implicit */_Bool) arr_10 [i_7] [i_7] [1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (17592186044415LL))), (((arr_22 [i_7 - 2]) / (((/* implicit */long long int) arr_17 [i_7] [i_7] [i_7] [i_7 - 1] [i_7])))))) : (((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 3])) ? (arr_12 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 2; i_8 < 8; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 6; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) var_2);
                        arr_37 [i_7] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_9 + 1] [i_10]))))), (var_9))));
                        var_26 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7] [i_8 + 1] [(unsigned short)5])) ? (1685308795U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((3502602825U) >> (((((/* implicit */int) (unsigned short)22175)) - (22154)))))) : ((~(var_5)))));
                    }
                } 
            } 
            arr_38 [(unsigned char)6] [i_7 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) arr_34 [(unsigned char)9] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8 + 2] [i_8 - 2]))))), ((-(((/* implicit */int) (unsigned short)21301))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_8])) ? (((/* implicit */int) arr_8 [i_7 + 3] [i_7 + 3] [7U] [(unsigned char)3])) : (((/* implicit */int) (unsigned char)42))))))) : (((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_15))))))))));
        }
    }
    var_27 = ((/* implicit */signed char) ((unsigned short) (unsigned short)9355));
    var_28 = ((/* implicit */long long int) var_9);
    var_29 = ((/* implicit */unsigned int) var_2);
}
