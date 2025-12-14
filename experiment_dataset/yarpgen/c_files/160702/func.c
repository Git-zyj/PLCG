/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160702
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
    var_15 ^= ((/* implicit */signed char) (-(min((var_4), (((var_4) | (((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))))))));
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0]))));
            arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((int) arr_7 [i_0] [i_1]));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_17 = ((/* implicit */short) ((((arr_3 [i_2]) > (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!((_Bool)1))))));
            var_18 |= ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0]);
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(arr_12 [i_3] [i_3] [i_3]))))));
                var_21 &= ((/* implicit */int) ((short) var_11));
            }
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_19 [i_0] [i_0])))) ? (((arr_19 [i_0] [i_0]) >> (((1243014875) - (1243014850))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) var_3)))))))))));
                var_23 += ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0]))));
            }
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
        }
    }
}
