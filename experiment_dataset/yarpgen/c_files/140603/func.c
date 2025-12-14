/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140603
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */int) ((short) (unsigned char)128))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [(unsigned short)4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_2 [i_0]))))))))))));
            arr_7 [i_1] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)8])) : (((/* implicit */int) var_8))))))));
        }
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 1022428505)) ? (((/* implicit */int) (short)27493)) : (-1351816692))) : (-1351816692)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)12687))) | (50331648U))))))));
    }
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) ((short) var_7)))))) + (((long long int) var_5))));
    var_15 = ((/* implicit */signed char) var_1);
    var_16 = ((/* implicit */long long int) max((var_16), (((((var_1) >> ((((~(((/* implicit */int) (unsigned char)127)))) + (144))))) << (((((-1268399551) + (1268399579))) - (21)))))));
    var_17 = var_1;
}
