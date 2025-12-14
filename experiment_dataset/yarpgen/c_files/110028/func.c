/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110028
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
    var_14 = max((((/* implicit */long long int) (~(((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (-7469714428962620489LL));
    var_15 = ((/* implicit */unsigned char) var_12);
    var_16 = ((/* implicit */long long int) (short)-26577);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48317)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (short)10153)))))));
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((arr_3 [(unsigned short)19] [i_2] [i_1]) / (((/* implicit */unsigned long long int) var_12)))) >= (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20791))))))))));
                            }
                        } 
                    } 
                    var_19 = ((((unsigned int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_1] [(signed char)5] [i_2])) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60761)))))))));
                    var_20 *= min((((arr_9 [i_0 + 1] [i_0 + 1] [(unsigned short)6] [i_0 + 1]) & (arr_4 [i_0] [i_2] [i_0 + 2]))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-20791)) : (((/* implicit */int) (short)-20792)))))));
                }
            } 
        } 
    } 
}
