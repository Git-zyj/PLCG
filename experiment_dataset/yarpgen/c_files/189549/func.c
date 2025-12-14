/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189549
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned short) var_1);
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */int) arr_1 [i_0 + 2]);
        arr_3 [i_0] = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(signed char)14] [i_0])) <= (((/* implicit */int) (unsigned short)24021))))), (arr_1 [i_0 - 2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1 - 1] [i_1] = ((unsigned short) (unsigned short)62817);
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1]))) > (arr_7 [i_1])))) <= (((/* implicit */int) var_11))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2 - 2] [i_2 - 2])) + (((/* implicit */int) arr_5 [i_3] [i_1 + 2]))));
                arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [(signed char)13] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) (unsigned short)62817)))))));
            }
            arr_16 [i_1] = ((/* implicit */_Bool) (+((-(2091802592)))));
            arr_17 [i_1] [i_2 - 4] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1 + 1])) >= (((/* implicit */int) arr_10 [i_1 + 1]))));
        }
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_22 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))));
            arr_23 [i_1] = ((/* implicit */short) arr_0 [i_4] [i_4]);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_1 - 1])) - (((/* implicit */int) ((unsigned char) var_13)))));
            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((long long int) (short)-4170)) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned short)7)))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_0 [i_1] [i_1]))));
        }
        arr_24 [i_1] = ((/* implicit */unsigned short) var_15);
    }
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5])))))) > (min((((/* implicit */long long int) var_3)), (var_6)))))), (var_10)));
        arr_28 [i_5] = ((/* implicit */unsigned short) (-(var_6)));
        var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) min((((/* implicit */int) (_Bool)1)), (arr_27 [(signed char)12])))))));
    }
    var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_14)))))))));
}
