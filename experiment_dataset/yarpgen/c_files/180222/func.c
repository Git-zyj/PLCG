/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180222
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
    var_10 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_1)))) - (min((((/* implicit */unsigned long long int) var_2)), (var_6))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] |= ((/* implicit */int) min((min((min((var_7), (((/* implicit */long long int) var_5)))), (min((((/* implicit */long long int) 1522021092)), (var_1))))), (((/* implicit */long long int) var_2))));
            var_11 ^= max((min(((~(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) (short)-3207))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)0)), (((((/* implicit */_Bool) -2834325580644329160LL)) ? (-2834325580644329160LL) : (-2834325580644329160LL)))))));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_12 = ((/* implicit */int) arr_2 [i_2]);
            var_13 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))) : (min((-8654968297171620561LL), (((/* implicit */long long int) (short)0)))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_3] [i_2] [i_0]) : (var_7))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_0] [i_0])))))))));
                arr_15 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) max((8654968297171620560LL), (((/* implicit */long long int) max((max((var_4), (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (short)471)))))))));
                var_14 |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) -2834325580644329160LL)) : (13979229862865965450ULL))));
                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) 1530971698)) ? (min((((/* implicit */unsigned long long int) (unsigned char)80)), (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43737))) : (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? (max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)39), ((unsigned char)91))))))))));
                arr_16 [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) 63);
            }
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    arr_22 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) << (((/* implicit */int) (_Bool)0))))));
                    arr_23 [i_0] [i_2] [i_4] [i_5] = ((((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1] [i_4 + 2])) * (((/* implicit */int) arr_9 [i_4 + 2] [i_4 - 1] [i_4 - 1])));
                }
                /* LoopSeq 4 */
                for (signed char i_6 = 3; i_6 < 7; i_6 += 1) 
                {
                    var_16 |= (~(var_8));
                    arr_26 [i_6] [i_4 + 3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (~(arr_8 [i_4 + 3] [i_6] [i_6 + 2])));
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)2])) && (((/* implicit */_Bool) (unsigned short)56027)))))));
                        arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_4)))));
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) (_Bool)0);
                        var_19 = ((/* implicit */unsigned int) (-(var_9)));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (var_6)));
                        var_21 = ((/* implicit */signed char) ((short) arr_2 [i_0]));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_6 + 2] [i_6 + 4] [i_6 + 3] [i_6 + 2] [i_6 - 3] [i_6 + 2])) : (((/* implicit */int) arr_29 [i_6 - 2] [i_6 + 1] [i_6 - 3] [i_6 - 2])))))));
                    }
                    for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_38 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) arr_30 [i_9]));
                        var_23 = ((/* implicit */unsigned short) arr_21 [i_0] [i_6]);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 1] [i_2])) ? (((/* implicit */int) arr_9 [i_4 + 3] [i_2] [i_4])) : (((/* implicit */int) arr_9 [i_4 + 2] [i_2] [i_2]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_4 + 2] [i_2] [i_6 + 4]))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_6 + 1] [i_6 + 1])) && (((/* implicit */_Bool) arr_12 [i_4 + 3] [i_6 + 3] [i_6]))));
                        var_27 = ((/* implicit */unsigned int) arr_39 [i_10] [i_10] [i_6] [i_4] [i_2] [i_0]);
                    }
                    arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_6] [i_4 + 1] [i_6 + 1] [i_6 + 1] [i_4 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_2] [i_4] [i_6])) : (((/* implicit */int) (_Bool)0))))) : (0ULL)));
                }
                for (unsigned char i_11 = 2; i_11 < 10; i_11 += 3) 
                {
                    var_28 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_4 + 1] [i_11 - 2] [i_11 - 2] [i_11 - 1]))));
                    arr_45 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((((~(var_4))) + (2147483647))) << (((((unsigned int) (short)-25105)) - (4294942191U)))));
                }
                for (unsigned long long int i_12 = 4; i_12 < 10; i_12 += 1) 
                {
                    arr_49 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) -1299481009)) < (var_8)))) < (((/* implicit */int) arr_11 [i_4 + 2] [i_4 - 1] [i_12 - 3]))));
                    var_29 = arr_18 [i_0] [i_2] [i_4];
                }
                for (unsigned char i_13 = 2; i_13 < 9; i_13 += 4) 
                {
                    arr_53 [i_0] [i_2] [i_4] [i_13] = ((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0]))))) > ((+(18446744073709551615ULL))));
                    var_30 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)20));
                }
                var_31 = ((/* implicit */unsigned short) (signed char)0);
                var_32 = ((/* implicit */long long int) min((var_32), ((-(var_8)))));
                arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((2834325580644329159LL) >> (((((/* implicit */int) arr_46 [i_0] [8ULL] [i_4])) - (43509)))));
            }
        }
        var_33 |= ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (arr_51 [i_0] [i_0]))) && (((2834325580644329160LL) > (((/* implicit */long long int) ((/* implicit */int) (short)1190))))))));
    }
}
