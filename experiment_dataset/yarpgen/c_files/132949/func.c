/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132949
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
    var_14 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4227858432U) << (((-1610620810) + (1610620825)))))) ? (((/* implicit */int) (short)-19096)) : (((/* implicit */int) var_2))));
                    var_16 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) min((((/* implicit */short) var_6)), (arr_6 [i_1] [i_0]))))))) ^ (((/* implicit */int) var_3)));
                    var_17 = ((/* implicit */short) min((((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (arr_3 [i_1] [i_1])))) < (((/* implicit */int) (_Bool)1)))), (arr_3 [i_0 + 1] [i_0])));
                    arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (short)(-32767 - 1)))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (arr_7 [i_1]) : (((arr_7 [i_1]) % (min((((/* implicit */unsigned long long int) var_1)), (arr_7 [i_1])))))));
                }
            } 
        } 
    } 
}
