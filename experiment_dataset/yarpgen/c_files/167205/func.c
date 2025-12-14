/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167205
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_0]));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) 578955708U)) ? (((/* implicit */unsigned int) var_7)) : (var_1))) : (3205377500U)));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_10 [i_1 - 1] [i_2] = ((/* implicit */long long int) arr_4 [i_1] [i_2]);
            var_12 = ((/* implicit */short) ((unsigned long long int) 7368565647394791185ULL));
        }
        arr_11 [i_1] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 - 2])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2]))))) ^ (3205377502U)));
        var_13 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_9)) ? (var_1) : (1089589793U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27550)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12438)))));
        arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)38769)) : (((/* implicit */int) (unsigned char)124)))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)16842)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_0 [i_1 + 1]))))))))));
        arr_13 [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1] [i_1 + 1]) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_5 [i_1])))) / (arr_7 [i_1] [i_1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (1089589793U)))))));
    }
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) % (3205377494U))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
