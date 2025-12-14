/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117563
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
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((unsigned long long int) 2220357242U)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((short) (+(2074610039U))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2220357256U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14)))))) ? (arr_2 [3LL]) : (arr_2 [i_1 - 1])));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_24 -= ((((/* implicit */_Bool) (short)23558)) ? (2220357242U) : (2220357256U));
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) arr_6 [i_4] [11LL])) || (((/* implicit */_Bool) arr_10 [(signed char)3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -4665614059493528269LL)) || (((/* implicit */_Bool) 2074610039U))))) : (((/* implicit */int) ((unsigned char) 2074610040U))))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2074610039U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_7 [i_5] [i_4] [i_2])) : (((/* implicit */int) var_8))))))) ? ((((-(((/* implicit */int) (short)-23558)))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)4032)) || (((/* implicit */_Bool) 2074610039U))))))) : ((+(arr_9 [i_6 + 1] [i_3 - 1] [i_3 - 2])))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 2] [i_2])) ? (arr_9 [i_2] [i_2] [i_3 - 1]) : (((/* implicit */int) arr_7 [i_2] [6ULL] [i_3 + 1]))))) ? (((long long int) max((arr_14 [i_3] [i_3] [i_2]), (((/* implicit */int) arr_8 [i_2] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23558)) ? (arr_12 [i_2]) : (1200123249)))))))))))));
        }
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2074610055U)) ? (((/* implicit */int) arr_6 [(unsigned short)20] [6U])) : ((-(arr_9 [i_2] [(short)14] [i_2])))))) ? (((/* implicit */int) ((signed char) (short)-10977))) : ((-(arr_12 [i_2])))));
    }
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)19152))));
}
