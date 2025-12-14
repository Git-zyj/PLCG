/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12734
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
    var_17 = ((/* implicit */unsigned char) min((max((var_6), (1974032607))), (((/* implicit */int) ((var_13) < (((long long int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)49954)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) arr_1 [i_0] [i_2]))))))), (((((/* implicit */int) arr_3 [i_3 - 3])) < (((/* implicit */int) var_9))))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned short)64813)), (var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 1258469706)))))))))));
                            var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_12)) : (var_1))), ((-(var_10)))))), ((-(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                            var_20 = ((/* implicit */int) min((((min((((/* implicit */unsigned int) arr_3 [i_0])), (arr_8 [i_0] [i_1] [i_2]))) * (((/* implicit */unsigned int) var_6)))), (((min((((/* implicit */unsigned int) 1258469706)), (1548595202U))) << ((((-(-830101935))) - (830101915)))))));
                            arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) min((996480233), (((/* implicit */int) (signed char)64))))) : (((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned long long int) -894849385)))) >> (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)4)))))));
            }
        } 
    } 
}
