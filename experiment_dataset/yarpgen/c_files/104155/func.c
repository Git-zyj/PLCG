/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104155
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
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_1)), (var_8))), (((/* implicit */unsigned long long int) (~(var_0)))))))));
        arr_4 [i_0] = (~((~(((/* implicit */int) min((var_3), (var_3)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_10 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) max((var_0), (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : ((~(var_8)))));
        var_12 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (min((var_7), (((/* implicit */unsigned long long int) var_1)))))), (max((max((var_7), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    }
    var_13 *= ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) min((var_5), (var_4)))))), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (max((var_0), (((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) var_8);
        arr_10 [i_2] [14] &= ((/* implicit */long long int) (+((~((~(((/* implicit */int) var_5))))))));
        arr_11 [(signed char)4] [(signed char)4] |= ((/* implicit */unsigned char) var_4);
        var_14 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_3))))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) var_4);
            var_16 = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) min(((~(var_0))), ((~(((/* implicit */int) var_4)))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_17 = ((/* implicit */int) min((((/* implicit */long long int) var_1)), ((~((~(var_2)))))));
            var_18 = ((/* implicit */long long int) (~((~(max((var_8), (((/* implicit */unsigned long long int) var_3))))))));
            var_19 ^= ((/* implicit */short) min((min(((+(var_6))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))), (((/* implicit */long long int) var_5))));
        }
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_7)))) ? ((+(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_9))))))));
        arr_21 [i_5] = ((/* implicit */int) min((min((max((((/* implicit */long long int) var_0)), (var_2))), (var_6))), (var_6)));
    }
}
