/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161869
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
    var_20 = var_5;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 -= arr_1 [i_0] [i_1];
                var_22 *= ((/* implicit */_Bool) max((min((max((582446495975345184LL), (((/* implicit */long long int) (unsigned short)65532)))), (((/* implicit */long long int) 19U)))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))))), (((/* implicit */unsigned int) max(((signed char)96), (((/* implicit */signed char) arr_3 [i_0] [i_1] [i_1]))))))))));
                var_23 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]);
                arr_5 [i_0] [i_1] [i_0] |= ((/* implicit */long long int) (unsigned short)16);
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (min((max((var_12), (((/* implicit */long long int) (short)511)))), (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (signed char)27))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)3968)))))));
}
