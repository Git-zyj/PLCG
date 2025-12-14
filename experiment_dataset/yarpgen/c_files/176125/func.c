/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176125
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (signed char)38))));
                    arr_8 [i_1] [i_1] [(unsigned short)3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) arr_7 [i_2] [i_1] [i_1] [i_0]))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 1189482898))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [8LL])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (arr_10 [i_3] [i_3] [i_1] [i_0])))));
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_3]))))));
                    arr_13 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_3] [i_3] [i_3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((unsigned char) 1189482898))) : (((/* implicit */int) (short)-22387))))) : (((unsigned long long int) (signed char)124))));
                }
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(-3130884160302131521LL)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_4)))))));
}
