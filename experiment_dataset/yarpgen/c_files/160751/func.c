/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160751
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)))) ^ (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (36028797018963967LL)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) (~(-1336790024)))) ? (((/* implicit */unsigned long long int) 36028797018963953LL)) : (var_11)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((long long int) arr_0 [i_0] [i_0])), (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) || (((/* implicit */_Bool) var_12))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((_Bool) -36028797018963952LL)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])) >= (((/* implicit */int) var_5))))))))));
                var_17 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_2]);
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3284695045U)))))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0]))) : (((/* implicit */int) arr_9 [(_Bool)1])))))));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_1] [1] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) 0)))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)58945)) : (((/* implicit */int) (unsigned char)254))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(unsigned short)10] [i_4])))))));
                            var_21 = ((/* implicit */_Bool) ((short) max((arr_11 [i_3] [i_1] [i_3] [i_3]), (arr_11 [i_0] [i_1] [i_3] [i_3]))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned short)58942))))))))));
                        }
                    } 
                } 
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_6]);
                var_24 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)191)))) >> (((arr_14 [3LL] [3LL] [i_1] [i_0] [i_1]) + (1549732109)))))) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)191)))) >> (((((arr_14 [3LL] [3LL] [i_1] [i_0] [i_1]) + (1549732109))) - (353461821))))));
                arr_21 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_6])))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_0) ? (var_11) : (((/* implicit */unsigned long long int) -21LL))))) ? ((+(var_9))) : (((/* implicit */int) ((_Bool) (_Bool)1))))) <= (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) | (0U)))))))));
            }
            arr_22 [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
            arr_23 [(unsigned char)4] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((~(var_1))) >= (var_1))))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            arr_26 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((unsigned long long int) (_Bool)1))));
            var_26 = ((/* implicit */unsigned long long int) -7508795257821429216LL);
        }
        for (int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (576460717943685120ULL)));
            var_28 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_8] [i_0] [i_0] [i_8])), (arr_16 [i_0] [13LL] [i_0] [i_8] [i_8] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8] [5ULL] [12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0]))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) && (((((/* implicit */_Bool) 17385881338642885242ULL)) || (((/* implicit */_Bool) (unsigned short)6585)))))))));
            arr_30 [i_8] = ((/* implicit */_Bool) min((5133442969891482106ULL), (((/* implicit */unsigned long long int) 2537751432467153223LL))));
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (2537751432467153223LL))))));
            var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (3734276162U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))));
        }
        for (int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) (-(var_4)));
            var_32 = ((/* implicit */long long int) min((var_32), ((+(((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (36028797018963957LL)))))));
            arr_34 [i_0] [i_0] = arr_32 [i_0] [(_Bool)1] [10U];
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (~((((+(((/* implicit */int) var_2)))) + ((-(((/* implicit */int) arr_8 [i_9] [i_0] [i_0] [i_0])))))))))));
        }
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((5133442969891482118ULL) * (((/* implicit */unsigned long long int) -36028797018963961LL)))) : (((/* implicit */unsigned long long int) 36028797018963937LL)))), (((/* implicit */unsigned long long int) arr_9 [i_0])))))));
    }
    for (unsigned int i_10 = 2; i_10 < 22; i_10 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 3) 
        {
            var_35 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)49851))));
            var_36 = ((/* implicit */_Bool) 1136813693U);
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((((/* implicit */unsigned long long int) 36028797018963967LL)) - (18446744073709551590ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_10 + 1]))) > (arr_41 [0ULL])))), (arr_35 [i_10 - 2])))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                for (int i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 134217727LL))));
                            var_39 = ((/* implicit */unsigned long long int) ((min((arr_38 [i_13 + 2] [i_10 + 1]), (arr_38 [i_13 + 2] [i_10 + 1]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
                            var_40 = ((/* implicit */int) min((((min((((/* implicit */unsigned long long int) 36028797018963946LL)), (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned long long int) (~(arr_45 [i_10] [i_11 + 2]))))));
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (min((747498406502899813ULL), (((/* implicit */unsigned long long int) (unsigned short)65526))))));
                            var_42 = ((/* implicit */unsigned short) arr_45 [i_14] [15ULL]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            var_43 = ((/* implicit */_Bool) max((var_43), (arr_46 [i_10 - 1] [22] [i_10 - 2])));
            var_44 = ((/* implicit */unsigned short) (!(var_0)));
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_47 [i_10 - 2])) : (((((/* implicit */_Bool) arr_40 [i_15])) ? (((/* implicit */int) arr_46 [i_10] [i_10] [i_15])) : (((/* implicit */int) arr_38 [i_10] [i_15]))))));
            arr_51 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_48 [i_10] [i_10 - 1] [i_10] [i_10]))));
        }
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            arr_55 [i_16] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_16] [i_16] [i_10])) - (((/* implicit */int) arr_38 [i_10] [i_10 - 1]))))) * (((unsigned long long int) 14612640824714538336ULL)))), (((/* implicit */unsigned long long int) min((min((arr_49 [i_10]), (((/* implicit */long long int) arr_36 [i_10] [i_10])))), (((/* implicit */long long int) ((arr_42 [i_10] [i_10] [i_10] [13ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (16382U)))))))));
            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    {
                        var_47 = ((/* implicit */_Bool) arr_53 [23U] [i_16] [(_Bool)0]);
                        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_53 [i_10 + 1] [i_10] [i_10 - 2])) : (arr_50 [i_10 - 2])))))));
                        var_49 = ((/* implicit */_Bool) max((var_49), ((!(((/* implicit */_Bool) (-((~(var_4))))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_19 = 2; i_19 < 23; i_19 += 2) 
        {
            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) ((arr_61 [i_10] [i_19]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_19 - 1] [i_19] [i_10])))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) min((arr_57 [(_Bool)1] [i_19] [i_19]), (((/* implicit */int) arr_38 [(unsigned char)4] [i_19]))))))))))));
            var_51 = max((var_9), (((/* implicit */int) arr_59 [i_19] [i_10 - 2] [i_10 - 1])));
        }
        var_52 = ((/* implicit */unsigned short) ((long long int) ((unsigned char) arr_61 [(short)21] [i_10 - 1])));
    }
    var_53 = ((/* implicit */_Bool) var_12);
}
