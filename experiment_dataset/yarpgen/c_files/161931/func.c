/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161931
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
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) max((max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (signed char)69))))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 3]), (arr_0 [i_0 - 1])))) : (max((arr_1 [i_0 + 1]), (((unsigned long long int) var_3)))));
                var_13 = ((/* implicit */signed char) var_11);
                var_14 ^= ((/* implicit */short) arr_1 [i_0]);
                var_15 = ((/* implicit */signed char) ((int) (-(-800838914457045195LL))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0 - 2] [i_0 - 3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6128260999560226660ULL)))))))) ? (-3053980557459202620LL) : (min((800838914457045205LL), (8662516757821706839LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) var_7)), (var_10))))), ((~(((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [i_3] [i_2] [i_3])) : (var_11)))))))));
                arr_11 [i_2] [i_3] = ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) max((-800838914457045202LL), (((/* implicit */long long int) arr_7 [i_2])))))))) ? ((-(((((/* implicit */_Bool) -1098230163)) ? (var_9) : (((/* implicit */unsigned long long int) 8662516757821706839LL)))))) : (((/* implicit */unsigned long long int) (+(arr_9 [i_2] [i_3] [i_3])))));
                arr_12 [i_2] [9ULL] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) && (((/* implicit */_Bool) -800838914457045195LL)))))) ? (min((((((/* implicit */_Bool) 509666776114768794ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)10] [(short)10]))) : (13365242782988485218ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -800838914457045202LL)) ? (-238465887997500266LL) : (var_7)))))) : (var_9));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 3; i_4 < 17; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 17; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        for (short i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (arr_13 [i_7])));
                                var_19 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (arr_15 [i_7 + 3] [i_4]) : (((/* implicit */unsigned long long int) arr_16 [i_5 + 1]))))));
                                arr_25 [i_4 + 1] [i_4 + 1] [i_6] [i_6 - 4] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_21 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 3]))));
                                var_20 = ((/* implicit */signed char) ((((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_21 [i_8 - 2] [i_4] [i_5] [i_4])))))) ? (((((/* implicit */_Bool) arr_22 [i_4] [i_4 - 2] [i_4] [i_4 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_11))) : (11638151133349758815ULL))) : (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15953026984691644746ULL)) ? ((-9223372036854775807LL - 1LL)) : (var_7))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_17 [i_10] [i_4] [i_4] [i_5]);
                                var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_27 [i_4] [i_4 - 3] [i_5 - 1] [i_6 - 4] [i_10 + 1])) ? (arr_27 [i_4] [i_4 - 3] [i_5 + 1] [i_6 - 4] [i_10 + 2]) : (arr_27 [i_4] [i_4 - 1] [i_5 - 1] [i_6 - 4] [i_10 + 2])))));
                                arr_31 [15] [i_6 - 4] [i_6 - 4] [i_9] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [(short)9] [i_4] [i_6] [i_9 + 4])) : (arr_21 [14] [14] [i_9 - 2] [i_9 - 2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
