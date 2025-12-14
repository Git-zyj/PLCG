/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17659
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)16220))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (3405444554552966311LL))))));
                            var_15 = ((long long int) -499250711643516270LL);
                        }
                        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-6777))) > (5832840243882039383LL))))));
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((short) 0ULL)))));
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_5 [i_2] [i_2])))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_11)), (17080132570166145000ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_6 [4ULL] [4ULL] [i_2]))))))))));
                        var_19 -= ((/* implicit */unsigned long long int) (!(((var_4) == (((/* implicit */unsigned long long int) 1430933733U))))));
                    }
                    for (short i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (~(var_7)));
                        /* LoopSeq 1 */
                        for (short i_6 = 3; i_6 < 12; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1063538052U))));
                            var_21 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) 2818532418426075046ULL)) ? (var_7) : (12876875781974595971ULL))), (max((((/* implicit */unsigned long long int) arr_18 [i_0])), (10596979418699505808ULL)))))));
                            var_22 = ((/* implicit */long long int) max((var_6), (((/* implicit */short) ((arr_0 [i_5 + 1] [i_6 + 1]) != (arr_0 [i_5 + 1] [i_6 - 3]))))));
                        }
                        var_23 = var_6;
                        var_24 = ((/* implicit */short) arr_11 [i_5] [i_2] [i_0] [i_0] [i_1] [i_0]);
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_7] [i_1] = ((/* implicit */unsigned int) arr_14 [i_0] [i_0]);
                        arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-3445)) > (((/* implicit */int) (short)-3445))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((long long int) arr_6 [i_0] [i_1] [i_2])), (((/* implicit */long long int) ((var_10) >= (var_3)))))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_18 [i_1])), (10596979418699505808ULL))))));
                    }
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_27 |= ((/* implicit */long long int) arr_25 [i_1] [i_2] [i_8] [i_9]);
                            arr_34 [i_0] [i_0] [i_2] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0]))))) >= (((/* implicit */int) (short)-13798)))))) >= (((6973635482208295352ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2707)))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) 4294967295U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_29 = (-(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 16252928U)) : (arr_0 [i_0] [i_1]))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_8])), (var_2)))))));
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_8] [i_10] [i_10]))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_32 [i_0] [i_0] [8U] [i_8] [i_10]))))) / (((long long int) 3600331185U))));
                            var_32 -= ((/* implicit */short) 0ULL);
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */short) var_8);
    var_35 -= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 750829458U)) ? (-1300963611674810821LL) : (((/* implicit */long long int) 449596863U)))) % (((/* implicit */long long int) 1345167615U))))));
    var_36 = ((/* implicit */unsigned long long int) (((+(max((((/* implicit */unsigned int) (short)0)), (var_3))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != ((-(var_10)))))))));
}
