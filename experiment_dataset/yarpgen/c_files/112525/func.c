/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112525
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
    var_19 = var_4;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [7])), ((unsigned short)52524)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5024460023038807012ULL)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_18)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0]), (arr_3 [(signed char)6] [i_2] [(signed char)6])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)-6818)))))), (((/* implicit */int) ((signed char) (-(arr_7 [5] [i_2] [i_1] [i_0])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_15)))));
                            var_22 = arr_3 [i_0 + 1] [i_1] [i_2 + 1];
                        }
                        arr_13 [2U] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_2] [i_2] [6LL] [5U]);
                        var_23 ^= arr_6 [i_3] [1] [i_3];
                        var_24 = arr_9 [i_0] [i_1] [9U] [9U];
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)60040)) ? (var_2) : (((((/* implicit */int) (short)14240)) / (((var_9) ? (((/* implicit */int) (short)-2)) : (var_2)))))));
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_7))));
}
