/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103137
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) <= (4611650834055299072ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((arr_4 [i_1 - 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2])))))))))));
                var_20 ^= ((int) ((((/* implicit */_Bool) max((arr_2 [(_Bool)1]), (((/* implicit */long long int) (signed char)-109))))) ? (arr_3 [i_1 - 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                arr_5 [8] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_1 - 1] [(signed char)2]) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1])))))) ? (((arr_0 [i_1 + 4] [6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (17167771270598440476ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 3] [12ULL])))));
            }
        } 
    } 
    var_21 += ((/* implicit */signed char) var_6);
}
