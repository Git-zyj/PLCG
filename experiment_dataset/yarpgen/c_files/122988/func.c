/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122988
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (((~(-1013709794))) < (((((/* implicit */int) (signed char)-109)) + (357718084)))))) >> (((((((var_15) + (357718098))) + (max((1391585995), (((/* implicit */int) var_14)))))) + (82254030))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) 2296857904U);
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-5452010232824970451LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)84))))) : (((/* implicit */long long int) (~(arr_6 [i_1]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(signed char)2])) ? ((+(((/* implicit */int) (short)15961)))) : (((((/* implicit */int) arr_5 [i_0] [10] [i_0] [i_0])) / (-329917646)))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) ((arr_10 [(_Bool)1]) | (((/* implicit */long long int) -1020427945))))) ? (5452010232824970450LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_24 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_12 [(short)14]))))));
        var_25 = ((/* implicit */int) arr_9 [i_3] [i_3]);
    }
}
