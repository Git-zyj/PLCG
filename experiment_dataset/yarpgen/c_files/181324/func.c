/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181324
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0] [0] [i_2]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [20LL] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_7)));
                        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((~(((arr_3 [i_0]) ? (-749366043) : (var_4))))) : (((/* implicit */int) (_Bool)1))));
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */int) (short)-30442)), (-2091749055)))));
                    }
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_12), (max((3810758481U), (((/* implicit */unsigned int) var_1))))));
    var_13 = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-22144))))) > (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
