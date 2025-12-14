/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146687
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                arr_5 [9] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_10)) : (var_9))), (var_9))) + (((unsigned long long int) var_12))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */int) ((_Bool) ((_Bool) var_10)));
                            var_17 = ((/* implicit */unsigned short) ((int) min((var_7), (((/* implicit */unsigned short) var_8)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_0))));
                    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((var_6) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((min((var_12), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                    arr_17 [i_0] [14] [i_5] = ((/* implicit */signed char) ((long long int) ((unsigned short) var_3)));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [(short)3] [i_6] [i_1] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (max((((/* implicit */int) var_8)), (var_1)))))) ? (min((((var_8) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) var_8)), (((unsigned char) var_5))))))));
                                var_21 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) var_6))), (((long long int) ((_Bool) var_11)))));
                                var_22 = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [(unsigned short)7] [i_8] = ((/* implicit */unsigned short) ((int) var_6));
                    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_5))));
                }
                arr_29 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((int) var_10)));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_7);
}
