/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158879
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-19)))))));
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (arr_0 [11]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(signed char)2] [i_0])))))) != (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 2])) : (arr_1 [i_0 - 2]))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) / (arr_2 [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0 - 2]) != (arr_2 [i_0 - 2]))))) : (((long long int) arr_2 [i_0 - 2])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)8)) ? ((((!(((/* implicit */_Bool) var_7)))) ? (max((13659088596842786754ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)42005)))))))) : (((((/* implicit */_Bool) max((var_0), ((unsigned char)0)))) ? ((~(13659088596842786776ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
}
