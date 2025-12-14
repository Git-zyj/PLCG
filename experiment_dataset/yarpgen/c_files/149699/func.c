/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149699
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)19)))))));
    var_11 = ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)109)))), (((int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((int) ((((/* implicit */_Bool) (signed char)-34)) ? (2080768) : (8)));
                    arr_9 [i_0] [i_1] [10LL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_6 [15] [i_2] [i_2 - 4])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_6 [i_2] [i_2 - 2] [i_2 - 2])))), (((/* implicit */int) max((arr_6 [i_2] [i_2] [i_2 - 1]), (arr_6 [i_2] [i_2] [i_2 + 1]))))));
                    arr_10 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) var_8);
                    arr_11 [i_2] [i_2] [i_2] |= ((((/* implicit */_Bool) min((max((var_9), (((/* implicit */long long int) (signed char)-109)))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_9)))))) ? (max((arr_4 [i_2 + 2] [i_2 - 2] [i_2]), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_5)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_4))))), ((~(((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
}
