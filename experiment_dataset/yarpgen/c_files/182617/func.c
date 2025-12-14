/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182617
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */short) (+((~(9223372036854775807LL)))));
                    arr_8 [i_1 - 3] [i_1 - 3] [i_2] = ((((/* implicit */_Bool) var_7)) ? (max(((+(var_6))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) * (var_17))));
                    var_19 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */int) arr_7 [i_1 - 3] [i_1] [i_1] [(signed char)5]))));
                    var_20 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 - 3])), (var_16))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned int) var_5);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned char i_4 = 4; i_4 < 20; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_22 ^= ((/* implicit */int) (+((((_Bool)1) ? (min((((/* implicit */unsigned int) var_1)), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_23 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_3] [i_4 - 1])), (arr_15 [i_4 - 1] [i_5] [i_4 - 3] [i_5]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((short) max((((0ULL) / (var_17))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), (var_11)))))));
    }
    var_25 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_7))))))));
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */unsigned long long int) -1)) : (0ULL))) : (min((((/* implicit */unsigned long long int) var_9)), (4ULL))))))));
}
