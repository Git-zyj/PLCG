/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127145
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
    var_15 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2849154528U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))), (2849154528U));
    var_16 = (-(((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_1)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_0 [i_0])))) < (((((/* implicit */_Bool) min(((short)(-32767 - 1)), (((/* implicit */short) var_9))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */unsigned char) arr_0 [i_1 - 1]);
                    var_18 *= ((/* implicit */short) (~((+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (10225263547344658182ULL)))))));
                }
            } 
        } 
        arr_8 [i_0] &= ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) ((int) ((_Bool) arr_0 [i_3])));
        var_20 = ((((/* implicit */_Bool) ((long long int) ((int) arr_4 [i_3])))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))) : (arr_5 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((long long int) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_21 = ((/* implicit */_Bool) var_1);
        var_22 -= ((/* implicit */long long int) min(((-((~(arr_13 [(signed char)0] [i_4]))))), (max((((((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4])) / (((/* implicit */int) (unsigned short)11)))), (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_5 + 1])) >= (((/* implicit */int) arr_4 [i_5 + 1])))), ((!((_Bool)0)))));
        arr_19 [i_5] [i_5] = (_Bool)0;
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((_Bool) var_14))))) ^ (var_7)));
    }
}
