/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12900
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
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) (~(var_9)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                arr_10 [i_1] = ((/* implicit */unsigned int) var_6);
                arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (+(arr_3 [i_1 - 2] [i_2 + 2])));
            }
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(var_16))))));
                arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)64))));
                arr_16 [i_0] [i_1 + 1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-16384))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)152)) * (((/* implicit */int) (unsigned char)220))))) : (arr_3 [i_1 + 2] [i_1])));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) var_15);
                    arr_19 [i_4] &= ((/* implicit */unsigned char) var_15);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_24 [i_0] [i_5] &= ((/* implicit */long long int) (-(((((/* implicit */int) arr_22 [i_0] [i_1] [i_3] [i_4] [i_4] [i_5])) * (((/* implicit */int) arr_21 [i_4] [i_1]))))));
                        arr_25 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] [(signed char)3] = ((/* implicit */_Bool) arr_8 [i_4]);
                        arr_26 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2758199985U)))) && (((/* implicit */_Bool) 764476084U))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_5))));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_29 [i_6] [i_3] [(unsigned char)19] [i_3] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((unsigned char) (signed char)-37)))));
                    var_21 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                }
                arr_30 [i_3] [i_1 - 2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_1 + 4] [i_1] [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) arr_12 [i_1 - 3]))));
            }
            for (int i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)35)) * (((/* implicit */int) (unsigned char)0))));
                var_23 = ((/* implicit */int) ((unsigned short) ((short) (_Bool)0)));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    arr_36 [i_0] [i_1] [(short)10] [i_8] |= ((/* implicit */unsigned int) arr_21 [i_7 + 1] [i_1 + 1]);
                    var_24 = (_Bool)1;
                    /* LoopSeq 3 */
                    for (signed char i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                    {
                        arr_39 [i_0] [i_8] [i_8] [i_8] [i_7 + 4] = ((/* implicit */int) (((~(var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1 + 3] [i_7 - 2] [i_7 - 2] [i_7] [i_9 - 1])))));
                        var_25 = ((/* implicit */_Bool) (~(var_1)));
                    }
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
                    {
                        arr_42 [i_0] [i_8] [i_0] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7 + 2] [i_7] [i_10 + 2]))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_40 [i_0] [i_0] [i_7]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [i_11] [i_8] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) arr_8 [i_1 - 3]);
                        arr_46 [i_0] [i_8] [i_1] [i_0] [i_8] [i_8] [i_11] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)15)) * (((/* implicit */int) (short)-19484))))));
                        arr_47 [i_11] [i_1] [i_8] [i_8] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(arr_18 [i_7 + 1] [i_7] [i_11] [i_11])));
                    }
                }
                var_27 &= ((/* implicit */unsigned int) (~(var_3)));
                arr_48 [i_0] [i_1 + 4] [(unsigned char)18] [i_7 + 2] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
            arr_49 [i_1] [i_1] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) 3979157296U)) ? (arr_40 [i_1] [i_0] [i_1 - 3]) : (arr_40 [i_0] [i_0] [i_1 + 3])));
            arr_50 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)55219)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (short)11852))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-120)) : (arr_37 [i_0] [(short)16] [i_0] [i_0] [i_0] [1U]))))))));
            arr_53 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))) : (arr_3 [i_0] [(short)12])));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 2) 
            {
                arr_57 [i_13] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(var_5)))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) * (1993492287U)))));
                arr_58 [i_0] [i_0] [i_0] = ((_Bool) (signed char)(-127 - 1));
            }
        }
        var_29 = ((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_8 [i_0])) * (2593674716U))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_33 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_61 [i_14] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) * ((~(0LL)))));
            var_31 = ((/* implicit */unsigned char) arr_56 [i_0] [i_0]);
        }
        for (short i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            arr_64 [i_0] &= ((/* implicit */_Bool) ((((_Bool) var_7)) ? (((((/* implicit */int) arr_31 [i_0])) + (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_6 [i_15] [i_15] [i_15 + 1]))));
            arr_65 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_18 [i_15 + 1] [i_15] [(unsigned short)4] [i_15])) * (3817054675U)));
        }
    }
}
