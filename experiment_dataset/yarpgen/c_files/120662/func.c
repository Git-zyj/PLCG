/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120662
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [11LL] [i_2])) : (((/* implicit */int) (signed char)-40)))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_2])))) | (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) << (((var_12) - (1164809494)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1])), (min((arr_8 [(unsigned short)8] [i_0] [i_0] [i_0]), ((unsigned short)36526)))))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */int) (unsigned short)29010)))))))));
                        }
                    } 
                } 
                arr_15 [(signed char)5] [(signed char)5] = ((/* implicit */signed char) 4331905598709580913LL);
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((max((((var_7) / (((/* implicit */int) arr_5 [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)7169)))))) == (((/* implicit */int) ((arr_13 [i_1] [i_1]) < (max((arr_13 [i_1] [i_1]), (((/* implicit */long long int) arr_7 [i_0]))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_4] [i_4]))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4])) > (var_4)))) << (((((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */int) arr_26 [(signed char)15] [13] [(signed char)7] [8] [i_8])) : (((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4])))) - (55))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) arr_17 [i_6]);
                }
            } 
        } 
    } 
    var_22 = ((unsigned short) ((((/* implicit */int) var_11)) <= (var_10)));
    var_23 |= ((/* implicit */signed char) var_7);
}
