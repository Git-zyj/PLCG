/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133623
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
    var_19 = ((/* implicit */signed char) max((var_0), (((/* implicit */long long int) var_12))));
    var_20 = (+(((/* implicit */int) ((unsigned char) (short)-11006))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((var_0) % (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [1] [i_2]))))), (((unsigned int) (unsigned char)227)))))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_5)) != (((/* implicit */int) arr_1 [i_0]))))));
                    var_22 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned char)28)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_7 [i_0] [i_0] [i_2 - 1])))))) ^ (((((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1] [i_0 - 2])) & (((arr_2 [i_0 - 2] [i_1]) ^ (((/* implicit */int) var_9))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_9)))) & (((/* implicit */int) var_9))));
        arr_10 [i_0] = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(signed char)18])) && (((/* implicit */_Bool) arr_15 [8U]))));
            arr_19 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (((int) var_7)) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_3])) < (((/* implicit */int) (unsigned char)60)))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_24 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [2LL] [i_3 + 1] [(unsigned char)20] [i_5])) ^ (((/* implicit */int) arr_6 [i_3 + 1] [i_5] [i_3 + 1] [i_5]))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((int) arr_11 [(signed char)7] [i_5])))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_31 [i_3] [i_5] [i_6] [12] = ((/* implicit */long long int) ((((int) var_17)) % (((((/* implicit */int) (unsigned char)60)) | (((/* implicit */int) var_4))))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_34 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_3 + 1] [i_5] [i_3 + 1] [i_7])) < (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_3]) : (var_15)))));
                            arr_35 [i_3 + 1] [i_5] [i_3] [6LL] [i_5] [i_5] [(unsigned char)15] = ((var_1) ? (((/* implicit */int) arr_32 [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_32 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3])));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((+(((/* implicit */int) var_17)))) : (var_18)));
                        }
                        for (short i_9 = 2; i_9 < 22; i_9 += 2) 
                        {
                            arr_38 [i_3] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)227)) % (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) (unsigned char)40))))));
                            var_26 ^= ((/* implicit */unsigned int) (_Bool)0);
                            arr_39 [i_3] [i_5] [i_6] [11U] [i_3] = arr_18 [i_3];
                        }
                        var_27 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_18)))));
                        var_28 = ((/* implicit */_Bool) (+(var_16)));
                        arr_40 [(_Bool)1] [i_3] [i_7] [i_7] [i_6] [(_Bool)1] = ((/* implicit */short) (-((+(((/* implicit */int) arr_30 [i_6] [(signed char)5] [(signed char)5] [8LL]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_44 [i_10] [i_3] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (unsigned short)65472)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12))), (((arr_25 [i_3] [i_10] [11ULL] [17]) * (var_12))))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_11 = 2; i_11 < 21; i_11 += 2) 
            {
                arr_48 [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((short) arr_21 [i_3])));
                arr_49 [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                arr_50 [(short)11] [(short)11] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_3] [i_10] [i_10] [i_10] [i_11] [i_3]))) != (arr_18 [i_3]))))));
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                var_29 ^= ((long long int) ((var_14) & (((/* implicit */int) var_4))));
                arr_53 [i_3 + 1] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_36 [(_Bool)1] [i_10] [i_10] [(_Bool)1] [i_12] [i_12]));
                var_30 = ((/* implicit */long long int) ((int) arr_12 [i_3]));
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_31 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [(short)17] [(short)17])))))));
                    arr_57 [i_12] [i_3] [i_3] [i_13] [i_10] [20] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) arr_15 [i_3])))))));
                    var_32 -= ((/* implicit */signed char) (unsigned char)196);
                }
                for (int i_14 = 2; i_14 < 19; i_14 += 1) 
                {
                    arr_61 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_52 [i_3 + 1] [i_3] [i_12] [i_14]))));
                    var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_3]))));
                    var_34 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)15))));
                }
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    arr_65 [i_3] [i_3] [i_15] [i_15] [i_12] [(unsigned char)14] = ((/* implicit */_Bool) ((((var_2) > (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */int) arr_7 [i_3] [i_10] [i_3 + 1])) : (((/* implicit */int) ((var_12) != (var_15))))));
                    arr_66 [i_3] = ((int) ((var_12) | (arr_18 [i_3])));
                }
            }
            for (unsigned int i_16 = 3; i_16 < 21; i_16 += 1) 
            {
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_3] [i_10] [i_16 + 1])) > (((/* implicit */int) arr_68 [i_3] [(unsigned char)2] [i_16])))))));
                var_36 ^= ((/* implicit */unsigned short) (((-(((unsigned int) arr_14 [i_10])))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_3 + 1]))))));
            }
            var_37 = ((/* implicit */unsigned char) ((signed char) ((((unsigned int) var_16)) + (var_12))));
            arr_69 [12ULL] [i_10] [i_3] = ((((/* implicit */int) ((_Bool) ((var_5) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_29 [i_3] [i_10] [i_3 + 1] [i_10])))))) == (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_3 + 1])) <= (((/* implicit */int) arr_6 [i_3] [(unsigned short)10] [i_10] [(unsigned short)10]))))) <= (((/* implicit */int) var_4))))));
        }
        arr_70 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_18 [i_3 + 1]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_46 [i_3] [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_51 [(signed char)8] [i_3] [i_3]))))))))));
        var_38 = ((/* implicit */short) ((unsigned int) ((int) arr_67 [i_3 + 1] [i_3 + 1])));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                {
                    var_39 = ((/* implicit */short) (+(((((/* implicit */int) arr_30 [13LL] [i_3 + 1] [i_18] [i_3])) & (((/* implicit */int) arr_30 [i_3 + 1] [i_3 + 1] [i_18] [i_17]))))));
                    arr_76 [i_3 + 1] [i_17] [i_3] [i_18] = ((/* implicit */signed char) min((((((/* implicit */int) arr_46 [i_3] [(signed char)12] [i_3 + 1] [i_3])) / (((/* implicit */int) arr_46 [i_3] [(_Bool)1] [i_3 + 1] [i_17])))), (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_14))) && (var_1))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
    {
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) arr_77 [i_19]))));
        var_41 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_77 [i_19]))));
    }
    for (signed char i_20 = 1; i_20 < 9; i_20 += 4) 
    {
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) max(((+(arr_42 [i_20 + 2]))), (((/* implicit */unsigned int) min((((2073749796) % (((/* implicit */int) arr_68 [i_20] [(unsigned short)0] [i_20])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) != (var_10))))))))))));
        var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_20] [i_20]))))) ? ((+(((((var_3) + (2147483647))) << (((((var_14) + (1405555885))) - (4))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_20 + 1] [i_20])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_20 - 1])))) != (max((var_18), (((/* implicit */int) arr_46 [(_Bool)1] [i_20] [i_20 + 1] [i_20 + 2])))))))));
    }
}
