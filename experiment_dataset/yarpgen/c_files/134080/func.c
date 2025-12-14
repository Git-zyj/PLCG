/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134080
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((long long int) 369575199)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 14)) : (var_12)))))) ? (var_5) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) (unsigned short)37854)) ? (((/* implicit */long long int) (~(var_6)))) : ((+(var_17))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_0))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_0] [4] [4])) ? (arr_5 [i_1] [i_2]) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_1] [i_0 - 1]))))) : ((~(((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) 2492804817U))))))));
                            arr_11 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_8 [i_0 + 3])))));
                            var_22 *= ((/* implicit */unsigned long long int) arr_2 [i_1] [2U]);
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) arr_9 [(unsigned char)11] [(unsigned char)11] [12LL] [(unsigned char)1])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1])) ? (12110756668915665915ULL) : (12110756668915665922ULL))))))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) ((_Bool) var_10)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_15)))))))));
    var_25 += ((/* implicit */unsigned int) var_16);
}
