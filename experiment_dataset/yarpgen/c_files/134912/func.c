/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134912
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */signed char) (_Bool)1);
                        var_13 *= ((/* implicit */short) arr_5 [i_2] [i_1] [i_2]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)253))))) % (min((var_2), (((/* implicit */unsigned int) max(((short)-6798), ((short)6799))))))));
    }
    var_15 = ((/* implicit */_Bool) var_3);
}
