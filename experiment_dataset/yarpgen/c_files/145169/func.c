/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145169
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) max((var_5), (var_6)))) == (((/* implicit */int) (short)27646))))), (min((((/* implicit */int) min((var_2), (var_2)))), (((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_5)) - (213)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) min((3019976961832952729LL), (((/* implicit */long long int) ((((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)8012))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)1409)) == (((/* implicit */int) arr_4 [i_0])))))))))));
                arr_7 [(unsigned short)1] [i_1] &= ((/* implicit */unsigned short) 2752669766U);
            }
        } 
    } 
}
