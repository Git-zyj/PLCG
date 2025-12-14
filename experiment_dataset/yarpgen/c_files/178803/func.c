/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178803
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
    var_17 *= ((/* implicit */unsigned char) var_16);
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_1 [i_0] [18])) << (((/* implicit */int) arr_1 [(signed char)4] [(signed char)4]))))))));
        var_20 *= ((/* implicit */unsigned long long int) ((_Bool) (-(var_15))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = (+(arr_3 [i_2 - 1] [i_2 - 1]));
            var_21 = ((/* implicit */unsigned long long int) (-(1883879354)));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_7))));
            arr_11 [i_3] = ((/* implicit */_Bool) var_2);
        }
    }
    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        var_23 = ((/* implicit */long long int) (((-(max((((/* implicit */int) (_Bool)1)), (-1883879355))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 - 2])))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_12 [i_4]))));
    }
}
