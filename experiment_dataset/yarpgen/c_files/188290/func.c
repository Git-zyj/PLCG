/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188290
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
    var_15 ^= ((/* implicit */signed char) var_8);
    var_16 = var_9;
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (_Bool)1);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (unsigned char)227)))))));
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_15 [i_1] [i_1] = 3589670303263747145ULL;
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1]))));
                            var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5]))))));
                        }
                    } 
                } 
                arr_17 [i_1] [i_1] [i_3] = (unsigned short)189;
                var_21 &= ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] [i_3]);
                /* LoopSeq 4 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-67)) ^ (-1963034860))) < ((-(((/* implicit */int) (signed char)-84))))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((arr_13 [i_1] [i_2] [i_2] [i_6] [i_2] [i_7] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0ULL] [i_2] [i_3] [i_6] [i_7]))))))));
                        var_24 = ((/* implicit */int) max((var_24), (((arr_18 [i_1] [i_1] [i_1] [(_Bool)0]) ? (1963034841) : (((/* implicit */int) var_5))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-6605))));
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_22 [i_8] [i_2] [i_3] [i_6] [i_8] [i_1]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) (+(arr_8 [i_1])));
                        arr_31 [i_9] [i_1] [i_6] [i_6] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_18 [i_6] [i_2] [i_3] [i_1]) ? ((-(-6366933545673074899LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (2018931828U))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (short)30836))));
                        var_28 = ((/* implicit */unsigned int) 1963034859);
                        var_29 = ((/* implicit */signed char) arr_19 [i_1]);
                    }
                    arr_32 [i_1] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6596)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (short)-13780))));
                }
                for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    arr_36 [i_1] = ((/* implicit */short) arr_29 [i_1] [i_1]);
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) arr_35 [i_2] [i_1] [i_10] [i_11]);
                        var_31 = ((/* implicit */unsigned char) arr_1 [i_1] [i_11]);
                    }
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_12] [i_10] [i_1] [i_2] [i_1]))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)86)) : ((~(((/* implicit */int) arr_24 [i_12] [i_10] [i_1] [i_1] [i_1] [i_1]))))));
                        arr_44 [i_1] [i_2] [i_2] [i_3] [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) arr_35 [i_1] [i_1] [i_10] [i_12]);
                        arr_45 [i_1] [i_2] [i_1] [i_10] [i_12] = ((/* implicit */unsigned char) arr_29 [i_1] [i_1]);
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_25 [i_1] [i_3]);
                    }
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (short)30827);
                        arr_50 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_49 [i_1] [i_2] [i_3] [i_10] [i_1]);
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (~(((/* implicit */int) arr_27 [i_1] [4LL] [i_2] [i_10])))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_53 [i_14] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_54 [i_1] [(short)2] [i_3] [i_10] [i_14] &= ((/* implicit */unsigned char) (unsigned short)37913);
                    }
                }
                for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_35 |= ((/* implicit */unsigned long long int) var_12);
                    var_36 ^= ((/* implicit */unsigned char) (_Bool)1);
                    var_37 += (short)-30828;
                }
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    arr_61 [i_1] [i_1] [i_1] [(unsigned short)2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)83)) < (arr_41 [i_1] [(unsigned short)6] [i_3] [i_16]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        arr_64 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(6366933545673074899LL)));
                        arr_65 [(unsigned short)2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_4)));
                    }
                }
                arr_66 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_40 [i_1])) : ((-(((/* implicit */int) (unsigned short)24975))))));
            }
            var_38 = ((/* implicit */unsigned long long int) arr_49 [i_1] [i_2] [i_1] [i_2] [i_1]);
            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) arr_19 [i_1]))));
        }
        arr_67 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) ((((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_1])))) < (((/* implicit */int) (short)13780)))))));
        arr_68 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1] [i_1]) < (arr_10 [i_1] [i_1] [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            var_40 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-26408)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (arr_60 [0] [i_18] [i_18]))) < (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-126), (((/* implicit */signed char) (_Bool)1))))))));
            arr_71 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_1] [i_18] [i_1] [i_1] [i_1]))))) >= (((((/* implicit */_Bool) arr_20 [i_1] [i_18] [i_1] [i_18] [i_18])) ? (arr_19 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_18] [i_18] [i_18] [i_18])))))));
        }
        arr_72 [8] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [4] [i_1] [i_1] [4])) < (((/* implicit */int) ((((/* implicit */int) arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])) < (((/* implicit */int) ((-6382164863456902859LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-104)))))))))));
    }
}
