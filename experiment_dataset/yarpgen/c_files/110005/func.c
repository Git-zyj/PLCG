/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110005
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
    var_13 *= ((/* implicit */short) (~(var_8)));
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_5) ? (((/* implicit */int) (signed char)3)) : (var_2)))))) ? ((((~(1830128292U))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8LL] [i_1 + 1])))));
                var_17 -= ((/* implicit */long long int) var_2);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    var_18 *= ((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (_Bool)1)))))) : ((((!(((/* implicit */_Bool) (unsigned short)22750)))) ? (((/* implicit */unsigned long long int) min((-1609364202632843969LL), (((/* implicit */long long int) arr_0 [i_1]))))) : (arr_2 [i_0])))));
                    var_19 -= min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))));
                }
                for (unsigned int i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_1 + 1] [i_0] [(_Bool)1])) ? (max((var_2), (((/* implicit */int) arr_0 [i_1 + 1])))) : (((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) var_7))))));
                    var_21 -= ((/* implicit */unsigned int) (!((!(((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_4))))))));
                }
                var_22 ^= ((/* implicit */_Bool) var_10);
            }
        } 
    } 
}
