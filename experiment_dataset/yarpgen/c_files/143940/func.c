/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143940
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) -1LL))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) arr_6 [i_0]))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) >= (-2147483647)))) | (((/* implicit */int) ((14140302632280211184ULL) == (((/* implicit */unsigned long long int) var_0))))))) : (((((((/* implicit */int) (signed char)-70)) <= (var_6))) ? (388918831) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_3] [i_1 + 4] [i_0])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_3)))), (max((var_6), (((/* implicit */int) (signed char)30))))))) ? ((~(arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))))))));
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_6)) == (var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((var_0), (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [11LL])) ? (((/* implicit */unsigned int) -388918831)) : (var_0)))))))) : (var_7)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [(unsigned short)14] [i_1] [i_2] [(unsigned char)8] [(signed char)14]))))) / (arr_5 [i_3 - 3] [i_3] [i_1 - 3])));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(1760059941429657871LL))))));
                            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) == (134217726U)));
                            var_22 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_4] [i_0] [i_3] [2ULL])) : (arr_8 [i_4] [i_4] [i_4])))));
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-26))))), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (17472557036781309246ULL)))))) ? (min((arr_10 [i_1 - 3] [12ULL] [i_3] [i_3 - 1] [(unsigned short)8] [i_5]), (arr_10 [i_1 + 3] [i_3 - 3] [i_1 + 3] [i_3 - 4] [2U] [i_3 - 2]))) : (var_4)));
                            var_24 = ((/* implicit */unsigned int) arr_8 [i_1] [(signed char)16] [i_2]);
                            var_25 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_5])) ? ((-(var_4))) : (max((((/* implicit */unsigned long long int) var_0)), (var_9)))))));
                        }
                        arr_14 [i_1] [i_2] [(unsigned char)15] = ((((/* implicit */int) ((((/* implicit */_Bool) (~(11805996905213010379ULL)))) || (((/* implicit */_Bool) ((11805996905213010379ULL) << (((-2060065818) + (2060065847))))))))) != (((/* implicit */int) var_3)));
                        var_26 = ((/* implicit */long long int) var_4);
                    }
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_1] [i_2]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)8] [i_0] [i_2] [i_2] [i_2]))) & (var_9)))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]);
                        arr_19 [i_0] [i_1] = ((/* implicit */signed char) arr_17 [i_1] [i_1] [i_1 + 2] [(unsigned short)15]);
                    }
                    var_29 = ((/* implicit */signed char) ((var_7) & (((/* implicit */long long int) ((((unsigned int) -1618703074046116139LL)) << (((700028653U) - (700028643U))))))));
                }
            } 
        } 
    }
    for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        var_30 -= ((/* implicit */signed char) var_3);
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_31 *= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)4))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_10))) <= (((/* implicit */int) (signed char)127))));
                var_33 = var_5;
            }
            var_34 |= min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) arr_9 [i_7 + 1] [12ULL] [i_8] [0U] [i_8])) : (((/* implicit */int) arr_11 [i_7] [i_7] [12ULL] [i_7 - 1]))))), (var_1));
        }
    }
}
