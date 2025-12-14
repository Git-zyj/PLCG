/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123476
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_0)) + (((min((var_7), (((/* implicit */unsigned int) var_2)))) >> (((var_8) - (2758785229U))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((15968683355765572125ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40)))));
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) arr_1 [i_0 - 3]))))) || (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_5 [i_0] [i_2]);
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_8 [12LL] [i_1 + 2]))));
                    var_13 = min((max((((arr_6 [i_2]) + (arr_6 [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_6 [i_0 + 1]))))))), (max((((/* implicit */unsigned int) 2147483647)), (arr_6 [i_2]))));
                    var_14 = ((/* implicit */signed char) ((((((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_1]))))) | (arr_0 [i_0 + 1] [i_2]))) + (9223372036854775807LL))) >> (((arr_6 [i_1]) - (1374724482U)))));
                    arr_12 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_0] [i_0]))), ((+(min((arr_7 [i_0] [i_0]), (arr_4 [i_0] [i_0])))))));
                }
            } 
        } 
    }
    var_15 = (+(((1878358447) >> (((((/* implicit */int) var_4)) - (39847))))));
}
