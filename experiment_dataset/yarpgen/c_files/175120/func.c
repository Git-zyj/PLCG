/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175120
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((int) ((unsigned long long int) arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (~(((/* implicit */int) ((_Bool) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_1 [i_1] [i_1]))) ? (((/* implicit */int) min((arr_1 [18U] [i_1]), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) ((_Bool) var_2)))))) != (max((((/* implicit */unsigned int) (_Bool)0)), (3471892458U)))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_1])))))));
            var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_6 [i_2])))) % ((-(((/* implicit */int) arr_6 [i_1])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                var_16 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) || (((/* implicit */_Bool) var_5)))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_0))));
            }
        }
        var_18 = ((/* implicit */unsigned char) ((short) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (3ULL))) ^ (18446744073709551612ULL))));
        var_19 |= ((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned short) arr_4 [i_1]))))) << (min((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_11)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 0)) ^ (arr_9 [i_4] [i_4] [i_4] [i_4]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_4] [i_4] [i_4] [i_4]))) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_8)))))));
        var_21 = ((/* implicit */int) arr_6 [i_4]);
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */int) min((var_0), (var_8)))) / ((+(((/* implicit */int) (unsigned short)35328))))))))))));
}
