/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159168
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
    var_15 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0 - 3] [i_0 + 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))), (((268435455U) & (((/* implicit */unsigned int) 2147483647))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_16 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) (unsigned char)62)), (0ULL))))) ^ (((unsigned long long int) arr_5 [i_2 - 1]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_5 + 1] [i_2 + 1] [i_2 - 2] [i_2 + 1]));
                        arr_19 [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_4] [i_2 - 1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2418797871U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967295U)))) ? (var_3) : (((((/* implicit */_Bool) arr_16 [i_1] [i_2 - 1] [i_3] [i_4] [i_5 + 1])) ? (((/* implicit */int) var_5)) : (arr_14 [i_1] [i_2] [i_3] [i_4] [i_5])))));
                        arr_20 [i_2 - 1] [i_2 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 2])) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1]))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((unsigned long long int) var_10)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1])))));
                        arr_25 [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) : (arr_9 [i_1] [i_1] [i_3] [i_4])))) ? (arr_13 [i_6 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_10 [i_2 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                    }
                    for (int i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_4))));
                        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_7 + 3])) && (((4026531841U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    }
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) ((((arr_5 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))))) ? (((/* implicit */int) arr_31 [i_2] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) (signed char)-73))));
                        arr_32 [i_3] [i_3] [i_3] [i_3] = ((((((/* implicit */int) (unsigned char)154)) * (((/* implicit */int) (short)0)))) << (((((/* implicit */int) arr_4 [i_2 - 1] [i_2])) - (96))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) - (262143ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    arr_37 [i_9] [i_2 - 1] [i_3] [i_3] = ((/* implicit */_Bool) var_5);
                    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 3; i_10 < 12; i_10 += 1) 
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] = arr_16 [i_1] [i_2 - 2] [i_2 - 2] [i_1] [i_10 - 2];
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned long long int) arr_22 [i_1] [i_2 - 1] [i_2 - 1] [i_9] [i_10 - 3] [i_9])))));
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) var_6);
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_9]));
                    }
                    for (unsigned long long int i_12 = 4; i_12 < 14; i_12 += 1) 
                    {
                        arr_48 [i_1] [i_3] [i_12 - 4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16791)) ? (var_9) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_2 - 2] [i_1]))));
                        var_25 &= ((/* implicit */signed char) ((18396378137895237578ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12 + 1] [i_12] [i_12])))));
                        arr_49 [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */unsigned int) ((arr_41 [i_1] [i_1] [i_1] [i_9] [i_12 - 4] [i_9] [i_2 - 2]) % (18258235111139072608ULL)));
                        arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1] [i_3] [i_1] [i_1] [i_12 - 2] [i_12 + 1]))) | (arr_36 [i_1] [i_9] [i_1] [i_9] [i_1])));
                    }
                    arr_51 [i_1] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) (-(arr_36 [i_9] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 2])));
                    arr_52 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))) - (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) arr_15 [i_1] [i_2 + 1] [i_3] [i_3] [i_9] [i_9]))))));
                }
                var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) >= (((/* implicit */int) var_14))))) / (((/* implicit */int) var_0))))), (4026531846U)));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) var_7))));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_31 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_31 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]))));
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-4248))));
            }
            arr_55 [i_2 + 1] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1]);
            arr_56 [i_2 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)35656), (((/* implicit */unsigned short) (_Bool)1))))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) (-(arr_26 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))));
        }
    }
    for (int i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
    {
        arr_60 [i_14] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((int) var_1)), (((/* implicit */int) ((signed char) var_8)))))), ((~(arr_5 [i_14])))));
        arr_61 [i_14] = ((/* implicit */short) max((((/* implicit */int) var_2)), (max((((/* implicit */int) arr_4 [i_14] [i_14])), (((((/* implicit */_Bool) -441443895)) ? (-1084972922) : (((/* implicit */int) (unsigned char)240))))))));
        arr_62 [i_14] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_14] [i_14]))))) ? (max((4ULL), (((/* implicit */unsigned long long int) (signed char)-33)))) : (((/* implicit */unsigned long long int) arr_22 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))));
        var_30 = ((/* implicit */unsigned int) min(((unsigned short)65524), (((/* implicit */unsigned short) (short)2048))));
    }
    var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_2) ? (533684777) : (((/* implicit */int) var_11)))))) ? (min((((((/* implicit */int) var_6)) - (((/* implicit */int) var_5)))), (((((/* implicit */int) (short)28553)) + (((/* implicit */int) (signed char)112)))))) : ((+(((/* implicit */int) (unsigned short)24665))))));
    var_32 = ((/* implicit */signed char) 0);
}
