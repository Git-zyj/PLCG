/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16106
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
    var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (742422634) : (2147483641)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((arr_2 [i_0] [(unsigned char)3]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [0ULL]))))) : (min((((/* implicit */long long int) ((var_7) ? (((/* implicit */unsigned int) var_4)) : (arr_4 [i_0] [(unsigned char)3] [i_0])))), (((9223372036854775807LL) << (((((var_3) + (1177297382))) - (39)))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned short) ((max((0), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))) - (var_9)));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) ((arr_4 [i_2] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((_Bool) 6867352477232209630ULL))))) : (((((/* implicit */_Bool) min((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)84))))) ? (((/* implicit */unsigned int) var_9)) : (0U)))))));
                    var_15 -= ((/* implicit */unsigned short) -1251193653900161913LL);
                }
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (4503462188417024ULL))))))));
                var_17 = ((/* implicit */short) 2448109023U);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) 3357937850U))))), (var_3)))));
    var_19 = (~(((/* implicit */int) ((((/* implicit */_Bool) (~(2386650369604179573LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_2)) >= ((-2147483647 - 1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)));
}
