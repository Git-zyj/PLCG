/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122908
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_7))));
    var_16 = ((/* implicit */long long int) var_8);
    var_17 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) (unsigned short)65535)))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */int) (unsigned short)5244))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            {
                arr_11 [20LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_2 + 1]), (((/* implicit */long long int) var_6))))) ? (max((arr_10 [i_2 + 4]), (arr_10 [i_2 - 2]))) : (min((arr_10 [i_2 + 4]), (((/* implicit */long long int) var_8))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */int) ((short) (unsigned short)5244))), ((~(((/* implicit */int) (short)-5833)))))))));
            }
        } 
    } 
}
