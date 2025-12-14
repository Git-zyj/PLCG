/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129266
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) & (var_8))) : (((/* implicit */long long int) (-((-(var_11)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [1LL] [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 12582513817136450840ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (8196932464217738619LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [11]))))))) * (((/* implicit */long long int) ((((/* implicit */int) max(((short)9247), (((/* implicit */short) arr_0 [i_0] [i_1]))))) >> (((max((arr_2 [i_0] [4LL]), (((/* implicit */long long int) (unsigned short)512)))) - (1427812326591803706LL))))))));
                var_19 ^= ((/* implicit */unsigned short) max((1023LL), (((/* implicit */long long int) (_Bool)0))));
            }
        } 
    } 
}
