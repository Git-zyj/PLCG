/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13030
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
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) min((min((((/* implicit */signed char) ((_Bool) 8539348563956156736ULL))), (arr_0 [i_0]))), (((/* implicit */signed char) var_0))));
        var_12 = ((/* implicit */long long int) (short)4601);
    }
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) -320055139))));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (long long int i_2 = 4; i_2 < 13; i_2 += 4) 
        {
            {
                var_14 = (~(((/* implicit */int) (_Bool)1)));
                var_15 = ((((/* implicit */_Bool) max((arr_2 [i_2 - 4]), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((unsigned int) -320055139)));
                arr_6 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) (_Bool)1))), (min((((((/* implicit */_Bool) 3024240822U)) ? (((/* implicit */int) (unsigned short)38664)) : (((/* implicit */int) (short)24698)))), ((~(-1138594326)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_4);
}
