/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131314
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((6708937455953210836LL), (((/* implicit */long long int) (unsigned char)135))))), (((unsigned long long int) arr_2 [i_1] [i_1 + 1]))));
                    arr_7 [(unsigned char)22] [i_1] [i_2] [20] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) / ((+(17023831954361306161ULL)))))));
                    var_19 = ((/* implicit */_Bool) ((arr_0 [i_0]) & (max((((/* implicit */long long int) var_13)), (arr_1 [i_1 + 1] [i_1 + 1])))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((6708937455953210836LL), (((/* implicit */long long int) (unsigned short)16549))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)17305)), (-4)))) : (((((/* implicit */_Bool) -1990611738)) ? (17600317004901941230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36341)))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1780712388) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 16707434402815197677ULL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (short)32766)))) : (((-1576711399) / (arr_6 [i_1]))))) > (((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((351528129U), (((/* implicit */unsigned int) (_Bool)0))));
    var_23 |= ((/* implicit */short) (-(((/* implicit */int) var_17))));
    var_24 = ((/* implicit */_Bool) 3494572441U);
}
