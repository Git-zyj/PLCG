/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101614
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
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46033)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_15))))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    arr_11 [i_1] [1U] = ((/* implicit */unsigned short) arr_8 [i_0]);
                    arr_12 [(_Bool)1] [i_1] [i_2] = max(((-(((/* implicit */int) arr_5 [i_0] [1LL])))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 3])) != (((/* implicit */int) arr_2 [i_2 - 3]))))));
                    var_19 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) max((arr_8 [i_1]), (arr_9 [i_0] [i_0] [2] [i_0])))), (((((/* implicit */_Bool) arr_5 [i_1] [8LL])) ? (17126343103098546196ULL) : (arr_7 [i_1] [i_2]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1]) && (((/* implicit */_Bool) max((0), (((/* implicit */int) arr_8 [i_0])))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) var_10)), (var_4)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))) : (((unsigned long long int) 4570925268725317237ULL))));
}
