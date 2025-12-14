/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179248
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
    var_15 = ((/* implicit */unsigned int) (signed char)-117);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [(_Bool)1] [15U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_14))))) ? (max((((/* implicit */long long int) ((short) 11560037779889910170ULL))), (6684094779100241577LL))) : (((/* implicit */long long int) 3034442932U))));
        arr_4 [i_0] [(_Bool)1] = ((((/* implicit */_Bool) -212209534)) ? (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)32754)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (212209534) : (arr_2 [i_0]))))) : (max((((/* implicit */int) max((var_7), (var_0)))), (min((arr_2 [i_0]), (arr_0 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_16 = arr_6 [i_1];
        arr_7 [i_1] = ((/* implicit */signed char) arr_2 [i_1]);
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [16U]))))) << (((arr_2 [i_1]) - (1311409357)))));
        arr_8 [(short)11] [(short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_1])) / (((((/* implicit */_Bool) 3272784547U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8935141660703064064ULL)))))) ? ((-(max((((/* implicit */long long int) var_0)), (arr_5 [i_1] [i_1]))))) : (((/* implicit */long long int) max((min((arr_2 [i_1]), (((/* implicit */int) (short)4094)))), (((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)15079)))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        arr_11 [21LL] = ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (1613572551426442264LL) : (((/* implicit */long long int) var_4)));
        arr_12 [i_2 - 1] [i_2 - 2] = ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_2)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_9)) : (arr_9 [16U])));
        var_19 = ((((/* implicit */_Bool) 188707190U)) ? (arr_10 [i_2 - 2]) : (arr_10 [i_2 - 1]));
        arr_13 [i_2] = ((/* implicit */short) var_13);
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_8)));
}
