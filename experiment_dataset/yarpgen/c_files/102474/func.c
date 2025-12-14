/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102474
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
    var_16 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_17 -= ((/* implicit */short) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))));
                        var_18 = (+((-(((/* implicit */int) var_3)))));
                        var_19 = ((/* implicit */_Bool) (~(((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_6 [i_0] [i_3] [i_3])))));
                    }
                    var_20 = ((/* implicit */_Bool) (~(var_9)));
                    var_21 = ((/* implicit */signed char) var_14);
                    var_22 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [5ULL]);
                }
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_11)))))), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */short) var_0)), (var_3)))))));
                var_25 ^= ((/* implicit */short) ((max((arr_6 [i_4] [i_5] [i_5]), (arr_6 [i_4] [i_4] [i_4]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((signed char)-15), ((signed char)-64)))) >= (((((/* implicit */int) var_15)) + (((/* implicit */int) var_0))))))))));
                var_26 = ((/* implicit */unsigned char) ((short) var_7));
                arr_16 [i_4] [i_4] = ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_5]);
                arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_1 [i_4] [i_5])) : (8240841152987607935LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) <= (var_6)))) : ((-(((/* implicit */int) (signed char)6))))));
            }
        } 
    } 
}
