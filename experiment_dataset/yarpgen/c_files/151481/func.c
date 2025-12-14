/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151481
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((6139354188434535725LL), (((/* implicit */long long int) var_1)))))));
    var_14 = ((/* implicit */unsigned int) var_4);
    var_15 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 845711969U)) ? (((/* implicit */int) (short)5)) : (((((/* implicit */_Bool) (unsigned short)65531)) ? (2036151749) : (((/* implicit */int) (signed char)21)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */long long int) min((var_6), (min((((((/* implicit */_Bool) (unsigned char)241)) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))), (max((((/* implicit */unsigned int) 1393849837)), (arr_5 [i_2] [i_1] [i_0] [i_0 - 1])))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) ((max((6139354188434535744LL), (((/* implicit */long long int) 779510423U)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_2])) ? (1798025421) : (((/* implicit */int) arr_1 [i_0] [i_2 + 2]))))))))));
                    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_7 [i_2 - 1] [i_2] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50))))) % (var_1))), (((/* implicit */int) var_11))));
}
