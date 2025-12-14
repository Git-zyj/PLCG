/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113769
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                    var_13 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(signed char)17] [i_1] [i_2])) | (((/* implicit */int) arr_2 [i_0] [10] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) 7723228452271600645LL)) ? (var_10) : (var_3))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_11)))) << (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)110))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_5))))))) : (((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_12)), (695680999518576810ULL))) > (((/* implicit */unsigned long long int) (~(0U))))))), (var_7)));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (~(18446744073709551615ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6)))))) : (223782800U)));
}
