/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128612
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 *= ((/* implicit */unsigned short) (((-(var_13))) > (((/* implicit */long long int) max((arr_0 [i_0]), (var_15))))));
        var_17 *= ((/* implicit */unsigned char) var_2);
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_18 = ((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (_Bool)1))))) ? (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [(short)8])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_1 [i_0] [i_1 - 1])))) : (((/* implicit */int) var_1)));
            arr_4 [(unsigned char)17] [i_0] [9] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_1 [(short)2] [4ULL])) : (((/* implicit */int) var_0))))))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)1))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13084)) >> (((((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_0)) - (29436))))) - (2147483605)))));
                var_21 = ((/* implicit */unsigned long long int) (+(arr_5 [i_4 - 1])));
            }
            arr_12 [(signed char)16] |= ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) min((var_0), ((short)12845))))))) < (arr_5 [i_3])));
            arr_13 [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) 4294967295U);
            var_22 = ((/* implicit */unsigned short) arr_6 [2ULL]);
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_23 = var_14;
            arr_16 [i_0] = ((/* implicit */unsigned short) max((((arr_0 [i_0]) + (var_15))), ((+(((/* implicit */int) arr_2 [i_0] [i_5] [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
            {
                arr_19 [i_0] [i_5] [i_5] = ((/* implicit */short) min(((~(((/* implicit */int) ((4294967290U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [19U])))))))), (((/* implicit */int) arr_2 [(unsigned char)18] [i_5] [i_0]))));
                var_24 += ((/* implicit */unsigned int) ((arr_0 [i_6]) ^ (((/* implicit */int) max((min((arr_14 [i_0] [i_0]), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) (short)-10051)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    arr_24 [i_0] [i_0] [i_7] = ((/* implicit */short) var_9);
                    arr_25 [i_0] [i_5] [i_7] [i_8] = ((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_8]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45672)))));
                    arr_26 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_5] [i_7])) ^ (arr_23 [i_8] [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1])))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22071)) << (((777773154) - (777773140)))))), (min((7U), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_0))))) << (6U))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_8 + 1])) || (((_Bool) var_11)))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) 777773154)) || (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && ((_Bool)0))))))))))));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)7] = arr_2 [i_0] [i_0] [i_0];
                    arr_32 [i_0] [i_0] [i_7] [15LL] [0ULL] = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */int) var_7)))))) >> ((((((~(4294967294U))) << (((((/* implicit */int) arr_20 [i_9] [i_0])) + (92))))) - (33554403U)))));
                }
                var_27 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_29 [(_Bool)1] [i_7])) ? (var_15) : (((/* implicit */int) arr_29 [(unsigned short)6] [i_5])))))))));
                /* LoopSeq 2 */
                for (long long int i_10 = 2; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_34 [i_10 + 1] [i_7] [i_5] [i_0])) : (((/* implicit */int) (unsigned short)32665)))), (((/* implicit */int) ((_Bool) 0U)))))) / (var_9)));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))));
                }
                for (long long int i_11 = 2; i_11 < 22; i_11 += 1) /* same iter space */
                {
                    arr_37 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [(signed char)20] [i_0])) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_7]))))) * (var_3))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_35 [i_5])))))))));
                    var_31 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) max((var_8), (arr_20 [i_0] [i_7])))), (min((arr_36 [i_0]), (((/* implicit */unsigned long long int) 4294967280U)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_29 [i_0] [i_0])) + (((/* implicit */int) var_0)))))))));
                }
                var_32 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max((arr_15 [21]), (((/* implicit */short) var_8)))))))) != (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-9390)) : (((/* implicit */int) var_2))))))));
            }
            var_33 *= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((short) arr_34 [i_0] [i_0] [i_0] [0ULL]))), (((((/* implicit */_Bool) var_3)) ? (6205152188235777565LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21926))))))) == (((/* implicit */long long int) ((int) arr_30 [i_5] [i_5] [i_0] [i_0])))));
        }
        var_34 = ((/* implicit */short) var_11);
    }
    var_35 = ((/* implicit */short) var_5);
    var_36 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((var_13) % (((/* implicit */long long int) 777773178)))) : (var_13))), (((/* implicit */long long int) var_14))));
}
