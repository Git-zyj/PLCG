/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11869
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((int) min((((unsigned char) arr_2 [i_1] [i_0 - 2])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))))));
                var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 1] [i_0 - 1])))) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) (+(var_4))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((unsigned short) var_7));
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_7 [i_2] [i_2 - 1])) / (((/* implicit */int) arr_7 [i_2] [i_2 + 1])))) : (min((-1964576556), (((/* implicit */int) arr_7 [i_3] [i_2 + 2]))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3])) ? (min((((arr_4 [i_4] [i_2 - 2] [i_2 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2] [i_2 - 2]))) : (arr_12 [i_2 - 1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1964576569) > (1964576568))))))))));
                    arr_13 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2] [i_4])) < (-1964576552))))))));
                    var_24 = ((/* implicit */unsigned int) arr_4 [i_2] [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */long long int) min((1964576593), (1964576588)))) : (min((min((((/* implicit */long long int) arr_3 [i_2] [i_3] [i_5])), (arr_9 [i_4] [i_3]))), (((/* implicit */long long int) max((var_19), (((/* implicit */unsigned int) -1964576556)))))))));
                                var_26 *= arr_12 [i_4] [i_5 + 3] [i_5];
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (((!(((/* implicit */_Bool) -1964576592)))) && (((((/* implicit */_Bool) -1964576579)) && (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1]))))))), (1964576526)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
