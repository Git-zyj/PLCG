/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140406
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (short)21812))))) / (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
        /* LoopSeq 3 */
        for (short i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [(signed char)2]))) ? ((+((~(((/* implicit */int) (unsigned char)3)))))) : (((/* implicit */int) ((short) ((unsigned char) var_9)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_3))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3753496484U)))) ? (arr_7 [(short)8] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    arr_12 [(short)9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -524925731)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) : (17381320739930148234ULL)));
                    arr_13 [i_1] [i_0] [i_1] = ((/* implicit */short) ((int) ((arr_0 [i_0] [i_1]) & (((/* implicit */int) var_11)))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_16 ^= ((/* implicit */unsigned char) (-(arr_9 [i_3 + 2] [i_1 - 2] [i_1 - 3] [i_0 - 1] [i_0 + 2])));
                        arr_17 [i_0] [i_1] [i_1] [i_1 - 3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)16749)) : (((/* implicit */int) arr_16 [i_0 + 1] [i_2] [i_4] [(short)12]))));
                    }
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_21 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) 4623958446129223417LL);
                        arr_22 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                        var_17 = ((/* implicit */signed char) max((var_17), (arr_15 [6LL] [6LL] [(unsigned short)7] [i_3] [(_Bool)1])));
                    }
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) arr_19 [i_0] [i_1] [i_2]);
                    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -103779562)) ? (-103779560) : (((/* implicit */int) (unsigned short)27027))))));
                }
            }
            arr_26 [i_0] = ((/* implicit */long long int) min(((~(((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) (unsigned char)0)))))), (max((((((/* implicit */_Bool) (unsigned short)15125)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [17LL])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_3 [i_0]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0] [i_0 + 1] [i_1 - 3]))), ((-(arr_27 [i_0])))));
                var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_7] [i_1]), (arr_1 [i_7])))))))) ? (arr_27 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))))));
            }
        }
        for (short i_8 = 4; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((unsigned char) -103779562));
            arr_32 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) (short)-32741)))) <= ((+(((((/* implicit */int) (unsigned short)40230)) / (((/* implicit */int) (unsigned char)173))))))));
            arr_33 [(unsigned char)2] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_16 [i_0] [1U] [i_8] [(unsigned short)6])), (((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_8] [i_0] [(unsigned char)21])) & (20ULL))))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [(_Bool)1] [i_8] [i_8] [i_8] [i_0 + 2]))))) ? (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) arr_0 [19LL] [i_0]))))) : (min((var_6), (((/* implicit */long long int) -103779566)))))) - (3996510476LL)))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_31 [i_8] [i_8] [i_8])))) + (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_18 [i_8] [i_0] [i_0] [i_8])))) ? (min((var_2), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_2 [i_0] [i_8]))))))))))));
            arr_34 [i_0] [i_0] [10] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)47179)), (103779561)));
        }
        for (short i_9 = 4; i_9 < 21; i_9 += 2) /* same iter space */
        {
            var_23 -= (short)-19370;
            arr_37 [(unsigned char)12] [i_0] [i_9 - 3] = ((/* implicit */signed char) (~(max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((-9223372036854775806LL) <= (7958862243863322393LL))))))));
        }
    }
    var_24 = ((/* implicit */unsigned int) var_8);
}
