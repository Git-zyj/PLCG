/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119313
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), ((~(var_10)))))) ? (((((((/* implicit */_Bool) var_6)) || ((_Bool)1))) ? (var_12) : (-5147215470515293LL))) : (var_7)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_2 [11LL] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) > (1514777496175871736LL))))))) ^ (max((9223372036854775784LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)161)))))))));
                var_18 = arr_2 [i_0] [i_0];
                var_19 = ((/* implicit */long long int) ((-908492985881252810LL) <= (-591204678903535960LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (((_Bool)1) && ((_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((var_2) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))), (var_3))))) : (((long long int) var_13))))));
}
