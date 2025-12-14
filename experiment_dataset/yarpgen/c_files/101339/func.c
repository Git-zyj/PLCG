/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101339
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
    var_15 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4469821189863107951LL))) + (108LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) var_0)) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_3 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(arr_1 [i_0])));
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_17 = 4469821189863107951LL;
        arr_9 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) (short)-13101)), (((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_4)))) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) var_9))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-13073))))));
                arr_17 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) max(((~(arr_1 [i_2]))), (((unsigned long long int) arr_1 [i_2]))));
                arr_18 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [i_3] [11ULL]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-29018)))))))) ? (max((arr_8 [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_3])))) : (((/* implicit */unsigned long long int) ((arr_5 [i_2]) | (arr_5 [i_3]))))));
            }
        } 
    } 
}
