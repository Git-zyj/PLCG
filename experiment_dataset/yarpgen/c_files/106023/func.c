/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106023
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 = (((+(arr_7 [i_0]))) | (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                    var_12 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(arr_7 [i_2])))), (((((var_4) << (((((/* implicit */int) arr_6 [i_2] [i_1] [i_2])) - (73))))) ^ (max((arr_8 [i_2]), (((/* implicit */long long int) (signed char)29))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) 17425421142465910136ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_14 ^= ((/* implicit */long long int) var_6);
    var_15 ^= ((/* implicit */signed char) ((_Bool) (unsigned short)39123));
}
