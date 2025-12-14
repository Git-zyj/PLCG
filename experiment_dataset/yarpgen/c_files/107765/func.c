/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107765
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned char) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) -2609809246096609629LL)) ? (((/* implicit */int) (unsigned char)187)) : (var_7))))))));
                        var_11 = ((/* implicit */signed char) (((~(((unsigned int) (signed char)15)))) ^ (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)896)) ? (var_7) : (((/* implicit */int) var_1)))))))));
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                    }
                    arr_11 [i_2] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)30153));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */int) var_0)) != (1701368480)));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_1))))) ? (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-5657142497577022777LL)))) : (((long long int) (!(((/* implicit */_Bool) 1593287502U)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((int) 0U))))) ? (1ULL) : (var_2)));
}
