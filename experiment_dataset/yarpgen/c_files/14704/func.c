/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14704
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64735)) ? (((((/* implicit */_Bool) max(((unsigned short)34322), (var_3)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) (unsigned short)35204))))) : (((/* implicit */int) var_12))));
    var_15 &= ((/* implicit */unsigned short) max((((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)10)))) && (((((/* implicit */_Bool) (unsigned short)16384)) && (((/* implicit */_Bool) (unsigned short)42339))))))), ((+(((/* implicit */int) (unsigned short)44252))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((unsigned short) arr_5 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max(((unsigned short)65534), (arr_4 [i_1]))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31222)) % (((/* implicit */int) (unsigned short)7247))))) ? (((/* implicit */int) max((arr_0 [(unsigned short)5]), (arr_4 [i_0])))) : (((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)7] [i_1]))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)31222)) * (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)15))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_6))))))));
}
