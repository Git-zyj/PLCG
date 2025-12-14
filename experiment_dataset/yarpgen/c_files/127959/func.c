/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127959
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63533))) >= (var_8))))) ^ (3280954363U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3280954363U)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [8])))) && (((/* implicit */_Bool) ((unsigned char) 3280954387U)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3280954363U)))))));
                    var_22 = var_3;
                    arr_8 [i_0] [i_0] [2U] = ((unsigned int) var_3);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) > (((3280954384U) + (((/* implicit */unsigned int) ((/* implicit */int) ((1014012936U) < (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))));
}
