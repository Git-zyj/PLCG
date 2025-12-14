/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110000
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [20] [i_1] [i_0] = ((/* implicit */signed char) ((max((arr_0 [i_2 + 2] [i_0 - 2]), (((/* implicit */long long int) (unsigned char)30)))) + (min((arr_0 [i_0 - 1] [i_0 - 3]), (arr_0 [i_0 - 1] [i_0 + 1])))));
                    arr_8 [i_2] [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -1LL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_1)))), (var_8))))));
                    arr_9 [i_2] [i_2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned short) var_10);
                    var_14 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_3 [i_0] [i_1] [i_1])))), (((var_3) ^ (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])))))) + (((/* implicit */int) max(((unsigned char)226), (((/* implicit */unsigned char) (signed char)122)))))));
                    arr_10 [i_0] &= max((max((arr_2 [(short)12]), (((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) | (((/* implicit */int) (unsigned char)124))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)19)) - (((/* implicit */int) (unsigned short)54093))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((var_8) | (((/* implicit */unsigned long long int) var_3))));
    var_16 = ((/* implicit */long long int) var_11);
}
