/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171843
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((arr_0 [i_0 + 4]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [5] [i_3 + 2]))) > (357815563268961973LL))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(arr_7 [(unsigned char)7] [i_3 - 1] [i_3 + 2] [i_3])));
                    }
                } 
            } 
            var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 4] [i_1])) || (((/* implicit */_Bool) 2923324854151494511LL))));
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) 3308353323U);
            var_15 = ((/* implicit */int) arr_11 [i_0 + 3] [i_4] [i_0]);
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_14 [i_5] [(short)7] [i_5]))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2923324854151494512LL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)9114)))) / (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_5 [i_5])))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1481692711)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_6] [i_6] [i_6])))) || (((/* implicit */_Bool) ((arr_3 [i_6] [i_6] [i_6]) & (((/* implicit */unsigned long long int) var_8))))));
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_6])) / (((/* implicit */int) arr_2 [i_0 + 3] [i_6]))));
            var_20 += ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_6] [i_0 - 1] [i_6]))));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_7 [i_0 + 4] [i_0 - 1] [i_0] [i_0])));
        var_21 = ((/* implicit */int) (~((+(8402933370123568859ULL)))));
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned char)6])) * (((/* implicit */int) ((signed char) (_Bool)1)))))) ? ((-((-(var_4))))) : (((/* implicit */int) (unsigned short)50312))));
        arr_22 [10ULL] [(unsigned short)16] = ((/* implicit */long long int) max((((385540832) + (-1184518721))), ((~(((/* implicit */int) arr_9 [(unsigned char)18] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_16 [i_7] [i_7]) ^ (arr_16 [i_7] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) : (((((/* implicit */_Bool) (~(-2923324854151494511LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7]))) : (max((arr_16 [i_7] [5U]), (((/* implicit */long long int) (_Bool)0)))))))))));
    }
    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
    var_25 = ((/* implicit */unsigned char) (~(var_10)));
}
