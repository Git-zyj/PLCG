/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118217
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (var_3)))) ? (min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_3)))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) (unsigned char)236)) << (((var_0) - (11899458276131638926ULL)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))), (((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) / (max((((/* implicit */long long int) (_Bool)1)), (-5699932747227263381LL)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) (signed char)114);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((+(((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) (unsigned char)20)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((int) var_9));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                arr_12 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (unsigned short)37381);
                var_18 &= ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1 - 2]))));
            }
        }
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26113)) ? (((/* implicit */int) (short)10967)) : (((/* implicit */int) (_Bool)0))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (unsigned char)3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9))))) : (((((/* implicit */int) (short)10966)) << (((/* implicit */int) (unsigned char)15)))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((min((var_8), (((/* implicit */unsigned long long int) var_11)))) >> (((((/* implicit */int) var_6)) - (134))))) : (var_8)));
    var_21 = ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1))))) <= ((+(18446744073709551615ULL))))))));
}
