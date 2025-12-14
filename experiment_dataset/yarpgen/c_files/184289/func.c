/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184289
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
    var_11 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) >> (((3758096384U) - (3758096347U))))))))));
    var_12 |= ((((/* implicit */_Bool) var_3)) ? (max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 4294967295U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_13 *= ((((/* implicit */_Bool) ((unsigned int) (signed char)-17))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 1])))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))) - (((var_10) | (((/* implicit */long long int) 2147481600)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            arr_4 [16U] [16U] = ((/* implicit */int) ((((/* implicit */long long int) (~(arr_0 [i_0] [i_1])))) * ((~(10LL)))));
            var_14 = ((/* implicit */unsigned int) 2147481600);
            arr_5 [i_0] = ((/* implicit */long long int) (+(((arr_2 [i_0 + 1] [i_1 + 1]) << (((arr_2 [i_0 - 1] [i_1 - 1]) - (3798177642U)))))));
        }
        var_15 = ((/* implicit */int) arr_1 [i_0] [i_0 + 1]);
        arr_6 [i_0] = ((/* implicit */signed char) ((max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))) << (((((min(((-2147483647 - 1)), (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))) - (-2147483627))) + (27)))));
    }
}
