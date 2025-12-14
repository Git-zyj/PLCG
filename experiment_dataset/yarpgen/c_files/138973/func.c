/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138973
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_1] [i_0] [i_0]);
                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0 - 2]), (((/* implicit */long long int) arr_3 [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max(((unsigned char)216), (((/* implicit */unsigned char) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((6153441483467024286ULL) - (6153441483467024270ULL)))))) && (((/* implicit */_Bool) max((12293302590242527316ULL), (((/* implicit */unsigned long long int) (unsigned char)62))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_2)))))))));
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), (((long long int) var_5))));
    var_16 += ((/* implicit */long long int) var_11);
    var_17 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((((/* implicit */int) (unsigned char)134)) - (113))))));
}
