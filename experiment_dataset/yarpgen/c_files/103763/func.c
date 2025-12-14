/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103763
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((2686452868038913421LL), (((/* implicit */long long int) min((arr_8 [i_0] [(_Bool)1] [i_0] [i_0] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))));
                                arr_13 [i_1] = ((/* implicit */long long int) arr_10 [14ULL] [i_1] [i_1] [15ULL] [i_1] [i_1] [i_1]);
                                arr_14 [i_1] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) -2686452868038913422LL)))));
                                arr_15 [i_2] [i_2] [i_1] [(signed char)18] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) ? ((+(arr_1 [(short)7] [i_3]))) : (((/* implicit */unsigned long long int) 6LL))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2686452868038913410LL))));
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 18; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [2ULL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5 - 3] [i_5 - 1] [i_1] [i_5 + 1])) ? (max((arr_20 [i_6] [i_6] [(short)5] [i_6]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) max((arr_18 [i_0] [(unsigned char)8] [(unsigned short)0] [i_0] [i_1] [5ULL]), (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1])))))));
                                arr_22 [i_0] [i_0] [7ULL] [i_1] [18ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_5 [i_5] [i_1] [i_1] [(_Bool)1])))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_3)))) : (((arr_19 [i_0] [(short)1] [(short)8] [i_1] [i_0]) >> (((-2686452868038913410LL) + (2686452868038913440LL)))))))) ? (2686452868038913433LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8021)))));
                                arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0] [i_0] [11ULL] [i_0])), (var_7)))))))));
                                var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 10697025893409743460ULL))));
}
