/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151592
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 1207964317U))) ? (max((((((/* implicit */_Bool) 3648332910523862801LL)) ? (-3648332910523862799LL) : (((/* implicit */long long int) arr_6 [i_0 + 2] [i_1] [i_2])))), (((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    arr_7 [i_0] [i_1] [(signed char)7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [(unsigned short)10])))))) - ((+(4294967295U)))));
                    arr_8 [i_1] [i_2] = ((/* implicit */long long int) max((1ULL), (((/* implicit */unsigned long long int) 1207964339U))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) 1207964323U);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((var_6) % (3087002977U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */int) var_4)))))))) : (3648332910523862783LL)));
}
