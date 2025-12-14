/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160370
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        var_19 -= ((/* implicit */unsigned short) ((unsigned long long int) (short)(-32767 - 1)));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned short i_3 = 4; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_15 [i_1] = ((/* implicit */_Bool) ((long long int) ((var_4) < (9005000231485440ULL))));
                        arr_16 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 2] [i_3 - 4]))) != (arr_0 [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        var_20 -= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_21 -= arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
                            var_22 = ((/* implicit */unsigned int) (+(var_2)));
                            var_23 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_5 + 1])));
                            var_24 = ((/* implicit */signed char) var_2);
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 2])) ? (((((/* implicit */_Bool) 5992262860369544288LL)) ? (arr_13 [i_5]) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                            var_26 = ((/* implicit */long long int) ((var_7) ? (arr_22 [i_3] [i_3 + 1] [i_3] [i_3 - 3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 + 2])))));
                        }
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_27 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [0ULL] [i_3 - 2] [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [i_5 + 2] [i_8])))) && (((/* implicit */_Bool) ((1577310629U) - (var_1)))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_8] [i_3 - 1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_1] [i_2] [i_3 - 2] [i_5] [i_5] [i_5] [i_8]))));
                        }
                    }
                    var_29 &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) % (((long long int) 2490358187884322425ULL)))));
                    var_30 = ((/* implicit */long long int) min((var_30), ((~(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -1))))), (arr_17 [i_1] [i_3 - 2] [i_3 - 2] [i_3 - 2])))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_13);
    var_32 -= ((/* implicit */short) (!(var_11)));
    var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) var_5)) != (var_9)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)23917)))) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))))))) : (((((/* implicit */_Bool) ((0U) << (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)))) : (((unsigned long long int) (unsigned short)35940))))));
}
