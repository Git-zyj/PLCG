/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146346
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
    var_12 = ((/* implicit */unsigned int) ((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_3))))) : (var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((unsigned int) var_9)))) ? (((/* implicit */unsigned long long int) ((min((2147483645), (arr_0 [i_0]))) << (((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)22))))))) : (min((((/* implicit */unsigned long long int) (~(arr_1 [i_1] [(signed char)17])))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(short)1] [i_1]))) : (arr_2 [i_0] [i_1])))))));
                arr_5 [(_Bool)1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_1 [i_1] [i_1]), (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) ^ (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_2 [i_1] [i_0]))) ^ (((arr_2 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528)))))))));
                arr_6 [2U] = 31ULL;
            }
        } 
    } 
}
