/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169167
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min(((+(((int) var_8)))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
                var_21 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                arr_6 [i_1 - 2] = ((/* implicit */short) (signed char)-66);
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (0LL) : (-1LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) > (4065136227174997611LL))) ? (min((12LL), (((/* implicit */long long int) (unsigned short)62446)))) : (((/* implicit */long long int) var_7))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((var_0) - (108015059U)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) : ((~(var_7)))));
    var_24 = ((/* implicit */signed char) (unsigned short)65535);
}
