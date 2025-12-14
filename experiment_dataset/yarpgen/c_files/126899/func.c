/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126899
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [8U] &= ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (signed char)90)))) | ((~(((/* implicit */int) (signed char)47)))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) (unsigned short)15816)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
        arr_4 [i_0] = ((/* implicit */short) ((arr_0 [i_0]) > ((+(((/* implicit */int) (signed char)-33))))));
        var_17 = ((/* implicit */unsigned int) max((min((var_3), (((/* implicit */long long int) arr_1 [i_0] [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) < (((/* implicit */int) (unsigned short)44971))))))))));
    }
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)100))));
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)20565))));
    var_20 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 492581209243648ULL)) ? (((/* implicit */int) (unsigned short)15816)) : (((/* implicit */int) (short)-11205)))))));
}
