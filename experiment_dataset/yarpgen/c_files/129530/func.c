/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129530
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((18446744073709551615ULL), (arr_2 [i_0] [i_1] [i_1])));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */short) var_10)), (arr_1 [i_0] [i_0]))), (((/* implicit */short) var_10))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned int) ((signed char) var_6))), (((((/* implicit */_Bool) 14ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((unsigned int) arr_1 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((signed char) max(((~(var_7))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551612ULL))))))));
                            arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 7037676996800847566ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))))) : (min((var_1), (((/* implicit */unsigned long long int) ((signed char) var_2)))))));
                            arr_12 [(signed char)8] [i_0] [i_2] [i_2] [i_3] [i_3 - 2] = ((/* implicit */signed char) min((2449627995U), ((+(min((3755643536U), (((/* implicit */unsigned int) (unsigned short)64608))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_3)))))))) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22763))) | (var_11))))) - (64733)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_5);
}
