/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124271
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
    var_16 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [(unsigned char)10] = ((/* implicit */unsigned short) ((var_9) | (min((var_14), (((/* implicit */long long int) (short)-5960))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((int) 3731219374U));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] = min((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_0])), ((~(((2792375552U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25802))))))));
                                arr_17 [i_0] [i_0] [i_2] [i_2] [(_Bool)1] [(signed char)6] [i_3] = ((/* implicit */unsigned char) var_9);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 3])) ? (arr_1 [i_3 - 2]) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((1502591727U) >= (2792375552U)))) : (((/* implicit */int) arr_12 [i_4] [i_3] [4LL] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) ((short) (((_Bool)1) ? (((/* implicit */int) var_1)) : (arr_3 [i_0]))));
            }
        } 
    } 
}
