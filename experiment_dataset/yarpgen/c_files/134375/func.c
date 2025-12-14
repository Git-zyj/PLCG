/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134375
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_5)) < (var_7)));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */unsigned int) max((var_3), (((/* implicit */int) (unsigned short)43261))))) > (1561530106U)))) : (max((((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), ((~(((/* implicit */int) var_10))))))));
    var_14 &= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        arr_2 [(signed char)10] &= ((/* implicit */int) ((_Bool) (unsigned short)26));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) < (arr_1 [i_0])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1561530106U)))))) ? (((((/* implicit */_Bool) var_7)) ? (2733437189U) : (2733437208U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0])))) < (((/* implicit */unsigned int) (~(arr_1 [i_0]))))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)43248)), ((-(((/* implicit */int) (unsigned char)253)))))) << (((((/* implicit */int) (unsigned short)43261)) - (43253)))));
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(var_3)))), (arr_0 [i_1] [i_1])));
    }
    var_17 = ((/* implicit */signed char) max(((-(((/* implicit */int) var_4)))), (var_3)));
}
