/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119315
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
    var_14 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */_Bool) 1460005683)) ? (var_7) : (var_7)))))));
    var_15 = var_12;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = max((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (3252561476273810049LL))), (((/* implicit */long long int) arr_0 [i_0])));
        arr_3 [(unsigned char)4] [i_0] &= ((/* implicit */unsigned long long int) var_12);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1]))));
            var_17 -= ((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_0]));
            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
            arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 5870682606635694160LL)) || (((/* implicit */_Bool) (short)24568)))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_12))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
            {
                var_20 = arr_8 [0];
                arr_12 [i_0] [i_0] [16] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_2)))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                            var_22 = ((/* implicit */short) var_12);
                        }
                    } 
                } 
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) (+((+(arr_6 [i_0] [i_2] [i_6])))));
                var_24 = ((/* implicit */unsigned char) ((((((int) var_7)) | (min((-989503449), (((/* implicit */int) (signed char)-45)))))) > (((((/* implicit */int) var_3)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    var_25 = ((((/* implicit */int) (short)17646)) * (((/* implicit */int) (signed char)-45)));
                    var_26 = ((/* implicit */unsigned char) (+(var_6)));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(var_4))))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    arr_26 [i_0] [i_0] [(short)13] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(unsigned short)18] [(short)17] [4] [i_0]))))) && (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_9))))));
                    arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) != (arr_6 [i_0] [i_2] [i_9])));
                    arr_28 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(var_4)));
                }
                var_28 = ((/* implicit */int) ((((var_2) >> (((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) var_5)))) - (30505ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7])) && (((/* implicit */_Bool) ((short) var_0)))))))));
            }
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((min((arr_20 [i_0] [i_0] [i_2] [6LL]), (var_5))), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_2]))))))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_0] [i_0])))))) ? (min((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_0])), (var_4))) : ((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        var_31 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [(short)1])) ^ (((/* implicit */int) (short)(-32767 - 1))))) << (((((/* implicit */int) var_3)) - (102)))));
        var_32 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((short) var_3)), (((short) var_12))))), (((((/* implicit */_Bool) arr_22 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) var_7))))));
    }
    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        arr_32 [i_10] [i_10] = ((/* implicit */int) ((((long long int) (signed char)25)) + (((((/* implicit */_Bool) ((((/* implicit */int) (short)768)) + (((/* implicit */int) var_11))))) ? ((+(var_6))) : (var_6)))));
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            var_33 = ((/* implicit */int) ((short) (short)24589));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
            {
                arr_37 [i_10] [i_10] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (max((((/* implicit */int) (signed char)13)), (2147483647)))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) - (arr_34 [i_12])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 3) 
                {
                    arr_40 [i_10] [i_10] [i_12] [i_13] [i_10] [i_11] = ((/* implicit */short) var_0);
                    arr_41 [i_13 + 3] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) (-(((long long int) arr_38 [i_10] [i_10] [i_11] [i_12] [i_13 + 3] [i_13 + 1]))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_10] [i_12])) || (((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned int) ((int) arr_30 [i_10] [(unsigned char)3]))) : (arr_43 [i_14] [i_11] [i_12] [i_14] [i_11])));
                    arr_45 [i_14] [i_10] [i_11] [i_10] = ((/* implicit */short) (~((~(var_6)))));
                }
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
            {
                arr_48 [i_15] |= ((/* implicit */long long int) ((((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10] [1] [i_10] [i_10] [i_10] [i_10]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-17))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1748190225U)) && (((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) (signed char)43)))))))));
                arr_49 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((18446744073709551614ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32751))))) : (((/* implicit */unsigned long long int) var_0))));
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_47 [i_10] [i_11] [i_15]))))))));
                var_37 = ((/* implicit */signed char) var_12);
            }
        }
        for (int i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            var_38 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_16])) || (((/* implicit */_Bool) (short)25394))))), ((((+(var_6))) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            var_39 = ((/* implicit */signed char) arr_31 [17]);
        }
    }
    var_40 = ((/* implicit */_Bool) var_2);
}
