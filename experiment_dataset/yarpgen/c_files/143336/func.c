/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143336
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) ^ (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(3756005586U)))))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_17 -= ((/* implicit */short) arr_5 [10ULL]);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (short)5517)))))));
    }
    for (short i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_15 [i_3] [i_3] [i_4] &= ((/* implicit */short) (!((!(((/* implicit */_Bool) max((arr_8 [i_4]), (((/* implicit */unsigned short) (short)31744)))))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)9530)))))) ? (((/* implicit */unsigned long long int) min((arr_17 [i_2] [i_2 + 1] [i_2 + 1] [(signed char)4] [i_2]), (((/* implicit */int) arr_8 [i_2]))))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (8378902462408490124ULL))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_1 [i_3] [i_3])))))))));
                        arr_19 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((2284108373U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_2])))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-79))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65535))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 22; i_6 += 2) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)25)) << (((/* implicit */int) (signed char)5))));
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_6 + 1]))));
    }
    var_24 = (~(var_6));
}
