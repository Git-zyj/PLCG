/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177820
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] = min((min((max((((/* implicit */long long int) arr_0 [i_1])), (var_2))), (min((var_6), (((/* implicit */long long int) arr_12 [17LL] [i_1])))))), (max((max((((/* implicit */long long int) arr_6 [i_4])), (arr_14 [i_0] [i_2] [i_2] [i_3] [i_4]))), (((var_14) ? (((/* implicit */long long int) var_12)) : (arr_10 [i_0] [(_Bool)1] [i_0] [15U] [i_0]))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((var_14) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (((_Bool)1) ? (288511288) : (((/* implicit */int) (unsigned char)78))))))) : (max((((long long int) var_14)), (max((var_6), (((/* implicit */long long int) var_15))))))))));
                                var_20 &= ((/* implicit */int) min((min((var_4), (min((var_5), (var_9))))), (((((/* implicit */_Bool) -8824318914355790644LL)) ? (var_7) : (max((-6759759406795718071LL), (8177282814729219372LL)))))));
                                var_21 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */long long int) var_12)) : (var_9)))) ? (min((var_1), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))))), (((((/* implicit */_Bool) ((long long int) var_13))) ? (min((arr_9 [i_1]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((unsigned int) arr_8 [i_4] [i_3] [11ULL] [i_2] [i_1] [11ULL])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((max((((/* implicit */long long int) arr_11 [i_2] [i_1] [i_2])), (var_17))), (max((((/* implicit */long long int) var_18)), (min((arr_9 [i_2]), (arr_4 [i_0])))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (var_9)))) ? (var_0) : (min((var_1), (var_13)))))) ? (((/* implicit */unsigned long long int) var_2)) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (long long int i_6 = 3; i_6 < 18; i_6 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (min((((/* implicit */long long int) arr_17 [i_5])), (arr_19 [i_5] [i_5] [i_5])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_5])), (arr_19 [i_5] [i_5] [i_6])))) ? (((/* implicit */unsigned int) min((var_18), (arr_16 [i_5])))) : (((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (arr_18 [i_6]) : (((/* implicit */unsigned int) arr_16 [i_5])))))) : (((/* implicit */unsigned int) ((int) arr_19 [i_5] [12U] [i_5])))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 4; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 19; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                arr_27 [i_5] [i_8] [i_7 - 3] [i_6 - 3] [i_5] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_18)) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_0)))))), (((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */long long int) arr_18 [i_5])))), (((/* implicit */long long int) ((unsigned short) var_18))))))));
                                var_25 = ((/* implicit */long long int) ((int) ((unsigned int) min((var_13), (arr_19 [i_5] [i_9] [i_7])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 3; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((max((min((var_9), (((/* implicit */long long int) arr_31 [i_5] [i_5] [i_10 - 1] [5LL])))), (min((((/* implicit */long long int) var_10)), (var_17))))), (((/* implicit */long long int) var_14))));
                            arr_34 [i_6] [i_5] [i_11] = arr_28 [10] [10] [i_10];
                            var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_0))), (arr_25 [i_5] [i_5] [i_5])));
                            arr_35 [8LL] [8LL] &= ((/* implicit */unsigned long long int) ((_Bool) min((min((arr_28 [i_6 - 2] [i_10 - 1] [i_10 - 1]), (((/* implicit */unsigned int) arr_20 [i_5] [i_6 + 1])))), (min((((/* implicit */unsigned int) var_12)), (var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
