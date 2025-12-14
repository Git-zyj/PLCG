/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155309
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
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) ((signed char) var_10))), (((long long int) var_7)))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) 140479342)), (var_12))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)32))));
        var_19 += ((/* implicit */short) var_13);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [10ULL])))))));
        }
        /* LoopSeq 4 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)255)) <= (-140479363));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_2 [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2217904570766927690ULL)) ? (-1LL) : (((/* implicit */long long int) 4294967295U))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2217904570766927672ULL)) ? (1374717360) : (((/* implicit */int) var_10))));
            }
            for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [0LL]))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)11471))) / (-16LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    arr_22 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2])))));
                    var_25 ^= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (arr_19 [i_0] [20])))));
                    var_26 = ((/* implicit */unsigned short) arr_5 [(unsigned char)6]);
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [8U])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_13)))))));
                }
                arr_23 [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
            for (short i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(unsigned char)16])) ? (var_12) : (((/* implicit */unsigned long long int) ((long long int) var_10)))));
                arr_26 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) -1467181251);
            }
        }
        for (long long int i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
        {
            var_30 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_8] [14ULL] [i_0])) >> (((((/* implicit */int) var_7)) - (91))))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0])) : (arr_14 [i_0] [i_8] [i_8 + 2])));
        }
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_6))));
            arr_33 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_6 [i_0] [i_0] [i_0])));
            var_34 = (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])));
        }
        for (unsigned char i_10 = 3; i_10 < 21; i_10 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (arr_30 [(unsigned char)6] [i_10])));
            var_36 = ((/* implicit */unsigned long long int) var_14);
            var_37 = ((16228839502942623925ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            arr_47 [i_0] [i_0] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) 7887162730154025781LL)))))));
                            var_38 = ((/* implicit */unsigned char) ((unsigned int) arr_24 [i_10] [8] [i_10 + 1]));
                            var_39 += ((/* implicit */long long int) var_3);
                            arr_48 [8] [i_10] [i_13] [i_12 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) -2LL)));
                        }
                    } 
                } 
            } 
            arr_49 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 9007198986305536ULL);
        }
        arr_50 [18LL] &= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0])) : (arr_37 [i_0] [(short)2] [i_0]));
    }
    var_40 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) (-(var_15))))));
}
