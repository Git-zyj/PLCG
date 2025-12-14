/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115540
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (~(2925261432U))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) (_Bool)1);
        var_19 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)245))))) < (((unsigned int) 2799455331351021102ULL)))));
    }
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((5609621537381083543LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 12831267561544078523ULL))))));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) 3969192813U));
        arr_16 [i_2] = (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)94)) <= (((/* implicit */int) (unsigned char)162))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3308559250U)) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) ((unsigned short) var_13)))))));
                        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(arr_6 [i_2 - 1])))) ^ (((((/* implicit */_Bool) arr_3 [i_5])) ? (arr_3 [i_5]) : (((/* implicit */long long int) arr_6 [i_2 - 1]))))));
                    }
                } 
            } 
        } 
        var_22 |= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) (+(3308559250U))))), (((unsigned char) (+(((/* implicit */int) (unsigned short)63)))))));
    }
    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
    {
        arr_27 [i_6 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) arr_25 [i_6 - 1])), (((/* implicit */long long int) ((908868671U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 + 1] [i_6]))))))))) ? ((~(325774482U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) < (3308559250U)))) < (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (short)6766)))))))))));
        var_23 = ((/* implicit */_Bool) min((((arr_0 [i_6 + 1]) ? ((-(((/* implicit */int) (unsigned short)49152)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)161)))))), (((/* implicit */int) min((arr_1 [i_6 - 1] [i_6 - 1]), (arr_1 [i_6] [i_6 + 1]))))));
        arr_28 [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) <= (((/* implicit */int) (_Bool)0)))))))))));
    }
}
