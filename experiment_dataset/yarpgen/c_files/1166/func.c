/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1166
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
    var_14 = ((/* implicit */unsigned char) max(((((!(var_2))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (((/* implicit */unsigned long long int) var_0))));
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = (!(((/* implicit */_Bool) -1LL)));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_2))));
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), ((~(var_11)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
                        arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-21329)) : (((/* implicit */int) var_1)))), (293146401)));
                    }
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((var_9), (((/* implicit */unsigned short) var_1)))), (min((var_9), (((/* implicit */unsigned short) var_8))))))), (max((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) var_1))))), (max((((/* implicit */long long int) (short)18110)), (-5049470530947276369LL)))))));
                        var_22 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) min(((unsigned short)47486), (((/* implicit */unsigned short) (signed char)1))))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) var_12))))) ? ((~(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_3)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((var_6) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                        arr_20 [(short)15] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                        arr_21 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)));
                    }
                }
            } 
        } 
    } 
}
