/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169731
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
    var_20 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) var_18))))), (((((/* implicit */_Bool) max((5067549531369318720LL), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((1173325531U), (1173325538U)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) - (min((max((10309837860276949980ULL), (((/* implicit */unsigned long long int) (short)31822)))), (((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned short)3] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (~(((unsigned int) ((127LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25357))))))));
                                var_23 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)0] [i_2] [i_3 - 1] [2LL])) == (((/* implicit */int) arr_5 [i_4 - 1] [(short)7] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) -1643325540)) : (arr_6 [i_0] [i_1 + 1] [i_1 + 1])));
                                var_24 |= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */unsigned long long int) var_18);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) var_12);
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_10))))) ? (((long long int) var_3)) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))))));
}
