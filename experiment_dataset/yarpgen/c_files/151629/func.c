/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151629
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) var_2)));
                var_21 = ((/* implicit */int) (short)-1);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_22 = ((((/* implicit */long long int) 1471246948)) ^ (((((((/* implicit */_Bool) (short)1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) * (((/* implicit */long long int) ((/* implicit */int) (short)-2))))));
                            var_23 = ((/* implicit */short) ((unsigned char) (short)(-32767 - 1)));
                            var_24 &= ((/* implicit */signed char) ((((var_5) + (((/* implicit */unsigned long long int) var_13)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)108)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51150))) : (var_10)))))) ? (((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */long long int) var_1)) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))))) : (((/* implicit */long long int) ((((unsigned int) var_2)) * (((/* implicit */unsigned int) var_7)))))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) var_18)) >= (((var_10) / (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
    var_28 = ((/* implicit */unsigned short) ((int) (signed char)-21));
}
