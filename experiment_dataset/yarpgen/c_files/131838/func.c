/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131838
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
    var_20 = ((/* implicit */int) var_4);
    var_21 |= ((/* implicit */int) (_Bool)1);
    var_22 += var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14795)) ? (((/* implicit */int) (short)14788)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)20308)) : (((/* implicit */int) (short)-14805))))), (((unsigned int) (short)-14800))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (short)-14778)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((((/* implicit */short) ((_Bool) (short)-14782))), ((short)-14787)))) : (((/* implicit */int) max(((short)-15834), (((/* implicit */short) (_Bool)1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) -1531601174)) ? (((/* implicit */int) (short)-14805)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((3), (((/* implicit */int) (unsigned short)8959))))) ? (((unsigned int) (short)(-32767 - 1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)14789)))))) : (((/* implicit */unsigned int) max(((((_Bool)1) ? (-392930720) : (1550222797))), (((((/* implicit */_Bool) (short)-32756)) ? (-1550222811) : (20152197))))))));
}
