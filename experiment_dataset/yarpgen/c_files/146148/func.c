/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146148
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
    var_18 = ((/* implicit */short) var_3);
    var_19 = ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (12466635711618027998ULL)));
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((var_15) - (3190922248U)))))) != ((~(var_15)))))) >> (((var_11) - (1861112035U)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */unsigned long long int) ((int) arr_0 [(_Bool)1] [i_0 - 3]));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)156)))) ^ ((~(11362007970668771775ULL)))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_1]));
        var_23 = arr_2 [i_1];
        arr_8 [i_1] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) 3815711475U)) : (arr_1 [i_1] [i_1]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
    }
}
