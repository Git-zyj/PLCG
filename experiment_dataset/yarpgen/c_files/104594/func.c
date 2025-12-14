/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104594
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (var_11))))))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) ((signed char) var_18)))))) : (((/* implicit */int) min(((short)-2576), (((/* implicit */short) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_17)))))))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
            arr_7 [i_1] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 524224)) ? (4294967295U) : (4294967295U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))) <= (((((unsigned int) var_3)) - (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
        }
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_1) / (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((signed char) arr_2 [i_0])))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */short) 0ULL);
    var_23 = ((/* implicit */long long int) ((((((/* implicit */int) ((short) var_18))) | (((/* implicit */int) var_0)))) / (((((((/* implicit */_Bool) -3718025690375676613LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)-2)))))))));
    var_24 = ((/* implicit */unsigned long long int) min((var_8), (130023424LL)));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_7)))))))));
}
