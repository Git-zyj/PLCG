/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181866
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
    var_15 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (12505461815044977732ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_4 [i_0 - 2])))));
                        var_17 = arr_10 [i_3] [i_1];
                        arr_12 [i_2] [i_2] [6ULL] [i_3] = ((/* implicit */unsigned char) (+(arr_4 [3])));
                        var_18 = ((/* implicit */unsigned char) ((arr_10 [i_0 - 1] [i_2 - 2]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) max((((min((var_5), (((/* implicit */long long int) arr_2 [i_0 - 1])))) << ((~(((/* implicit */int) arr_5 [i_0] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0]))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [9ULL] [i_0 + 1]))))))))));
        arr_13 [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) (short)1165))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 14; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) arr_15 [i_4]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(arr_15 [(unsigned short)8]))))));
    }
}
