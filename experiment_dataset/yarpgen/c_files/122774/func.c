/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122774
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    var_12 *= ((/* implicit */unsigned long long int) ((signed char) (((~(var_4))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
                    var_13 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 844091625)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (short)-31811)) : (844091625))))))), (var_5));
                }
                for (signed char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 844091614)) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_3] [i_0 + 1])))));
                    arr_10 [i_0] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */int) ((arr_2 [i_0 - 2] [i_0 - 1]) | (((/* implicit */long long int) (+(((int) var_3)))))));
                }
                var_15 = ((/* implicit */short) arr_7 [i_0 - 1] [i_1] [i_1] [i_0]);
                var_16 = ((/* implicit */short) (+(-675754756)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_4);
}
