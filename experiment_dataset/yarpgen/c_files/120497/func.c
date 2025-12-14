/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120497
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
        arr_4 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 16727014353357333261ULL)) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_2 [i_0])))), (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_3 [i_0])))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((-598813853505195392LL) < (-4802971375499838277LL))))));
                        var_13 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_12 [i_3] [i_0] [i_2] [i_0] [i_0]) + (1719729720352218354ULL))) <= (((/* implicit */unsigned long long int) (((_Bool)0) ? (598813853505195391LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))) : (((unsigned long long int) var_6))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_3 [i_0]))) : ((-(var_8)))));
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) (short)4095)) ? (arr_9 [i_0] [i_1]) : (arr_9 [i_1] [i_2]));
                            arr_19 [i_3 - 1] [i_0] [i_3 - 1] [13LL] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (((unsigned long long int) arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [i_0]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_14 = ((((/* implicit */_Bool) var_0)) ? (max((((8585740288ULL) / (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_11)))) : (min((((/* implicit */unsigned long long int) max((1764031475663655832LL), (((/* implicit */long long int) var_4))))), (18446744073709551615ULL))));
    var_15 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) ((2314354160U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((short) 8585740304ULL)))))));
    var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((long long int) (short)2011))))))) : (var_2)));
}
