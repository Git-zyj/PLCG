/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1839
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))), (((/* implicit */int) (short)28927))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_6))))) ? (-17LL) : ((-(-3565319553216529518LL)))))) : (((unsigned long long int) 2807918469U))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) ((long long int) 8749018961574407069LL))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) ((int) var_16))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 += ((unsigned int) (+(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)-2884)))))));
                        arr_13 [i_0] [i_3] [8LL] [i_3] [i_3 - 1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((653209817U), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) max((-1841475870), (((/* implicit */int) (_Bool)1)))))));
                        arr_14 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) 1312227471U)) : (0ULL)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_13))))));
                        arr_15 [i_0] [(unsigned short)3] [i_3] [(short)9] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14933)) ? (((/* implicit */long long int) var_3)) : (-11LL)))) ? (12945294539347156021ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                        var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)27))));
                    }
                } 
            } 
        } 
    }
    var_23 += ((/* implicit */int) ((((/* implicit */_Bool) -9LL)) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
}
