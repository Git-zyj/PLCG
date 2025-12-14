/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108225
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
    var_14 = min((((/* implicit */unsigned long long int) var_0)), (var_6));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        arr_5 [10LL] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((962910994), (((/* implicit */int) (_Bool)1))))) && (((arr_2 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (short)-26653))))))) ? (((/* implicit */int) var_1)) : (arr_1 [(_Bool)1] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((((/* implicit */int) (_Bool)1)) / ((-(arr_1 [0] [0]))))) : (((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [12])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1])))), (var_13))))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_2]));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_1 [0] [0]) : (arr_8 [i_2])))) <= ((~(arr_3 [i_2] [i_2])))));
        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [(short)4] = ((/* implicit */int) (~((-(var_7)))));
        arr_19 [i_3] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_6 [i_3])) + (3807434358903880514ULL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 7522166971410577942LL)) < (var_11))))));
    }
    var_17 ^= ((unsigned short) (-(var_4)));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (((((-(var_9))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_3)) : (var_7))))) & (var_7))))));
}
