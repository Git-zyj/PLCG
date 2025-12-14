/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184672
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)0)), (((unsigned long long int) max((arr_2 [i_0 - 1] [i_1]), (arr_2 [i_0] [i_0]))))));
                    arr_8 [i_0] [9LL] [i_0] = ((/* implicit */signed char) min((((_Bool) ((((/* implicit */_Bool) 131071LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1]))))), (((((/* implicit */int) (short)-32763)) >= (((/* implicit */int) min((((/* implicit */short) (signed char)33)), (arr_3 [i_0] [i_1] [i_2]))))))));
                    var_20 |= ((/* implicit */_Bool) 2031987897150638805ULL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13))), (((/* implicit */long long int) 33554431U))))) ? (min((((((/* implicit */_Bool) var_14)) ? (4693230740195409826LL) : (131071LL))), (((/* implicit */long long int) ((var_4) ? (var_16) : (((/* implicit */int) (signed char)33))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_15)))) ? (min((((/* implicit */long long int) 2089216042U)), (131071LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)180)))))))));
}
