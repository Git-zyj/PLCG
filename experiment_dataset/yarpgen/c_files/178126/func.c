/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178126
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
    for (int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0 + 1]))) ? (((/* implicit */unsigned long long int) ((int) arr_4 [i_0 - 2]))) : (((arr_2 [i_0 + 1]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 - 3])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_12 = ((/* implicit */long long int) 10451116647961912435ULL);
                    var_13 ^= 0;
                }
                var_14 = ((/* implicit */signed char) var_5);
                arr_10 [i_1] [i_0] [19ULL] = ((/* implicit */int) ((unsigned long long int) ((int) arr_9 [i_1 + 2])));
                arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1 + 2]))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (((((/* implicit */_Bool) 12575667848867121027ULL)) ? (7995627425747639180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) : (((((/* implicit */_Bool) (~(7995627425747639181ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (1048214133U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))) : (((((/* implicit */unsigned long long int) 3887665644U)) - (arr_4 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_5);
}
