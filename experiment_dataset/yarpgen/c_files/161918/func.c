/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161918
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)60964)) : (((/* implicit */int) (unsigned short)43030)))) >> (((((((/* implicit */_Bool) 76336340)) ? (-76336340) : (-76336340))) + (76336361))))))));
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((min((var_8), (((((/* implicit */_Bool) var_6)) ? (76336340) : (((/* implicit */int) var_11)))))), ((~(76336339)))));
                    var_18 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)4080)), (-231096805)))) ? ((((-(-231096805))) & ((+(((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) 76336340))) : (((-68324277) + (231096804))))));
                    var_19 = ((/* implicit */int) ((((var_8) / (596087143))) > (min((((/* implicit */int) (unsigned short)0)), (-231096801)))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >> (((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (-565485908)))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 231096804)) ? (-76336340) : (76336339))))) + (76336364)))));
                }
            } 
        } 
    } 
}
