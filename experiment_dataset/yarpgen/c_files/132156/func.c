/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132156
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) var_0);
                    var_15 = ((/* implicit */unsigned int) max((((short) max((var_8), (((/* implicit */unsigned long long int) arr_0 [i_2 - 1]))))), (((/* implicit */short) min(((_Bool)0), ((_Bool)0))))));
                    arr_7 [i_2 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(signed char)5])) ? (var_9) : (arr_6 [i_2] [i_2 - 2] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((1666037985U), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)29882)) : (((/* implicit */int) (unsigned short)43883)))))))))));
                    arr_8 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (_Bool)0))));
                    arr_9 [i_0] [i_0] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_0))))))))) <= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_6 [i_0] [(unsigned short)15] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_16 |= (+(((/* implicit */int) (_Bool)1)));
    var_17 = ((/* implicit */short) var_11);
}
