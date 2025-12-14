/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186501
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
    var_12 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4847183889034022585LL)) ? (4095ULL) : (18446744073709547520ULL))), (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) var_8)))))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((-(var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */long long int) arr_1 [i_0]);
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_0)))))))) : ((~(((/* implicit */int) (signed char)121))))));
                arr_5 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((short) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_3))))))));
            }
        } 
    } 
}
