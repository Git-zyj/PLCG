/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150849
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_13 -= ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))) | (((/* implicit */int) arr_1 [i_0])))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)8493)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))))));
        var_15 *= (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) | (max((((((/* implicit */_Bool) arr_12 [2LL] [i_1] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [(unsigned char)5])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775807LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-2645)) : (((/* implicit */int) arr_1 [(_Bool)1])))))))));
                            var_17 = ((/* implicit */long long int) (unsigned char)123);
                            arr_13 [i_0] [i_1] [4] [i_3] [(short)4] [10LL] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 3] [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1 + 1] [i_1]))))) ? (((/* implicit */long long int) ((2147483647) - (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [(_Bool)1]))))) : (9223372036854775807LL)));
        }
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            arr_16 [i_0] [(unsigned char)5] = ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((short)-22357), (((/* implicit */short) var_11))))), (min((((/* implicit */long long int) arr_5 [0LL] [(unsigned char)10] [i_0])), (9223372036854775807LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (var_7));
            arr_17 [(_Bool)0] [(short)6] [(unsigned char)7] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_7)))))));
            var_19 -= ((/* implicit */long long int) (_Bool)0);
            var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        }
        for (short i_6 = 4; i_6 < 9; i_6 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                arr_22 [(short)7] [i_7] = ((/* implicit */unsigned char) ((long long int) (short)-2665));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_20 [i_6] [i_0]))) ? (((/* implicit */long long int) ((int) (short)(-32767 - 1)))) : (((var_1) ? (288160007407534080LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                arr_23 [i_6] [i_6] [8LL] [(short)10] &= ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (short)-32759)))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_22 &= ((/* implicit */short) min((((((/* implicit */int) arr_12 [i_6 - 4] [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 4] [i_6 - 2] [i_6 - 1])) % (((/* implicit */int) arr_12 [i_6 - 4] [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 4] [i_6 - 2] [i_6 - 1])))), ((~(((/* implicit */int) arr_12 [i_6 - 4] [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 4] [i_6 - 2] [i_6 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_15 [(short)4] [i_8])) : ((((_Bool)1) ? (((/* implicit */int) (short)15926)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)0))))) : ((~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)144))))))));
                            arr_32 [i_10] [(_Bool)1] [(unsigned char)6] [i_9] [(_Bool)1] [(_Bool)1] [(unsigned char)4] = ((/* implicit */_Bool) min((((/* implicit */short) arr_10 [i_6 - 4] [(short)7] [i_6 - 2] [(_Bool)1] [(short)8])), (((short) var_3))));
                        }
                    } 
                } 
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((var_6), (((short) var_10)))))));
                var_25 += ((/* implicit */short) (-(((/* implicit */int) ((_Bool) max(((short)-10333), (((/* implicit */short) (_Bool)1))))))));
                var_26 = ((/* implicit */_Bool) ((((3674890183928995673LL) >> (((/* implicit */int) (_Bool)0)))) ^ (((1346304572432968903LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_27 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1247920347956803401LL)) ? (((/* implicit */int) arr_5 [i_11] [i_6 + 2] [i_6 - 3])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_0))))))) << (((long long int) min(((_Bool)1), ((_Bool)1))))));
            }
            arr_35 [i_6] [(_Bool)1] &= (_Bool)1;
        }
    }
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
    {
        var_28 *= ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), ((-(((((/* implicit */int) var_8)) + (((/* implicit */int) var_11))))))));
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-21553)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))) ? ((~(-1346304572432968913LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_44 [(short)10] [4LL] &= ((/* implicit */unsigned char) (_Bool)1);
                    arr_45 [i_12] [i_13] [(short)7] [i_12] = min(((short)-17244), (((/* implicit */short) ((_Bool) arr_2 [i_12] [(short)3] [i_12]))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)28091)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [(unsigned char)10] [(_Bool)1]))) : (var_7))), (min((((/* implicit */long long int) (_Bool)1)), (arr_14 [i_14] [6LL])))))) && (var_4)));
                }
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
    {
        arr_49 [(short)6] [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) % (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (var_11)));
                    arr_56 [(short)7] [i_16] [i_17] = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */int) (unsigned char)166)) + (-1338571395))))));
                }
            } 
        } 
        arr_57 [i_15] = ((long long int) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned char)94))));
        var_32 = (_Bool)0;
    }
    var_33 = ((/* implicit */long long int) (short)-1);
}
