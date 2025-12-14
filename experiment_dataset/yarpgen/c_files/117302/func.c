/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117302
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
    var_19 = ((/* implicit */long long int) ((_Bool) var_10));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 2]))))));
        var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 4]))))));
    }
    var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_11)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (min((var_18), (((/* implicit */long long int) var_8)))))));
    var_22 = ((/* implicit */signed char) (-(200870215)));
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        arr_6 [i_1] = ((/* implicit */_Bool) (-(arr_3 [i_1])));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_23 = min((arr_4 [i_2]), (((/* implicit */long long int) (+(((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_24 = arr_1 [i_2];
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_2] [i_2] [(unsigned char)4] [i_2] = ((/* implicit */unsigned long long int) (-(arr_12 [i_2] [i_2] [i_4])));
                        var_25 = ((/* implicit */unsigned char) (+(arr_3 [i_4])));
                    }
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_19 [i_2])) : (((/* implicit */int) var_7))))))) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
                        arr_21 [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2] [i_2] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */long long int) arr_15 [i_2] [i_3] [3U] [i_4] [i_6] [i_6])) : (min((((/* implicit */long long int) arr_3 [i_6])), (arr_14 [i_2] [i_2] [i_2] [i_2]))))))));
                        arr_22 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */int) min((687445230U), (687445231U)));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 7; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
                            var_27 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_18 [i_7] [i_7] [i_8 + 2] [i_8] [i_8]))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 18446744073709551602ULL))) ? (arr_4 [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3607522065U)) ? (-399572620) : (-1))))));
                        }
                        var_29 = ((unsigned char) arr_3 [i_2]);
                        /* LoopSeq 4 */
                        for (long long int i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) (~((-(8019323086813880963LL)))));
                            arr_30 [i_2] [i_9] = ((int) max(((+(arr_9 [i_2]))), (((/* implicit */int) var_8))));
                            arr_31 [i_9] [i_2] [i_7] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (+(1714769059)));
                            var_31 = ((/* implicit */unsigned short) arr_9 [i_2]);
                        }
                        for (long long int i_10 = 3; i_10 < 9; i_10 += 1) 
                        {
                            arr_36 [i_4] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */int) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [8LL] [i_2] [i_10 + 1])) ? (arr_23 [i_2] [i_4] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10] [i_2] [2ULL] [i_2] [i_2])))))), (arr_1 [i_3])))));
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-3))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 7; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                            var_34 = (+(var_6));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_18 [i_11 + 3] [i_11 + 3] [i_11 + 2] [i_11] [i_11 - 1])))) ? (arr_38 [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11] [i_2] [i_11 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_2] [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_4] [6LL] [i_2])) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) (-((+(arr_29 [i_2] [i_2] [i_4] [i_4] [i_7] [i_3] [i_2])))));
                            arr_43 [(signed char)4] [i_2] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) var_0)), (arr_34 [i_7] [i_7])));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [6U])) ? (((/* implicit */long long int) (~((+(((/* implicit */int) arr_33 [i_2] [i_3] [i_4] [i_2] [(unsigned char)6]))))))) : (arr_4 [12LL])));
                            arr_44 [i_2] [i_3] [i_4] [i_7] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) (~(arr_10 [i_2]))))) ? ((+(((/* implicit */int) arr_16 [i_2] [i_2] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))))));
                        }
                    }
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_14 [i_13 - 1] [i_13 + 1] [i_2] [i_13 + 1]);
                        arr_49 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) var_17))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_40 [i_13 + 2] [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_40 [i_13 + 2] [i_13 + 1] [i_13] [(unsigned char)9] [i_13])))) : (((/* implicit */int) var_8))));
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) arr_3 [8]);
        /* LoopSeq 4 */
        for (int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            arr_53 [i_2] [i_2] [i_2] = ((/* implicit */int) (-(((long long int) ((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14] [i_14] [i_14] [i_2] [i_14])) ? (((/* implicit */int) arr_28 [i_14] [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)-26445)))))));
            arr_54 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_11 [i_14] [i_2] [i_2]);
            var_39 = ((/* implicit */unsigned short) (~(arr_12 [i_2] [i_14] [i_2])));
        }
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            var_40 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_41 [i_2] [i_2] [(unsigned char)7] [5LL] [i_15] [i_15] [0LL])) ? (((/* implicit */int) arr_41 [i_15] [8U] [i_15] [(unsigned char)0] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
            arr_57 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8266228945727116962ULL)) ? (((/* implicit */unsigned long long int) 687445215U)) : (18446744073709551602ULL)))) ? (var_9) : (((/* implicit */long long int) arr_3 [i_15]))))) ? (((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_10)))) : (var_3)));
            var_41 = ((/* implicit */unsigned long long int) arr_3 [i_15]);
        }
        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (long long int i_18 = 1; i_18 < 6; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            arr_69 [i_2] [6U] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_68 [i_18 + 2] [i_18] [i_18 + 4] [i_18 + 1] [i_18 + 2])))));
                            var_42 = (+((~(arr_1 [i_18 - 1]))));
                            var_43 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_61 [i_18 + 2] [i_18] [i_18] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_18 - 1] [i_18 + 3] [i_18] [i_18 + 3] [i_18 + 1] [i_18 + 2]))) : (arr_61 [i_18 + 3] [i_18 + 3] [i_18 + 3] [i_2])))));
                            var_44 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 0U))))));
                            arr_70 [i_2] [i_2] [i_17] [i_17] [i_19] = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_2] [i_17] [i_2] [i_2] [i_2] [i_2]);
                        }
                    } 
                } 
            } 
            var_45 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_16])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)7)))));
            arr_71 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_2] [7LL] [i_2]))));
        }
        for (long long int i_20 = 3; i_20 < 7; i_20 += 1) 
        {
            arr_76 [0LL] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_67 [i_2] [(unsigned short)3] [i_2] [i_2] [2U])), (arr_61 [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [(_Bool)1])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_0))))))))));
            var_46 = ((/* implicit */_Bool) ((arr_33 [8ULL] [i_2] [i_20 - 3] [i_2] [i_20 - 3]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_20 - 1] [i_2] [i_20])))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (arr_12 [i_2] [i_20] [i_20])))) ? ((~(arr_32 [i_20 - 3] [i_20 - 3] [i_20 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 9; i_21 += 1) 
            {
                for (long long int i_22 = 1; i_22 < 7; i_22 += 3) 
                {
                    {
                        var_47 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)58413))));
                        arr_81 [i_20] [i_20] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [i_2] [(unsigned short)3] [(unsigned short)3] [i_22 + 2]))));
                        arr_82 [i_2] [i_21] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_75 [i_2]);
                    }
                } 
            } 
        }
    }
}
