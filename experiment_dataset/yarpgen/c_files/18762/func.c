/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18762
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
    var_10 = min((((((int) (signed char)55)) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_3))))), (((/* implicit */int) ((((/* implicit */int) var_7)) > (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = max((((/* implicit */int) (!(((/* implicit */_Bool) -850064444))))), (min((max((850064443), (850064461))), (((((/* implicit */int) var_9)) - (var_5))))));
                    var_12 = ((/* implicit */signed char) (short)-25942);
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_0 + 1])) == (850064443))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1])))) : (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) arr_6 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) var_9);
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) min((((/* implicit */short) var_4)), ((short)-14401)))), (((((/* implicit */_Bool) -850064444)) ? (((/* implicit */unsigned int) -850064451)) : (1434426860U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (short)-25942)) : (850064425))))));
    }
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) arr_1 [i_3] [i_3]);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [7] [i_3])) ? ((((_Bool)0) ? (((unsigned long long int) arr_5 [i_3 - 1] [i_3 - 1])) : (((/* implicit */unsigned long long int) ((long long int) (short)-2385))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) arr_4 [i_3] [i_3 - 1] [i_3 + 1])), (var_6)))), (arr_2 [i_3 + 1] [i_3 + 1]))))))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_16 [(short)6] [i_4] [i_4] |= ((/* implicit */unsigned int) arr_15 [i_4] [(signed char)8]);
            arr_17 [i_3] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)60516)))))));
            var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((short)-8490), (((/* implicit */short) arr_4 [i_3] [i_3 - 1] [i_4]))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_4] [i_3]))) : ((-(((/* implicit */int) var_0)))))) * (((/* implicit */int) ((unsigned short) var_8)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) arr_18 [i_5]);
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_5 - 1] [13U])) / (((/* implicit */int) arr_2 [i_5 - 1] [i_5 - 1]))));
    }
}
