/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121610
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
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)))) : (((((/* implicit */_Bool) (short)15006)) ? (8878037221517351789ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175)))))))) ? ((~(((/* implicit */int) (unsigned char)114)))) : (((/* implicit */int) var_13))));
    var_16 &= var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)9] [i_0]))));
                    arr_10 [i_2] [i_2] [3ULL] [(unsigned char)24] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (arr_4 [i_0])))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned short)19217))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_10);
}
