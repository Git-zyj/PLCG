/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163382
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))), (((long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_2 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_5))))) | ((+(arr_0 [i_0])))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (signed char)-7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) (+((+(arr_9 [i_2] [i_1] [16])))));
                var_18 -= ((/* implicit */long long int) max((((/* implicit */int) ((arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (var_6))))))), ((((~(((/* implicit */int) arr_4 [i_0 - 1] [i_1])))) * (((/* implicit */int) ((((/* implicit */int) (signed char)-120)) > (((/* implicit */int) var_2)))))))));
                /* LoopSeq 3 */
                for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    var_19 = ((((/* implicit */_Bool) -33554432)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_3 + 2] [i_0 + 2] [i_2])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 2] [i_1]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65523)) || (((/* implicit */_Bool) var_7)))))))));
                    arr_15 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))) ^ (max((((int) arr_0 [i_0])), (((var_6) - (((/* implicit */int) arr_4 [i_0] [i_2]))))))));
                    arr_16 [(_Bool)1] [4LL] = (-(((/* implicit */int) (((-(var_11))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))))));
                    var_20 = ((/* implicit */long long int) (signed char)82);
                    arr_17 [(short)3] [16ULL] [i_1] [i_0] = min((((((((/* implicit */int) var_2)) >= (((/* implicit */int) (_Bool)1)))) ? (((var_1) / (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (arr_4 [4] [i_1]))))))), (((/* implicit */long long int) ((arr_3 [i_3 - 1] [i_1] [i_2]) / (((arr_8 [i_0 + 2] [i_2]) ^ (((/* implicit */int) var_13))))))));
                }
                for (signed char i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        arr_23 [(_Bool)1] [i_4] [i_2] [i_5] [(_Bool)1] [i_5 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_0 - 1])))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_4 - 1]))) ? ((((-(var_11))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (arr_10 [i_0 + 2]))))));
                        var_22 = ((/* implicit */long long int) var_8);
                        var_23 = ((/* implicit */_Bool) max((var_23), (var_15)));
                    }
                    for (signed char i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        arr_27 [i_4] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_31 [(unsigned short)5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))) >= (((/* implicit */int) arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_0 - 1]))));
                        arr_32 [(signed char)9] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-(((/* implicit */int) var_7)))) : (var_6)));
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1]))));
                    }
                    var_26 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) var_7)), (arr_9 [i_0 + 2] [i_1] [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (arr_28 [i_0 + 1] [i_2] [i_4] [i_1] [i_4]))))));
                }
                for (signed char i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) max((arr_14 [i_0]), (((/* implicit */long long int) arr_10 [i_8]))))) && (((/* implicit */_Bool) ((unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)-7)) >= (((/* implicit */int) (_Bool)1))))), ((-(((/* implicit */int) var_5))))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1076752853))))), (arr_13 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))))));
                    arr_35 [i_0] [i_8] [i_2] [(_Bool)1] = ((/* implicit */long long int) (-((+(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_0))))))));
                }
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_0] [i_1]))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((arr_3 [i_0] [i_1] [i_2]) - (105076921)))))), (((((/* implicit */unsigned long long int) arr_20 [i_0 + 2] [9ULL])) % (var_11))))))));
            }
            for (int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */int) ((min((((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))))), (((/* implicit */unsigned long long int) -563499663)))) * (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)38)))) ? (((0ULL) & (((/* implicit */unsigned long long int) 426051039)))) : (var_11)))));
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3))) * (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_15)))))))) ? (min((((/* implicit */long long int) var_9)), (var_3))) : (((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
            }
            arr_38 [0ULL] [i_0] [i_0] = var_2;
        }
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 15; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    {
                        var_31 = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_39 [i_0 - 1] [i_11 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) var_15)))))), ((+(arr_14 [i_11 - 1])))));
                        var_32 *= ((/* implicit */_Bool) var_12);
                    }
                } 
            } 
            var_33 &= ((/* implicit */int) max((((unsigned long long int) arr_4 [i_0 + 2] [i_0 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(2147483647)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65523)) / (((/* implicit */int) (short)20794))))))))));
        }
    }
    var_34 = ((/* implicit */long long int) var_5);
}
