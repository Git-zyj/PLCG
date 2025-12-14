/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153926
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_11))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)68)), (((unsigned short) (short)0))))), ((+(arr_5 [i_1 - 3] [i_1 - 2] [i_1] [i_1 - 2])))));
                arr_6 [i_1] [i_1] [i_1] [13U] = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_1]))), (max((((/* implicit */unsigned long long int) -1244460444)), (14280968356207955282ULL))))));
                arr_7 [i_1] [i_1 + 1] [(signed char)10] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_1 - 2] [i_2])) ? ((+(5256458093233205969LL))) : (((/* implicit */long long int) 1006635903U))))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((int) var_4));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_0] [(short)15] [i_1] [i_4] = ((/* implicit */_Bool) ((((arr_11 [i_1 - 3] [i_1] [i_0] [i_4 - 1] [i_0]) - (((/* implicit */unsigned long long int) arr_9 [(unsigned short)6] [i_4 - 3] [i_1] [i_4])))) ^ (min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_6))))));
                    var_22 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_1 + 2] [i_3] [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_4 [i_0] [i_5] [i_3]))) : (((/* implicit */unsigned long long int) arr_14 [i_3 + 3] [i_1] [i_1 - 3] [7LL] [i_1 + 1] [i_0])))))));
                    arr_16 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) var_15);
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (16270884102781499234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((((arr_9 [i_0] [i_1] [i_1] [(short)5]) > (((/* implicit */unsigned int) arr_14 [(short)1] [i_1] [i_1 + 2] [i_1 + 2] [i_6] [i_6 - 2])))) ? (2147483647) : (((/* implicit */int) (unsigned short)65535))));
                    var_26 ^= ((((((/* implicit */int) var_13)) == (((/* implicit */int) var_5)))) ? (arr_2 [6LL]) : (((((/* implicit */_Bool) arr_1 [i_3] [i_6])) ? (9690417817824176689ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (var_14) : ((+(((/* implicit */int) (short)24050)))))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) >> (((arr_17 [i_7] [i_3] [i_1] [i_1 - 2] [i_0]) - (8557440228305823196ULL)))))) ? (arr_4 [i_1 - 1] [i_1] [i_3 - 1]) : (((((/* implicit */_Bool) arr_18 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_3)))));
                }
            }
            var_29 ^= ((/* implicit */_Bool) arr_5 [i_1] [2] [i_0] [2]);
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_30 = (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_10])), (arr_3 [i_8] [i_0]))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) 19998941))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            } 
        }
        arr_31 [i_0] [i_0] = arr_20 [i_0];
    }
    for (unsigned short i_11 = 2; i_11 < 21; i_11 += 1) 
    {
        var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_33 [i_11])), (min((((((/* implicit */_Bool) (short)8690)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 1]))) : (arr_32 [i_11] [i_11]))), (arr_32 [i_11 - 1] [i_11 - 1])))));
        var_34 ^= ((/* implicit */int) (signed char)125);
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_15), (arr_33 [i_11 - 2])))) != ((-(13)))));
    }
}
