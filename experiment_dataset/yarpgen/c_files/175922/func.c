/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175922
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    var_11 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_8 [i_0] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)251)), ((unsigned short)697)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)20)) >= (((/* implicit */int) (unsigned char)4))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1])), (arr_2 [(signed char)10]))))))));
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned int) min((max((((/* implicit */unsigned int) arr_4 [i_0])), (4294967285U))), (((/* implicit */unsigned int) var_4))))))));
                var_13 = ((/* implicit */unsigned char) 2901184170U);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((14U) + (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((((/* implicit */int) (unsigned char)167)) ^ (((/* implicit */int) var_5)))))))));
}
