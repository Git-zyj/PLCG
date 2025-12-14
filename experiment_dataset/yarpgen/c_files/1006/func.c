/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1006
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
    var_18 = ((/* implicit */signed char) (~(var_17)));
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_16), (var_17)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? (5U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)18793))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_20 = arr_0 [i_0];
        var_21 = ((/* implicit */unsigned char) (~((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)50))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((171713693U), (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1])))) >> (((var_0) - (8286332968179979152ULL)))));
        var_23 = ((/* implicit */int) (-((~(((((/* implicit */_Bool) -429965022)) ? (((/* implicit */unsigned long long int) var_7)) : (var_1)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        var_24 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4194304U)))) || (((/* implicit */_Bool) max((arr_6 [i_2 + 1]), (((/* implicit */long long int) (unsigned short)46742)))))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_2]))) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_10 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) arr_5 [i_2]);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_25 = ((/* implicit */short) var_17);
                var_26 = ((/* implicit */signed char) (unsigned char)224);
            }
            var_27 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_7 [i_2] [i_3] [i_2])))), ((((((+(var_2))) + (2147483647))) << ((((((~(((/* implicit */int) arr_7 [i_2] [i_3] [i_3])))) + (31433))) - (30)))))));
            arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_12), ((+(((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))))) / (max((5724713552120612648ULL), (((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 1]))))));
        }
        var_28 -= ((/* implicit */unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (short)32743))))), (min((31LL), (((/* implicit */long long int) 0U)))))))));
        var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) min((arr_13 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]), (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 1] [i_2 + 1] [i_2])) ? (arr_13 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) : (arr_13 [i_2] [i_2 - 1] [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 1] [i_2] [i_2 + 1])) ? (arr_13 [i_2] [i_2 - 1] [i_2] [i_2]) : (arr_13 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 3; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)0))))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((arr_6 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_16)))))))))))));
        var_31 = (i_5 % 2 == zero) ? (((/* implicit */int) (((((!(((/* implicit */_Bool) (unsigned short)24219)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)86)) * (((/* implicit */int) (signed char)0))))) : ((-(var_14))))) >> (((arr_8 [i_5] [i_5] [i_5]) - (99177921U)))))) : (((/* implicit */int) (((((!(((/* implicit */_Bool) (unsigned short)24219)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)86)) * (((/* implicit */int) (signed char)0))))) : ((-(var_14))))) >> (((((arr_8 [i_5] [i_5] [i_5]) - (99177921U))) - (1212837134U))))));
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 23; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_29 [i_9] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_6 - 3] [i_8 + 1] [i_8 + 1])) % (((/* implicit */int) arr_21 [i_6 - 2] [i_8 + 1] [i_6 - 2]))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) arr_23 [i_6] [1ULL] [i_8])) : ((~(var_17)))));
                }
                for (int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    arr_33 [(_Bool)1] [i_6] [(_Bool)1] [23U] [i_6] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))) == (((((/* implicit */unsigned long long int) arr_6 [i_8 + 1])) | (0ULL)))));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
                for (signed char i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    arr_37 [i_6] [i_6] [i_8] [i_8] [i_6] = ((/* implicit */unsigned long long int) var_12);
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-19217))));
                        arr_41 [i_12] [i_12] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                        arr_42 [i_6] [i_6] [i_6] [i_11] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-24))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_26 [i_6] [i_7] [i_8] [i_11] [i_11] [i_11])))) | ((~(((/* implicit */int) (short)-19219))))));
                        arr_43 [i_11] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (+(var_9)));
                    }
                    for (int i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) var_5);
                        var_37 = arr_45 [i_6] [i_11] [i_8] [i_8] [i_7] [i_6];
                    }
                    for (int i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) (unsigned short)46743);
                        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_8 + 1] [i_11] [i_14]))));
                    }
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((unsigned int) arr_32 [i_11 + 2])))));
                }
                for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_7] [i_8])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (arr_9 [i_6 - 2] [i_6 - 3] [i_8 + 1]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)40137)) * (((/* implicit */int) (short)-32760))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        var_42 = (!((!(((/* implicit */_Bool) var_1)))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_16] [i_8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) : (3473435279U)))) | (((((/* implicit */_Bool) arr_53 [i_8] [i_15])) ? (arr_11 [i_6] [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_6])))))));
                    }
                }
                arr_56 [i_6 + 1] [i_7] [i_8 + 1] [(short)14] &= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_6] [i_6 - 2] [i_8 + 1] [i_8 + 1] [i_17 + 1])) >= (((/* implicit */int) arr_30 [i_6] [i_6 - 3] [i_8 + 1] [i_8 + 1] [i_17 + 3]))));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_16) : (((/* implicit */int) arr_28 [i_7]))));
                }
                for (unsigned long long int i_18 = 1; i_18 < 22; i_18 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        var_46 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_6] [i_7] [i_7] [i_18] [i_7]))))) * (((/* implicit */int) (short)13080)));
                        var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_6 - 2]))));
                        var_48 = ((/* implicit */short) (+((+(12019984119851051304ULL)))));
                    }
                    arr_63 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6 - 2] [i_8 + 1] [i_18 + 1] [i_6]))));
                }
                for (unsigned long long int i_20 = 1; i_20 < 22; i_20 += 3) /* same iter space */
                {
                    var_49 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) arr_8 [i_6 + 2] [i_7] [i_6])) / (var_9)))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))))))));
                        var_51 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_6 - 2] [i_8 + 1] [i_8 + 1])) & (((/* implicit */int) arr_52 [i_6] [i_8 + 1] [i_6]))));
                    }
                }
                var_53 = ((_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)127))));
            }
            var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) ((unsigned int) arr_30 [i_6 + 2] [i_6] [i_6 + 2] [i_6] [i_6 + 1])))));
            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) : (var_1)));
        }
        arr_71 [i_6] [(signed char)23] = ((/* implicit */unsigned int) (+(var_17)));
        arr_72 [i_6] = ((4290772992U) << (((var_16) - (1563153596))));
        var_56 = ((/* implicit */_Bool) var_7);
        var_57 = ((/* implicit */_Bool) (~(((int) (short)(-32767 - 1)))));
    }
}
