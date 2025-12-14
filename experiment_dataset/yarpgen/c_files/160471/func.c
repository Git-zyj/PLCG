/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160471
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
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7)))) : (var_18)));
    var_21 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (10555639542389422256ULL)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_13)) ? (10555639542389422256ULL) : (((/* implicit */unsigned long long int) 1048544U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2058))) % ((+(2614882587920866628LL))))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (signed char)56))));
                var_24 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 2]))))) : (8558065944917648099ULL)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_25 *= ((/* implicit */_Bool) ((unsigned long long int) var_15));
                            arr_9 [(_Bool)1] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) (_Bool)1);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                var_26 = ((/* implicit */int) min((var_26), (((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 4] [i_2 - 1] [i_2 - 2])) && (((/* implicit */_Bool) -315315003)))) ? (((((/* implicit */_Bool) arr_4 [i_4])) ? (((((/* implicit */int) arr_2 [i_1])) >> (((1048544U) - (1048538U))))) : (((((/* implicit */_Bool) 4293918752U)) ? (((/* implicit */int) (unsigned short)2058)) : (((/* implicit */int) (unsigned short)63477)))))) : ((+(((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 4] [i_2] [i_2] [i_2 - 2] [i_2 - 1]))))))));
                                arr_12 [i_0] [0LL] [i_2 - 3] [i_0] [i_4] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-108))));
                            }
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0 + 2])) >> (((10319102203426372906ULL) - (10319102203426372905ULL))))) << (((((max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_11 [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_1])))) << (((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [(short)12] [i_0])), (var_8))) - (2343001626256536470ULL))))) - (3362664943U)))));
                var_27 |= ((/* implicit */unsigned char) (unsigned short)2073);
            }
        } 
    } 
}
