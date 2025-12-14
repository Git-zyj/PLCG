/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100475
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-5670)))))) : (min((var_8), (((/* implicit */unsigned int) var_3)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1412023349)) ? (((/* implicit */int) arr_0 [(unsigned char)1])) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)206))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(_Bool)0] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2 + 2] [i_1 + 1] [i_1 + 3]))))) ? (((/* implicit */int) max((arr_3 [i_2 + 2] [i_1 + 3] [i_1 + 3]), (var_14)))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 1] [i_1 - 1])) ? (var_9) : (((/* implicit */int) arr_3 [i_2 - 1] [i_1 + 3] [i_1 + 2]))))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_3 [13] [i_0] [i_0])) ? (arr_4 [i_0] [(unsigned char)10] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1405493504)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (max((((var_2) & (arr_4 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((unsigned char) arr_4 [0ULL] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        arr_10 [i_3] |= ((/* implicit */unsigned char) arr_8 [i_3] [i_3]);
        var_18 = ((/* implicit */long long int) min((var_18), (((long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1405493504))))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_8 [i_3 - 2] [2U]) : (arr_4 [i_3] [i_3] [i_3] [i_3]))))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((unsigned short) arr_8 [17U] [i_3 + 1]))) ? ((~(arr_8 [i_3] [i_3 - 2]))) : (((arr_8 [(unsigned char)2] [i_3 - 2]) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_20 = ((/* implicit */_Bool) arr_5 [i_3 - 1]);
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((var_9), (var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2)))))))) || (((/* implicit */_Bool) var_8))));
}
