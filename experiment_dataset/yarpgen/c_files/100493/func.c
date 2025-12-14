/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100493
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 133169152ULL)) ? (18446744073576382463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-75)))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_4)))))));
        var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_2))))) > (((/* implicit */int) (signed char)94)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_7)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) 976446126U)), (var_7)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_1] [i_0])))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)5286)), (arr_4 [i_1] [i_0]))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_17 = (i_1 % 2 == 0) ? (((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_1] [i_2]))), (((484794830) >> (((((/* implicit */int) arr_7 [i_1] [i_0] [i_2])) + (20354)))))))) : (((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_1] [i_2]))), (((484794830) >> (((((((/* implicit */int) arr_7 [i_1] [i_0] [i_2])) + (20354))) - (11394))))))));
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (min((((/* implicit */unsigned long long int) 8152108767852402097LL)), (6ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_4), (var_4))))) & (min((arr_0 [i_0] [i_2]), (((/* implicit */long long int) var_14))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)82)) | (((/* implicit */int) arr_3 [i_3 - 2]))))) ? (((unsigned int) arr_11 [i_3 + 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3 + 1] [i_0] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2] [i_3 - 2] [i_3]))))))))));
                            arr_15 [i_4] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15094))) ^ (var_7)))) ? (((((/* implicit */_Bool) (unsigned short)40210)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)55706)))) : (((/* implicit */int) var_0))))) ^ (min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) var_6)), (var_10)))))));
                            arr_16 [i_2] [i_1] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (var_8) : (((/* implicit */int) (unsigned char)165)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_5] [i_5])) ^ (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1])))));
                var_21 -= ((/* implicit */signed char) ((((unsigned long long int) var_6)) + (((/* implicit */unsigned long long int) 72057594037927932LL))));
                arr_19 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)137))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6 + 1]))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7684375021009072348ULL)) ? (var_8) : (((/* implicit */int) (unsigned short)896))));
            }
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((short) ((unsigned char) min((var_11), (((/* implicit */unsigned int) var_2)))))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26291)) | (((/* implicit */int) arr_12 [i_8 + 1] [i_7 - 2]))));
                        arr_31 [i_8] [i_7 + 2] [i_8 - 1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : ((-2147483647 - 1))));
                        var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) arr_7 [i_0] [i_8 - 1] [i_9 - 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (arr_27 [i_7] [i_7 - 2] [i_7]))))));
                arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_7 + 2] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) (unsigned short)49335)) : (((/* implicit */int) var_2))));
                var_27 = ((/* implicit */unsigned long long int) ((var_5) > (var_11)));
            }
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    arr_41 [i_0] [i_0] [i_0] [i_0] = ((signed char) var_0);
                    var_28 = ((/* implicit */signed char) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                }
                arr_42 [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_7 + 2] [i_11])) && (((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_11]))));
            }
            for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 4) 
            {
                var_29 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0]))) : (var_11)));
                arr_45 [i_0] [i_7 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_8)) / (((((/* implicit */_Bool) arr_13 [i_0] [i_7 + 2] [i_0] [i_0] [i_7])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -1LL)) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (arr_35 [i_0] [i_7] [i_7 - 2] [i_0])))));
            }
            arr_46 [i_0] = ((/* implicit */int) ((short) arr_13 [i_7] [i_7] [i_0] [i_0] [i_7]));
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((long long int) var_9)))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            arr_49 [i_0] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))) | (arr_13 [i_14] [i_14] [i_14] [i_0] [i_14])));
            arr_50 [i_14] = ((unsigned char) var_2);
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 11; i_15 += 3) 
            {
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            arr_57 [i_0] [i_14] [i_15] [i_14] [i_17] = ((short) var_2);
                            var_33 ^= ((/* implicit */unsigned char) ((long long int) 133169152ULL));
                            var_34 = ((/* implicit */unsigned char) ((_Bool) var_7));
                        }
                    } 
                } 
            } 
        }
    }
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((signed char) var_4)))));
    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_11))));
}
