/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185384
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
    var_11 = ((/* implicit */int) (-(((unsigned int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) max((arr_0 [i_0 + 2] [i_0]), (((/* implicit */long long int) var_10)))))));
        var_12 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_0 + 2] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((arr_0 [i_0 + 2] [i_0 + 2]) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [i_0 + 2] = ((/* implicit */unsigned short) var_1);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) var_10)) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_4))))))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0 + 1]))), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)28542))) - (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))) : (((long long int) var_7))))));
            var_15 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0]))));
            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)92)) && (((/* implicit */_Bool) (signed char)102)))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) (short)-16434)) ? (1681078844U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))) ? (((arr_9 [i_2] [i_2]) << (((arr_9 [i_2] [(unsigned char)16]) - (4157470075257628303LL))))) : (((arr_9 [i_2] [i_2]) ^ (arr_9 [i_2] [i_2])))));
        var_18 = (signed char)-8;
        arr_11 [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [(unsigned char)9] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((((/* implicit */int) (unsigned char)18)) << (((1524992444483523873ULL) - (1524992444483523856ULL))))))), (((/* implicit */int) (unsigned short)65518))));
    }
    for (short i_3 = 4; i_3 < 19; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            arr_16 [i_4] = min((((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 - 2])) < ((+(((/* implicit */int) (unsigned char)236))))))), (((((/* implicit */int) var_5)) ^ (((((/* implicit */int) (signed char)51)) - (var_10))))));
            var_19 |= ((/* implicit */unsigned short) ((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_12 [i_3 - 1])) ? (((/* implicit */int) arr_12 [i_3 + 1])) : (((/* implicit */int) max((((/* implicit */signed char) var_8)), (arr_15 [i_3] [i_3] [i_3])))))) : (min((((((/* implicit */int) arr_12 [i_3])) - (((/* implicit */int) arr_12 [(unsigned short)10])))), (((/* implicit */int) min((arr_12 [i_3 - 2]), (((/* implicit */short) arr_15 [4ULL] [i_3] [0U])))))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_21 &= ((/* implicit */unsigned int) arr_15 [(unsigned short)2] [i_3] [i_3 + 1]);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_3]))))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_14 [i_3])))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_3]))))) : (((((/* implicit */int) max(((short)-13012), (((/* implicit */short) (signed char)-103))))) - ((+(var_0))))))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    {
                        arr_28 [i_3] [i_6] [i_6] [i_8 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_8 - 1]))));
                        var_23 *= arr_15 [i_8 - 1] [i_7] [i_3];
                        arr_29 [i_3 - 3] [(unsigned short)17] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) arr_26 [i_8] [i_7 + 1] [i_8 + 1] [i_7] [i_7 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        var_24 = ((/* implicit */short) min((var_24), (var_7)));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                var_25 += ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned short i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        {
                            arr_37 [i_3] [i_6] [i_3] [i_10] [i_6] [(signed char)13] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_38 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : (var_0)));
                        }
                    } 
                } 
                arr_39 [i_9] [i_6] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) var_0));
            }
            for (short i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) arr_13 [i_12]);
                arr_42 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_12] [i_12]))));
                var_27 = ((/* implicit */signed char) ((var_9) >= (arr_25 [i_3 + 1] [i_6] [i_12])));
            }
            for (short i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_14 = 2; i_14 < 18; i_14 += 2) 
                {
                    var_28 = arr_40 [i_3 + 1] [i_3] [i_3 - 3] [i_3 - 3];
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_14 - 2])) | (((/* implicit */int) (unsigned char)28))));
                }
                for (signed char i_15 = 3; i_15 < 17; i_15 += 1) /* same iter space */
                {
                    arr_51 [i_6] [i_13] [i_6] [i_6] = ((/* implicit */unsigned char) arr_43 [i_6] [i_6] [i_6] [i_15 + 2]);
                    var_30 = ((/* implicit */int) var_5);
                    arr_52 [i_15 - 1] [i_6] [i_6] [(unsigned char)4] [i_13] [i_6] = ((/* implicit */unsigned char) var_8);
                }
                for (signed char i_16 = 3; i_16 < 17; i_16 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) (~(arr_45 [i_3 - 2] [4ULL] [i_16] [i_6])));
                    arr_55 [i_6] [i_3] [i_6] [i_6] = ((/* implicit */long long int) arr_32 [i_3] [i_6] [i_16 + 3] [i_3 - 2] [i_6] [i_13]);
                    var_32 = ((/* implicit */short) arr_34 [i_6] [i_3 - 4] [i_13]);
                    var_33 = ((/* implicit */long long int) ((_Bool) var_5));
                }
                var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_6] [i_3] [i_6] [i_6])) % (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)-27172))))) : (var_6)));
            }
            for (unsigned short i_17 = 1; i_17 < 16; i_17 += 4) 
            {
                var_35 = ((/* implicit */signed char) arr_22 [i_6]);
                var_36 = ((/* implicit */long long int) arr_54 [i_6] [i_6] [i_6] [i_17]);
                /* LoopNest 2 */
                for (unsigned int i_18 = 1; i_18 < 18; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        {
                            arr_64 [i_3] [i_6] [(_Bool)1] [i_6] [i_19] = ((/* implicit */unsigned char) ((arr_34 [i_3 - 2] [i_17 + 2] [i_18 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            arr_65 [i_19] [i_6] [i_17] [i_6] [i_3] = ((/* implicit */unsigned short) var_9);
                            arr_66 [i_3 - 3] [i_6] [i_17] [i_6] [i_18 + 2] [i_3] [i_6] = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) ((var_8) ? (arr_27 [i_20] [i_6] [i_6] [i_3 - 2]) : (arr_27 [i_21] [i_6] [i_6] [i_3 - 4])));
                            var_38 = ((/* implicit */unsigned int) (-(arr_27 [i_3 + 1] [i_6] [i_6] [i_3 - 2])));
                            var_39 = ((/* implicit */long long int) var_3);
                            var_40 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_50 [i_6] [i_21])) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_41 = ((/* implicit */int) var_7);
    var_42 = ((/* implicit */short) var_8);
    var_43 = ((/* implicit */signed char) var_2);
}
