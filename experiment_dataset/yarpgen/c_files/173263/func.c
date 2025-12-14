/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173263
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                var_17 = ((/* implicit */int) var_2);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_13 [i_3 + 1] [i_3] [i_2] = ((/* implicit */long long int) var_3);
                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || ((!(var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_15))))) < (((/* implicit */int) var_15)))) ? (var_6) : (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_12)), (var_7)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))), (((((/* implicit */_Bool) var_6)) ? (var_6) : (var_6))))), (((/* implicit */long long int) var_15))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_3)))) ? (var_3) : (min((var_3), (((/* implicit */unsigned long long int) var_16))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_0))))) - (max((var_9), (((/* implicit */unsigned int) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) var_8))))) ? ((-(var_13))) : (max((var_14), (var_14)))))));
                            var_22 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (!(var_5)))), (max((((/* implicit */long long int) var_12)), (var_6))))) + (min((((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((var_10), (var_1))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_4] [i_4] [i_4] [15] = ((/* implicit */_Bool) min((max((max((var_3), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6)))))), (((/* implicit */unsigned long long int) min((((int) var_5)), (var_8))))));
                    arr_28 [i_4] = ((/* implicit */unsigned int) ((max((((var_12) ? (((/* implicit */long long int) var_13)) : (var_2))), (((/* implicit */long long int) min((var_1), (var_1)))))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (var_11)))), (var_9))))));
                    arr_29 [i_4] [i_5] [i_5] [i_5] = ((unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_5)))), (min((var_11), (((/* implicit */int) var_5))))));
                }
                var_23 = ((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_2) : (var_6))) == (((/* implicit */long long int) ((int) var_3)))))))));
            }
        } 
    } 
}
