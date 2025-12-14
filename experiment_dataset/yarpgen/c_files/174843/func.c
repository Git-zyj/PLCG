/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174843
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 |= ((/* implicit */unsigned short) ((long long int) arr_2 [i_0]));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) /* same iter space */
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)-21601), (((/* implicit */short) arr_1 [i_2 - 3] [i_2 + 2])))))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)21608)) ? (var_2) : (((/* implicit */int) (short)21600)))), (arr_2 [i_0]))))));
                arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_2 + 1] [i_1 + 2] [(unsigned char)0]))) ? (((arr_4 [i_2 - 1] [i_1 + 3] [2U]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2 - 3] [i_1 + 1] [i_1])))) : (((/* implicit */int) min((arr_4 [i_2 - 2] [i_1 + 1] [i_1]), (arr_4 [i_2 + 1] [i_1 - 1] [i_1]))))));
            }
            for (unsigned short i_3 = 3; i_3 < 8; i_3 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */short) var_7);
                var_15 = ((/* implicit */signed char) var_4);
                var_16 = ((/* implicit */unsigned long long int) ((1140338018U) - (((577685199U) - (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)32)) / (((/* implicit */int) (signed char)-64)))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) / ((((_Bool)1) ? (1287475187U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32764)))))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 3; i_4 < 8; i_4 += 4) /* same iter space */
            {
                arr_15 [i_4] [i_0] [i_0] = (((!(((/* implicit */_Bool) (unsigned short)6)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-55)));
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((((arr_4 [i_1] [i_4] [i_4]) ? (((/* implicit */int) arr_14 [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_5])))) != (((/* implicit */int) arr_1 [i_1] [i_1 - 1]))));
                    var_19 = ((/* implicit */unsigned int) (unsigned short)127);
                }
                for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_19 [i_6] [(signed char)0] [i_4] [(signed char)0] [i_4]))));
                    arr_20 [i_0] [i_6] [i_4] = ((/* implicit */int) var_12);
                }
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (unsigned char)197)))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)35044));
                    arr_23 [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) arr_22 [i_1 + 3] [i_4 + 2])) <= (var_11)));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_1 + 2])) ? ((+(arr_13 [i_0] [i_1] [i_4] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1])))));
                }
                for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 3; i_9 < 7; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_9 - 1] [i_4 - 1])) ? (((/* implicit */int) var_8)) : (var_4))) | (((/* implicit */int) (unsigned short)15604))));
                        arr_29 [i_0] [i_1 - 1] [i_8] [i_8] [i_9] = ((/* implicit */short) var_6);
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((2810939780925948960LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51529))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)24514)) : (var_4))) : (((/* implicit */int) ((short) (unsigned char)235))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_26 = ((((/* implicit */_Bool) arr_19 [i_4 - 3] [i_8] [i_4] [i_8] [i_10])) ? (((/* implicit */int) arr_7 [i_4 + 2] [i_1 + 1])) : (((/* implicit */int) arr_19 [i_4 + 2] [i_8] [i_4] [i_8] [i_1 + 1])));
                        var_27 = ((((/* implicit */_Bool) 5ULL)) ? (arr_2 [i_0]) : (arr_2 [i_0]));
                        var_28 = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_1)) == (((/* implicit */int) arr_24 [i_1]))))));
                    }
                    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (short)24514))));
                    var_30 = ((signed char) arr_13 [i_1 + 3] [i_4 + 2] [i_4 - 2] [i_4]);
                    arr_33 [i_8] [i_8] [i_4] [i_1] [i_0] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)16))));
                }
            }
            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        }
        var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_33 = ((unsigned int) 4054580951U);
}
