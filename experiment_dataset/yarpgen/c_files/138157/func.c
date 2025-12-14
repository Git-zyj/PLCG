/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138157
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(((/* implicit */int) max((((unsigned short) 4671100656202006905LL)), (min(((unsigned short)16), ((unsigned short)16)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned char) (unsigned short)9547);
                arr_6 [(unsigned short)15] [(unsigned short)15] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)65520)) : (0)))), (max((((unsigned int) arr_2 [(unsigned short)5])), (((/* implicit */unsigned int) var_11))))));
                arr_7 [i_0] [i_1] [(unsigned short)8] = ((/* implicit */long long int) 0);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65520)))))));
                arr_8 [i_0] = ((/* implicit */short) max((((((((/* implicit */unsigned int) ((/* implicit */int) (short)7))) - (1821156898U))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (425357414)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0)))))));
            }
        } 
    } 
}
