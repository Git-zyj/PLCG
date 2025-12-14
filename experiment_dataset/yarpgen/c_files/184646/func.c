/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184646
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) var_4);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((int) arr_3 [i_2] [i_1] [i_1]));
                        var_19 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_7 [i_1] [(unsigned short)4] [i_1]))));
                        arr_14 [i_0] [i_0] [i_2] [9LL] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [6] [6] [(unsigned short)13])) ? (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
            } 
        } 
        var_21 -= ((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)7])) ^ (((long long int) ((((/* implicit */int) arr_1 [12LL])) * (((/* implicit */int) var_8))))));
        arr_15 [i_0] = ((/* implicit */unsigned int) max(((((+(-5110370275490542011LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_11))));
        arr_16 [i_0] = ((/* implicit */unsigned short) var_15);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        var_22 = ((/* implicit */int) ((((int) var_12)) != (((/* implicit */int) ((((/* implicit */long long int) var_4)) == (var_12))))));
        arr_19 [i_5 - 1] = ((/* implicit */unsigned short) ((4188800255558460128ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1851)))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [19] [i_6])) ? (5110370275490542010LL) : (((/* implicit */long long int) arr_20 [i_6] [i_6]))));
        var_23 = ((/* implicit */unsigned short) ((unsigned char) arr_21 [i_6]));
        arr_23 [i_6] = ((2479835399737435592ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6])))))));
        arr_24 [4ULL] = ((/* implicit */unsigned long long int) ((arr_20 [(unsigned short)20] [i_6]) == (((/* implicit */int) var_11))));
    }
    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    var_25 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_8))))))), (((/* implicit */int) ((unsigned short) var_3)))));
}
