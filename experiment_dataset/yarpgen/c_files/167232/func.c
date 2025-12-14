/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167232
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
    var_15 = ((/* implicit */unsigned short) (short)11158);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_5)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) arr_8 [i_0] [(signed char)2] [i_2]);
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (signed char)90)) : (1073741824)));
                    arr_10 [i_0] [i_0] [0ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1]))));
                    arr_11 [i_0] [(unsigned short)10] = ((/* implicit */unsigned int) (signed char)83);
                    arr_12 [i_1 + 1] [(signed char)5] = arr_8 [i_2] [i_1 + 1] [i_1 + 1];
                }
            } 
        } 
        var_17 *= ((/* implicit */_Bool) -1811690274);
        var_18 = ((((/* implicit */_Bool) (signed char)-85)) ? (var_1) : (((/* implicit */unsigned long long int) -1073741833)));
    }
}
