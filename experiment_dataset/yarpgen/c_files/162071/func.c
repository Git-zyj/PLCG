/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162071
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 += ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))), (((/* implicit */unsigned int) (_Bool)1))))) & (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) var_9)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6089272694796035960LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (arr_4 [i_1 - 1] [i_1 - 1] [i_0]))))) : (((var_3) - (((/* implicit */unsigned long long int) -6089272694796035960LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [3ULL] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))) == (((/* implicit */unsigned long long int) (~(var_1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31738)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (-6089272694796035966LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) : ((~(var_13)))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0] [i_2 + 1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) var_7);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (max((((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_5)))))));
}
