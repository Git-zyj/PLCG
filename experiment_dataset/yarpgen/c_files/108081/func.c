/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108081
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((166097603805705032ULL), (((/* implicit */unsigned long long int) (unsigned char)243)))))) ? (((/* implicit */long long int) 1073479680U)) : ((+(arr_3 [(_Bool)1] [(_Bool)1])))));
                var_16 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (arr_3 [(signed char)20] [(signed char)20]))) > (((/* implicit */long long int) max((3221487616U), (2400396512U)))))) ? (((6974075157095595098ULL) << (((arr_3 [(signed char)12] [i_1]) - (6404103488980595164LL))))) : ((-(arr_4 [i_0 + 1] [4LL])))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */long long int) ((3475353264122752758ULL) * (((/* implicit */unsigned long long int) -218544515))));
    var_18 = ((/* implicit */long long int) var_12);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (short)4166)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) var_4)), (-5735517978501119334LL)))))));
}
