/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14947
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */signed char) var_5);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_0] |= ((/* implicit */signed char) ((arr_6 [i_0] [i_1] [i_2 - 3] [i_2 - 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18291)))));
                            arr_10 [(unsigned short)7] [(unsigned short)7] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) << (((((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_3 - 1])) / (var_5)))));
                            var_18 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) var_1)), ((+(511ULL)))))));
                            arr_11 [i_1] |= ((/* implicit */int) (unsigned char)231);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((268435455LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((signed char) var_12)))));
}
