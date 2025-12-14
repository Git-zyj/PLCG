/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105403
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (-(2297913129U)))))));
        var_14 += ((/* implicit */long long int) (signed char)-32);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (short)(-32767 - 1));
        arr_8 [i_1] = ((/* implicit */_Bool) min((arr_6 [i_1 - 1]), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [i_1])) ? (2297913132U) : (((/* implicit */unsigned int) -60602008)))))))));
        var_15 ^= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)20188))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_16 = ((/* implicit */_Bool) arr_6 [i_2]);
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_9 [i_2]))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) var_10))))) >= (((/* implicit */int) (short)-14232)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) + (max((arr_5 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_7))))))));
        var_18 += ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) var_0))));
    }
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((60601996), (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (+(var_9)))))))));
    var_20 ^= ((/* implicit */signed char) var_9);
    var_21 -= ((/* implicit */long long int) var_3);
}
