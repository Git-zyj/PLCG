/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187847
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_1 [i_1 - 3] [i_1 - 4]) + (9223372036854775807LL))) << (((((arr_1 [i_1 - 2] [i_1 + 2]) + (103881132315159065LL))) - (46LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 7U)) != (arr_1 [i_1 - 3] [i_1 - 2]))))) : (((((/* implicit */_Bool) 1048064U)) ? (arr_1 [i_1 + 1] [i_1 - 4]) : (((/* implicit */long long int) 565233276))))));
                var_17 -= ((/* implicit */long long int) (unsigned char)65);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_12 [i_2] [i_2] = (~(351772040));
            var_18 &= ((/* implicit */short) ((long long int) arr_8 [i_2]));
            arr_13 [i_3] [(short)7] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2906811180U)))))));
        }
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)249))));
    }
    var_20 = ((/* implicit */int) ((signed char) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 7484223009021158678LL)))))));
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((117440512), (((/* implicit */int) (signed char)-63))))))) ? (((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) >> (((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned char)199)) : (((((/* implicit */int) (unsigned char)158)) / (-579069894))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))));
}
