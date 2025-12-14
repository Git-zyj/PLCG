/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138139
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((var_0) + (2147483647))) >> (((-1859962460) + (1859962466)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 11284412957026991018ULL))) / ((+(((/* implicit */int) (signed char)-59))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_10 = ((((/* implicit */int) var_4)) ^ ((~(((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_11 &= ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_13 [i_1] [i_2 + 1] [i_1] [i_4] [i_1] [i_2 + 1] = ((/* implicit */long long int) 234851287);
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */int) ((_Bool) (signed char)112));
                        arr_17 [i_2 + 1] [i_2] [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551614ULL))));
                        arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)79))))) < (-1859962460)));
                        arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_3] = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) arr_5 [i_3] [i_3])))));
                        var_14 += ((/* implicit */signed char) var_9);
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (var_7) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                        arr_27 [i_1] [i_2] [i_1] [i_7] [6ULL] |= ((/* implicit */unsigned short) (signed char)-126);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_5);
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)17515)))) + (68)))));
                    }
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-24))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (var_7)));
                        arr_36 [i_1] [i_2 + 1] [i_3] [i_9] [i_10] = ((/* implicit */unsigned short) ((var_4) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (1859962459))) : ((~(((/* implicit */int) var_4))))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 9; i_11 += 4) 
                    {
                        arr_40 [i_1] [i_2] [i_11 - 1] [i_9] [i_11] [i_11 - 1] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                        arr_41 [i_1] [i_1] [i_2 + 1] [i_2] [i_3] [i_9] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                        var_19 = ((/* implicit */int) ((((long long int) var_1)) << ((((((~(((/* implicit */int) var_6)))) + (65))) - (35)))));
                        arr_42 [i_1] [i_2] [i_3] [i_9] [i_3] = ((short) var_0);
                    }
                    var_20 = arr_34 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1];
                    arr_43 [i_1] = ((/* implicit */_Bool) var_0);
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    arr_47 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_44 [i_1] [i_2 + 1] [i_3] [i_3] [i_12]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_46 [i_1])) ? (((/* implicit */long long int) -1737352082)) : (0LL)))));
                    arr_48 [i_1] = ((/* implicit */_Bool) (~(arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                    var_21 = 1466403735;
                    arr_49 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)(-32767 - 1)))));
                    var_22 *= var_1;
                }
                for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 2; i_14 < 10; i_14 += 1) 
                    {
                        arr_56 [i_1] [i_2 + 1] [i_1] [i_13] [i_14 - 2] [i_14] [i_2 + 1] = var_7;
                        var_23 = (~((+(((/* implicit */int) var_5)))));
                        arr_57 [i_1] [i_2 + 1] [i_3] [i_13] [i_13] [i_1] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_1] [i_2 + 1] [i_2 + 1])) : ((~(((/* implicit */int) (unsigned short)65280)))));
                        var_24 = ((/* implicit */long long int) -502550037);
                    }
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        arr_62 [i_1] [i_2] [i_1] [i_13] [i_15] = ((/* implicit */unsigned short) 6738115086212579833LL);
                        arr_63 [i_1] [i_1] [i_2 + 1] [i_3] [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) (+(((var_7) + (((/* implicit */int) var_2))))));
                        var_25 = ((/* implicit */int) (!(var_4)));
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        arr_66 [i_1] = ((/* implicit */short) (~(var_7)));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (arr_35 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) var_0))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_1))));
                        arr_70 [i_1] = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_32 [i_2 + 1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (3222129059U))))));
                        arr_71 [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_1] [i_13] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_3] [i_13])) : (var_7)));
                        arr_72 [i_2] [i_2 + 1] [i_2] [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) var_3);
                        var_29 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_4))));
                    }
                    for (long long int i_18 = 2; i_18 < 9; i_18 += 1) 
                    {
                        arr_75 [i_1] = ((/* implicit */unsigned long long int) ((long long int) 8272830971008523883ULL));
                        var_30 = ((/* implicit */int) max((var_30), ((~(((/* implicit */int) var_3))))));
                        arr_76 [i_1] [i_2 + 1] [i_2] [i_1] [i_13] [i_18 + 2] [i_18 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (3858203687576415140ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (2044547633U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : ((-9223372036854775807LL - 1LL))));
                        arr_77 [i_1] [i_1] [i_2 + 1] [i_3] [i_13] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_65 [i_1] [i_18 - 2] [i_18 - 2] [i_1] [i_2 + 1]) : (((/* implicit */unsigned int) 535273397))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9364)) ? (arr_28 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    }
                    var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))));
                }
                arr_78 [i_1] = ((/* implicit */unsigned int) var_1);
            }
            arr_79 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_44 [i_1] [i_2] [i_2 + 1] [i_1] [i_2 + 1])) % (((/* implicit */int) (unsigned char)15))));
            /* LoopNest 2 */
            for (unsigned short i_19 = 1; i_19 < 8; i_19 += 4) 
            {
                for (int i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    {
                        arr_87 [i_1] [i_2] [i_19] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_60 [i_2 + 1] [i_1] [i_19] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_5))))))));
                        arr_88 [i_20] [i_1] [i_19] [i_19 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_45 [i_2 + 1] [i_2 + 1] [i_19 + 3] [i_20])) : (((/* implicit */int) arr_45 [i_2 + 1] [i_2 + 1] [i_19 + 4] [i_20]))));
                        arr_89 [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_4) ? (((/* implicit */int) var_5)) : (-1579703156));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))) >> (((/* implicit */int) (!((_Bool)0))))))));
    }
    var_34 &= (~(((/* implicit */int) var_4)));
    var_35 = ((/* implicit */unsigned short) var_9);
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (535273397) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)21856)))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))));
}
