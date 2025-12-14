/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16651
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
    var_12 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (arr_0 [i_1]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5))))) ? (min((1887625018U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0 - 1])))) : (((/* implicit */unsigned int) var_7))))));
                arr_5 [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) && (var_11))))) : (var_2)));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_1] [i_1] [i_0 + 1] [i_0] = (signed char)-71;
                                arr_14 [10] [10] = ((/* implicit */short) (!(((/* implicit */_Bool) min((2407342262U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 26782488752224774ULL)) ? (((/* implicit */int) arr_3 [i_0] [5ULL] [i_3])) : (((/* implicit */int) var_8))))))))));
                                arr_15 [i_0] [(unsigned char)11] [i_1] [i_3] [(unsigned char)11] [i_1 + 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-26593)), (6949602101409411775LL)))) ? (((((/* implicit */_Bool) (unsigned short)29246)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (var_2))));
                                arr_16 [i_0] [i_1] [(short)10] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_7)) : (var_2))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) var_7)))) >> (((/* implicit */int) min((arr_12 [i_0 - 2] [16] [16] [i_3] [i_4]), (((/* implicit */unsigned char) (signed char)-71)))))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) (unsigned short)46670)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4])))))))));
                                arr_17 [i_0] [i_1 + 2] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3633730053U)) ? (((/* implicit */int) var_10)) : (-1663699536))), (((/* implicit */int) (unsigned char)5))))), (((min((4262760482814058622ULL), (((/* implicit */unsigned long long int) var_11)))) << (((((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1] [i_2])) ? (arr_6 [i_0 - 1] [i_1 + 4] [i_1 + 4] [i_4]) : (((/* implicit */long long int) var_7)))) - (7730031690185417360LL)))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_0 - 3] [(unsigned char)0] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (2470792430102654764LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) var_6)) : (var_0)))) ? (min((4348041088967299148ULL), (8600501799512552310ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_11)), (arr_9 [i_0 - 1] [i_1] [i_1] [i_1 + 3] [i_5] [i_5])))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (arr_6 [i_0] [i_0] [i_1] [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_0] [i_0])) ? (var_7) : (var_6)))))) : (((((/* implicit */_Bool) var_0)) ? (-482215117812845103LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3915032373223033183ULL))))))))));
                    arr_22 [i_1] [9U] [i_1 + 3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned short)18287)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 3] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-884629154)))))) ? (var_5) : (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_1))))))));
                    arr_23 [i_5] [i_1] [i_0] = ((/* implicit */long long int) (~(var_6)));
                }
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)1))))) * (max((((/* implicit */unsigned int) var_10)), (2801857539U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [5ULL] [(short)2] [(short)2] [i_6])) ? (((/* implicit */int) arr_3 [i_6] [i_1] [i_0 - 3])) : (((/* implicit */int) var_4))))))))));
                    arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
                    arr_29 [i_1] = ((/* implicit */signed char) 17686513839688353260ULL);
                }
            }
        } 
    } 
    var_13 &= ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (unsigned short)47248)))));
}
