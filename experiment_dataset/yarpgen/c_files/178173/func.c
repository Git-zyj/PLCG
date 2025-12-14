/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178173
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
    var_19 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2 + 1] = max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-6417))))), (((((/* implicit */_Bool) max((131071), (((/* implicit */int) (unsigned short)6774))))) ? (min((arr_3 [i_0] [i_0]), (1785535889U))) : (2509431407U))));
                    var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(1067837281))))))) - (((/* implicit */int) max(((unsigned short)49631), (((/* implicit */unsigned short) arr_1 [i_0 + 1]))))));
                    var_21 *= ((/* implicit */int) arr_2 [i_1] [i_1 + 1]);
                }
            } 
        } 
    } 
}
