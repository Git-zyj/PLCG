/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15677
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
    var_12 = ((/* implicit */short) (-(-13LL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (-(max((((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned short)24758)))), ((-(((/* implicit */int) (signed char)0))))))));
        var_14 = ((/* implicit */unsigned long long int) (~((-(arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (~(((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)10140))))) - (arr_2 [i_1]))))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-14)))))));
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(arr_5 [i_1] [i_2]))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14)))))) ? (2926790713U) : (arr_2 [11ULL])));
        }
        arr_6 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) (short)27357)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((long long int) (-(((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
}
