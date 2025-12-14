/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125505
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (18446744073709551615ULL))) ? (max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_13))))))) : ((~(((/* implicit */int) var_13))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) var_7);
        var_16 = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_17 = ((/* implicit */long long int) var_4);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned char)6))));
            var_19 = ((/* implicit */long long int) arr_7 [i_1]);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) ^ (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_12)) : (var_2)))))))));
            var_21 = ((((/* implicit */int) arr_10 [i_1])) | (((/* implicit */int) arr_9 [i_3])));
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (unsigned char)247))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            var_23 = ((/* implicit */signed char) var_1);
            var_24 = (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) arr_3 [i_4])) : (arr_11 [i_4 + 1]))));
        }
        var_25 = ((/* implicit */unsigned long long int) arr_1 [15ULL] [15ULL]);
    }
    var_26 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    var_27 = ((/* implicit */long long int) (+((-(((((/* implicit */int) var_13)) * (((/* implicit */int) (short)-21664))))))));
}
