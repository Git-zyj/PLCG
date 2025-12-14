/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117481
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
    var_11 = ((/* implicit */signed char) (((+(((((/* implicit */unsigned long long int) var_7)) * (var_4))))) * (((/* implicit */unsigned long long int) ((((2014999464719630666LL) / ((-9223372036854775807LL - 1LL)))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))))))));
    var_12 = ((/* implicit */signed char) (+(((unsigned long long int) ((unsigned short) var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_13 |= ((/* implicit */_Bool) (unsigned char)7);
                            var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / ((+(((/* implicit */int) (_Bool)1))))));
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_1)))))) % (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_15 &= ((/* implicit */short) 18446744073709551615ULL);
                var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57230))))))) % (((/* implicit */unsigned long long int) var_9))));
                var_17 ^= ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) var_8)) * (17475618110190723708ULL))) / ((+(13735229849836297979ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28453)) ^ (((/* implicit */int) (_Bool)1))))) ? ((-(var_8))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37069))))))))));
            }
        } 
    } 
}
