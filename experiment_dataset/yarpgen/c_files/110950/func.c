/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110950
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
    var_11 -= var_1;
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
        var_14 = ((/* implicit */signed char) var_7);
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (-473867714668088350LL)));
            arr_5 [6LL] = ((/* implicit */unsigned char) max(((-(((unsigned long long int) arr_4 [i_0 + 1] [(_Bool)1] [i_1 - 1])))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_10)))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) /* same iter space */
            {
                var_16 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_2 [i_0]))))))))) + (var_1)));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)1]);
            }
            for (signed char i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_1] [5])), (var_6)))) ? (((/* implicit */unsigned long long int) var_2)) : (arr_7 [i_0 - 2] [i_1 + 2] [i_3 + 1])))));
                var_18 = ((/* implicit */int) max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_3 - 1]))))))) + (-1LL)))));
                arr_12 [i_0] [i_3] = ((/* implicit */int) ((((long long int) (short)22806)) != (((/* implicit */long long int) (((-2147483647 - 1)) - ((-(((/* implicit */int) var_9)))))))));
                var_19 = ((/* implicit */signed char) ((((unsigned int) var_7)) >> (((/* implicit */int) arr_10 [i_3]))));
                var_20 = ((/* implicit */_Bool) var_8);
            }
            arr_13 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((long long int) arr_7 [i_0] [i_0 - 1] [i_1 + 1])) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_2)))));
        }
        var_21 = ((long long int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((var_3) / (((/* implicit */int) arr_3 [i_0] [1U] [i_0]))))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0 - 1])) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [i_0]))))))) << ((((((~(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])))) + (28))) - (25)))));
    }
}
