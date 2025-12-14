/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152439
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2121237360) << (((arr_1 [i_0 + 1]) - (1788719494U)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0 - 1] = (unsigned short)48641;
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_11 &= ((/* implicit */int) ((((/* implicit */unsigned int) min((-2147483644), (var_3)))) * (((unsigned int) arr_1 [i_1 - 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((1302925458) ^ (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1])));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (var_3) : (((/* implicit */int) var_2)))))));
            var_14 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
        }
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_2))));
    var_16 = ((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) var_6))));
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_17 ^= arr_9 [i_5];
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1]))))))));
                    var_19 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5276617921385541559LL)) ? (-2147483644) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)74))) / (-5276617921385541562LL)))) : (max((arr_10 [i_5]), (((/* implicit */unsigned long long int) var_1)))))));
                    var_20 = ((/* implicit */signed char) arr_6 [i_5] [i_4] [2U]);
                    var_21 = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
}
