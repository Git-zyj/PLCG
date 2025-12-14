/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101740
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
    var_15 |= var_6;
    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (12560951752554760837ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4134))) : (-3412219537437002390LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 7924464342555756076ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)246)))), (((/* implicit */int) ((((/* implicit */_Bool) -7409630166217184840LL)) && (((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(10522279731153795541ULL))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(short)5])))) != (((/* implicit */int) (_Bool)1)))))));
                var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))))) ? (((/* implicit */int) arr_3 [i_1 + 4] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1])))) : (((/* implicit */int) var_10))));
            }
        } 
    } 
}
