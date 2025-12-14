/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125548
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
    var_11 = ((/* implicit */unsigned char) (~(((unsigned int) var_7))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) ^ (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)(-127 - 1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_13 *= ((/* implicit */int) ((signed char) ((5054332021023917933ULL) | (((/* implicit */unsigned long long int) arr_4 [i_0])))));
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (short)24140)) ? (((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (arr_4 [i_0]))))));
            var_15 = (-(var_8));
        }
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (short)24140)), (((((/* implicit */_Bool) (short)-24140)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (short)-24159))))))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_2 + 1] [i_2 + 2] [i_2 + 1]) != (arr_3 [i_2 + 1] [i_2] [i_2 + 1])))) + (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : ((~(((/* implicit */int) var_3)))))))))));
        }
        arr_7 [(unsigned char)11] = max((((/* implicit */unsigned long long int) (signed char)-125)), (12067443895704713764ULL));
    }
}
