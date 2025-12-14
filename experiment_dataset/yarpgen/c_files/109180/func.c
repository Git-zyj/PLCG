/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109180
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_10))));
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 &= ((/* implicit */unsigned char) ((unsigned short) var_0));
    var_16 &= ((/* implicit */short) max((((/* implicit */int) var_4)), (var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_4 [10] [8ULL] |= ((/* implicit */unsigned int) ((34359738367ULL) + (((/* implicit */unsigned long long int) -1))));
        arr_5 [6] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) ^ (arr_0 [i_0] [i_0])))) ? ((~(arr_1 [(_Bool)1]))) : ((-(18446744039349813249ULL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */unsigned char) ((int) ((signed char) 2097152)));
                    var_18 = ((/* implicit */unsigned int) arr_8 [(unsigned short)4] [i_0] [i_1] [i_1]);
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (((((/* implicit */int) arr_3 [i_0])) << (((((/* implicit */int) arr_6 [i_0])) - (121))))) : (((/* implicit */int) arr_3 [i_0 + 1]))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_8 [(unsigned short)0] [(_Bool)1] [i_0] [i_0]) : (((/* implicit */int) arr_6 [10U])))) + (2147483647))) >> (((/* implicit */int) arr_2 [i_0 - 2])))))));
    }
}
