/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170192
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)13] [(signed char)13] [(_Bool)1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [3LL] [8ULL]))));
                arr_6 [1ULL] [4ULL] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)43)), (var_2)))), (((arr_2 [0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((unsigned char) ((0U) >> (((var_9) - (379957994U)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_11), ((-(var_11)))));
    var_15 = ((/* implicit */unsigned char) max(((signed char)-44), ((signed char)-2)));
    var_16 = ((/* implicit */int) min((max((((var_7) | (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) < (var_8)))))), (max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)125))))), (((((/* implicit */_Bool) (signed char)17)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
