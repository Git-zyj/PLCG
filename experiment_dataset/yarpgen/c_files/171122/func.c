/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171122
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
    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (short)18275)) : (2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) : (3775809736576158817LL)))) ? ((~(1668219920))) : (((((((/* implicit */_Bool) -1668219920)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) | (max((var_8), (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_1 [i_0])), (max((((/* implicit */long long int) ((-1668219935) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [10] [i_1])))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (arr_6 [i_0 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26)))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (min((arr_2 [i_0]), (((/* implicit */long long int) -1668219955)))) : (((-2089484309417984714LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0 - 3]))))))) : (((((/* implicit */_Bool) arr_6 [i_0 - 4])) ? (arr_2 [i_0 + 4]) : (((/* implicit */long long int) arr_6 [i_0 + 2]))))));
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1])))))) ^ (((arr_6 [i_0]) & (arr_5 [i_0 + 2] [i_1]))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-14))))), (arr_5 [(signed char)16] [i_0])))) && (((/* implicit */_Bool) (signed char)14))));
                arr_8 [i_0] [i_1] = min((max((arr_3 [i_0] [i_0 - 4] [i_0 - 1]), (arr_3 [i_0] [i_0 - 3] [i_0 + 4]))), (((/* implicit */long long int) ((int) arr_3 [i_0] [i_0 - 4] [i_0 - 1]))));
            }
        } 
    } 
    var_20 = -1668219920;
}
