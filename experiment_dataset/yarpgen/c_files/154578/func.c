/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154578
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) var_4);
                    var_16 = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 32760U)) : (var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 24871791)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_9 [0U] [0U] = ((/* implicit */unsigned long long int) arr_7 [i_3] [9U]);
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_18 = (+(((((/* implicit */_Bool) max((2251799813681152ULL), (((/* implicit */unsigned long long int) 3221225472U))))) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_8 [i_3] [8ULL])))));
            var_19 = ((/* implicit */unsigned char) 4030268347U);
            arr_12 [i_3] = ((/* implicit */int) ((min((((((/* implicit */_Bool) (unsigned char)45)) ? (arr_11 [i_4]) : (arr_11 [i_3]))), (((/* implicit */unsigned int) max((arr_7 [i_3] [i_4]), (arr_10 [i_3] [(_Bool)1])))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3)))))));
            var_20 = ((/* implicit */unsigned long long int) (((+((~(((/* implicit */int) (unsigned short)61835)))))) - (((int) arr_7 [2ULL] [i_4]))));
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_6 = 3; i_6 < 17; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) arr_10 [i_8] [i_3]))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_3] [i_6 + 2])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_4);
                            var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3] [i_3]))))) ? (((unsigned int) arr_13 [i_9] [i_9])) : (((unsigned int) (unsigned short)3)));
                        }
                    } 
                } 
            }
            for (unsigned int i_11 = 3; i_11 < 17; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    arr_32 [i_3] [i_5] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) 602467588U);
                    var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_3] [i_3]))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (0U) : (arr_26 [i_11 + 2] [i_3] [i_11 - 3])))) ? (max((((/* implicit */unsigned long long int) 1420246658U)), (70368744177664ULL))) : (((/* implicit */unsigned long long int) arr_26 [i_11 - 1] [i_12] [i_11 - 2]))));
                    arr_33 [i_11] = ((/* implicit */long long int) (-(18444492273895870464ULL)));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 16; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_27 = max((min((max((arr_27 [i_14] [i_5] [i_3]), (((/* implicit */unsigned int) arr_31 [i_13 + 3] [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_14] [i_11])))), (((/* implicit */unsigned int) (unsigned char)255)))), (((/* implicit */unsigned int) arr_20 [i_14] [i_3] [i_11] [i_13 + 1])));
                            arr_40 [i_3] [i_5] [i_5] [i_13] [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_14 [i_11 + 1] [i_13 - 1])))));
                            var_28 = ((/* implicit */long long int) arr_31 [i_3] [i_5] [13U] [i_13] [(unsigned char)1] [7LL]);
                            var_29 = ((/* implicit */unsigned char) arr_29 [i_3] [i_3] [i_3] [i_3]);
                            var_30 = ((/* implicit */unsigned long long int) arr_16 [i_3] [i_5] [i_3]);
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (-(((int) arr_17 [i_11 - 1] [i_5] [i_11] [i_11])))))));
                var_32 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_3] [i_5] [i_5] [(short)17]))) > (((arr_24 [7LL] [6ULL] [1] [11U] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_15] [i_15] [4] [i_15]) / (((/* implicit */int) arr_21 [i_17]))))) ? ((+(3692499700U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))) ? (((unsigned int) ((unsigned int) 4294967295U))) : (((/* implicit */unsigned int) (-(arr_47 [i_3] [i_3] [i_3] [i_17] [i_15] [i_3] [2LL])))));
                            arr_49 [i_3] [i_17] [i_17] [i_3] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (260046848U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3])))))) ? (max((((/* implicit */unsigned long long int) arr_10 [14U] [i_15])), (2251799813681151ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_3] [i_5])))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) var_8);
        }
        for (short i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            var_34 = ((/* implicit */_Bool) min((var_34), ((!(((/* implicit */_Bool) arr_47 [i_18] [i_18] [i_3] [i_18] [i_3] [i_18] [i_18]))))));
            var_35 = ((/* implicit */long long int) min((var_35), ((+(((((/* implicit */_Bool) arr_37 [i_18] [i_18] [i_3] [i_3] [i_3])) ? (9223371968135299072LL) : (((/* implicit */long long int) arr_37 [i_3] [i_3] [i_18] [i_18] [i_18]))))))));
            arr_53 [i_3] [i_18] = max((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_18]))) : (arr_38 [i_3] [(unsigned char)16] [i_18] [i_18] [i_18]))), (((/* implicit */long long int) arr_41 [i_3] [i_3] [i_18] [i_18])))), (((/* implicit */long long int) ((short) var_12))));
            var_36 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)68)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_18])) || (((/* implicit */_Bool) arr_11 [i_3])))))))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_22 [i_3] [i_18] [i_18] [i_3] [i_18] [i_3] [i_18])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_18]))))))) == (((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_28 [i_3] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned long long int) arr_51 [i_3] [i_3] [i_3]))))));
        }
        arr_54 [i_3] = ((((/* implicit */_Bool) min((arr_51 [i_3] [i_3] [i_3]), (arr_51 [i_3] [i_3] [i_3])))) ? (((((/* implicit */unsigned long long int) arr_51 [10U] [i_3] [i_3])) % (18446673704965373958ULL))) : (((/* implicit */unsigned long long int) (-(2970494281U)))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 2; i_19 < 18; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                {
                    var_38 -= ((/* implicit */signed char) (+(((arr_24 [i_3] [(unsigned char)2] [i_3] [i_3] [i_19 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                    arr_59 [i_19] [i_3] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((arr_57 [3U]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_20] [i_19])))))), (((((/* implicit */_Bool) arr_8 [i_19] [i_19])) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) arr_29 [i_3] [i_3] [i_19] [i_20])))))) >> ((((+(((/* implicit */int) (signed char)78)))) - (65)))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_21 = 4; i_21 < 22; i_21 += 2) 
    {
        for (unsigned char i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
            {
                {
                    arr_69 [i_21] [i_22] [i_22] [i_23] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((5281912810814950031LL) > (((/* implicit */long long int) arr_65 [i_21])))))))));
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 22; i_24 += 2) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 25; i_25 += 3) 
                        {
                            {
                                var_39 = (i_22 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2970494281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [(short)10] [i_22] [i_23] [i_24])))))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_23] [i_25])))))))) + (((arr_75 [i_21] [i_21] [i_21 + 2] [i_21 - 3] [i_24 + 1]) >> (((arr_66 [i_22] [i_21] [i_21]) - (1988380745U)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2970494281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [(short)10] [i_22] [i_23] [i_24])))))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_23] [i_25])))))))) + (((arr_75 [i_21] [i_21] [i_21 + 2] [i_21 - 3] [i_24 + 1]) >> (((((arr_66 [i_22] [i_21] [i_21]) - (1988380745U))) - (608616497U))))))));
                                var_40 = ((/* implicit */unsigned short) arr_73 [5U] [i_24] [i_22] [i_22] [i_22] [i_21]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
