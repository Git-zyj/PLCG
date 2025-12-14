/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156510
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [9ULL] [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) min(((unsigned char)3), ((unsigned char)0)))) ^ ((+(((/* implicit */int) var_10)))))), (((/* implicit */int) (!(var_10))))));
                arr_5 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (947413046U)))) ? (((unsigned long long int) 2802841019U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1])))))))) ? ((-(var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((2147483647), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) (-2147483647 - 1)))))))))));
                var_11 ^= ((/* implicit */int) var_5);
            }
        } 
    } 
    var_12 |= var_8;
    var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (16560007150615133612ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_6))))) : (min((((/* implicit */unsigned long long int) var_6)), (1886736923094418014ULL))))) : (((/* implicit */unsigned long long int) min((var_6), (min((((/* implicit */int) var_4)), (-2147483645))))))));
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((unsigned short) (unsigned char)240))))));
}
