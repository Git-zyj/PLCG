/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146999
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)643)) : (((/* implicit */int) (unsigned short)53495))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (short)-32761))))))) : (((unsigned int) ((13964696435481466877ULL) >> (4ULL))))));
                var_15 = ((/* implicit */long long int) (((((((-(((/* implicit */int) arr_2 [i_0])))) + (2147483647))) >> (((max((18446744073709551588ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) - (18446744073709551587ULL))))) == (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-53))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */long long int) var_10);
    var_17 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_12), (((/* implicit */signed char) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))));
    var_18 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) var_8)) - (((/* implicit */int) var_7))))))));
}
