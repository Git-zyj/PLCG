/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182437
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
    var_11 = ((/* implicit */short) ((var_1) | (((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? ((~(var_5))) : (min((var_1), (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((min((arr_0 [(unsigned short)0]), (arr_0 [i_0 + 3]))), (arr_1 [(unsigned short)3] [i_0 - 1])))) >= (min((min((var_4), (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_1 [6] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (((/* implicit */int) arr_1 [(short)2] [(short)2]))))))));
        arr_3 [i_0 + 2] [10ULL] = ((/* implicit */signed char) (-(440525793)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) arr_7 [i_2] [i_2 + 2]);
                    arr_9 [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 3]);
                    var_13 = var_5;
                    arr_10 [i_2] [12LL] [i_2 + 3] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [7LL] [6])) ? (((((/* implicit */_Bool) 8143382368889595439LL)) ? (((/* implicit */int) (short)-26837)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_1 [i_1] [i_1])))))))), (((min((arr_4 [i_0] [(short)8] [(unsigned short)7]), (((/* implicit */long long int) 536870911)))) | (arr_8 [i_1 + 1] [6LL] [6LL] [i_0 + 2])))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 4; i_3 < 10; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) arr_4 [(short)3] [3] [7]))), (arr_4 [12LL] [i_3 - 4] [i_3 - 4])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1] [7])))));
        arr_14 [i_3] = (~(min((arr_11 [0LL]), (((/* implicit */long long int) -1852674338)))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_8)), (8622969790860530536LL))) ^ (max((((/* implicit */long long int) (_Bool)1)), (arr_4 [(_Bool)1] [i_3 + 1] [11])))))) ? (((/* implicit */int) arr_1 [(short)0] [i_3 - 4])) : (((((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) 33552384)) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) var_8))))))));
    }
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_1)) >= (var_10)))) + (var_5)))), (((long long int) ((((/* implicit */_Bool) 3042924179299008811ULL)) ? (((/* implicit */int) (short)4505)) : (-1852674338))))));
}
