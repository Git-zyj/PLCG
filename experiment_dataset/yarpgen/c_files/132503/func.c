/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132503
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), (var_7)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) var_2)), (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) == (((/* implicit */unsigned long long int) var_0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_2 [i_0])), (max((((/* implicit */short) arr_0 [i_0])), (var_9))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (var_2)))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) var_4)))))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))), (((/* implicit */unsigned short) min((var_8), (((/* implicit */short) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [10] [i_1] = ((/* implicit */signed char) var_6);
        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [11ULL] [i_1]))));
        var_16 += ((/* implicit */unsigned long long int) var_0);
    }
    for (short i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_10 [i_2 - 2])) - (((/* implicit */int) arr_10 [i_2])))) & (((/* implicit */int) arr_10 [i_2 - 1])))) << (((/* implicit */int) min((arr_9 [i_2 + 1]), (arr_9 [i_2 + 1])))))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1])))))) - (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_8)), (var_10)))))));
        arr_11 [8U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) arr_10 [i_2]))))) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2])) : (((/* implicit */int) var_2)))), (((((((/* implicit */int) var_2)) * (((/* implicit */int) var_9)))) ^ (((/* implicit */int) max((arr_10 [(unsigned short)0]), (((/* implicit */unsigned short) var_8)))))))));
        var_19 = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_4))))))));
    }
    var_20 = ((/* implicit */unsigned char) var_3);
}
