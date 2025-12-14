/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107353
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
    var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) 3153175596545516352LL)) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_7))));
    var_14 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_8)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (3014456816U)))))), (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((_Bool) min((((/* implicit */unsigned long long int) -1LL)), (10610014957497918508ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((_Bool) var_8)))))) : (((12653598646651959895ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                var_16 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)184)), (((((/* implicit */_Bool) 16127373302442272200ULL)) ? (36028797018898432ULL) : (((/* implicit */unsigned long long int) 2572928607U))))));
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (((!(((/* implicit */_Bool) max((-5809468295832685813LL), (0LL)))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_1 - 1])), (((signed char) arr_3 [i_0] [i_1]))))) : ((~(((/* implicit */int) (unsigned short)39006)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned char) ((signed char) (unsigned char)207))), ((unsigned char)33)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
}
