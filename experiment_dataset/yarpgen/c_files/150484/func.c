/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150484
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
    var_10 += ((unsigned short) (short)13673);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 253952LL))))) : (((/* implicit */int) ((signed char) var_1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 2])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2 - 2])) : (((/* implicit */int) (_Bool)0)))) : (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), (arr_6 [i_0] [i_1] [i_2] [i_2])))), (((((/* implicit */_Bool) 2670272248337515932LL)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_0] [(_Bool)0] [i_1] [i_2]))))))));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = arr_7 [i_0];
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (_Bool)0)))));
}
