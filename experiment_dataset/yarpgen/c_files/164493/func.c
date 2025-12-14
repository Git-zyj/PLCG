/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164493
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((-2LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))));
        arr_3 [i_0] = ((/* implicit */long long int) var_14);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    var_21 = (-(arr_15 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        arr_18 [i_1] [(unsigned char)1] [i_2] [i_3 + 1] [i_4] [i_5 - 2] [i_5] = ((/* implicit */unsigned char) (unsigned short)26350);
                        var_22 *= ((/* implicit */short) ((long long int) ((var_19) ? (4294967295LL) : (arr_12 [i_2] [i_4]))));
                    }
                    arr_19 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                }
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                {
                    arr_22 [i_1] [i_3 - 1] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2]))) * (17063948331949732411ULL)));
                    arr_23 [i_1] [13ULL] [i_2] [(_Bool)1] [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                }
                for (long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned short)30427))));
                    arr_28 [(unsigned char)6] [i_3 + 2] [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-26503))));
                }
                for (unsigned long long int i_8 = 4; i_8 < 23; i_8 += 1) 
                {
                    var_24 |= ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_1] [i_1] [i_1 + 2]));
                    var_25 = ((/* implicit */short) arr_21 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_3 + 1] [i_3 + 2]);
                    arr_31 [i_3] [(short)15] [i_1] [i_2] = ((/* implicit */unsigned char) ((short) arr_7 [i_1 - 1]));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 4; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        arr_35 [i_2] |= ((/* implicit */long long int) (((~(1382795741759819209ULL))) % (((unsigned long long int) var_7))));
                        var_26 = (!(((/* implicit */_Bool) arr_24 [i_1 - 2] [i_2] [i_3 + 1] [i_8] [i_9 - 3])));
                        var_27 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 17063948331949732395ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5688))) : (6405486865363418359LL))));
                        arr_36 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 3] [i_8] = ((/* implicit */unsigned short) ((arr_34 [(_Bool)1] [(unsigned short)14] [i_3] [i_2] [i_1]) ? ((+(arr_21 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_1] [i_2] [i_3 - 1] [i_10 + 1])) - ((+(((/* implicit */int) arr_8 [i_10] [i_10]))))));
                        var_30 = ((/* implicit */unsigned short) ((_Bool) arr_9 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 2]));
                        var_31 += ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_9 [i_8 - 1] [i_8] [i_8 - 4] [i_8]))));
                    }
                }
                arr_39 [6ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1]);
                arr_40 [i_1 - 1] [i_3 + 2] [i_3 + 2] = (+(17LL));
                arr_41 [i_3 - 1] [i_2] [i_1 + 3] = ((/* implicit */unsigned long long int) ((var_16) ^ (arr_32 [i_1] [i_1 + 4] [i_3 + 1])));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (unsigned char i_12 = 2; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_46 [i_1 + 2] [i_1] [i_1] [i_1 + 4] [i_1] = ((/* implicit */_Bool) (+(314474713U)));
                            arr_47 [i_1] [(short)23] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_4 [i_12]))))));
                            arr_48 [i_1] [i_2] [i_2] [i_3] [(unsigned short)23] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_1 + 4] [i_2] [i_3 + 2] [i_11] [(_Bool)1] [i_12 - 2]))));
                            arr_49 [i_12] [i_11] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) -2378231878971473134LL);
                        }
                    } 
                } 
            }
            arr_50 [i_2] = ((/* implicit */long long int) ((unsigned short) arr_45 [i_1] [i_1 - 2] [i_1 + 4] [i_1] [i_1] [i_1 + 4] [i_1 + 4]));
        }
        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) max((var_32), ((+(((((/* implicit */_Bool) arr_44 [i_1] [(_Bool)1] [i_1] [12LL] [(unsigned short)20] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_10 [i_13] [(short)19] [i_13] [i_13])))))));
            var_33 = ((/* implicit */unsigned int) (~(var_6)));
        }
        arr_53 [5ULL] = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */int) arr_17 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 3])) : (((/* implicit */int) var_19))));
    }
    for (unsigned char i_14 = 1; i_14 < 7; i_14 += 2) 
    {
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_5 [i_14 + 2]))));
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(arr_15 [i_14 - 1] [i_14] [i_14] [i_14] [i_14]))))));
    }
}
