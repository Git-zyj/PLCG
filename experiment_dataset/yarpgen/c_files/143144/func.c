/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143144
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
    var_20 ^= ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) 65408)) : (var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 *= (!(((((arr_2 [i_0] [i_0]) || (((/* implicit */_Bool) 66584576U)))) || (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)28596)))))));
                    var_22 = ((/* implicit */long long int) ((min((arr_3 [i_0]), (arr_3 [i_0]))) << (((((((/* implicit */_Bool) var_19)) ? (arr_3 [i_0]) : (arr_3 [i_2]))) - (6746428176426805161ULL)))));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)120)) && (((/* implicit */_Bool) var_15))))) - (((/* implicit */int) arr_2 [i_2] [(short)3])))))));
                    arr_8 [i_0] [9U] [i_1] [i_2] = ((/* implicit */long long int) 8764696694917994526ULL);
                }
            } 
        } 
    } 
}
