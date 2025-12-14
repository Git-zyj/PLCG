/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132619
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_0] [i_0] [i_1 + 1])))))))));
                arr_5 [10ULL] [10ULL] [i_1] = ((/* implicit */unsigned char) var_15);
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */short) arr_2 [i_0] [i_1] [i_1 + 1]);
                arr_7 [i_1] = ((((/* implicit */int) (unsigned char)0)) / (562095014));
            }
        } 
    } 
    var_21 ^= ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_11))), (var_14))))));
    var_22 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) 3312159552084318074LL)) : (0ULL)))))));
    var_23 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-(var_11))))));
}
