/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174575
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        arr_10 [(short)5] [(short)5] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) min((((long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_11))))), ((+(((((/* implicit */_Bool) var_1)) ? (6972359112213113579LL) : (arr_1 [i_2] [i_2 + 1])))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_8 [i_2 + 1] [i_3 + 1]), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-92)))))));
                    }
                    for (int i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        arr_15 [(unsigned char)4] [(unsigned char)4] [i_1] &= ((/* implicit */int) var_6);
                        arr_16 [(_Bool)1] [i_1] [(_Bool)1] [i_4] &= ((/* implicit */int) arr_6 [i_0] [i_0] [10LL]);
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (33554432U)))));
                        arr_21 [i_1] [3U] [i_1] = (~((+(-6972359112213113580LL))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2075289369)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) : ((+(-6972359112213113585LL))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] = ((/* implicit */short) 140737488355327LL);
                        var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((((/* implicit */int) arr_2 [i_0] [i_1])) | (((/* implicit */int) arr_19 [i_6] [(signed char)0] [i_1] [i_0]))))))), ((+(((long long int) var_2))))));
                        var_15 ^= (-((~(((((/* implicit */_Bool) 8388576U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    }
                    arr_25 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (arr_13 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) (-(arr_17 [i_0] [i_1] [i_1] [i_2])))))))));
                    var_16 = ((/* implicit */int) (-((~(((6972359112213113584LL) % (((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [(signed char)7]))))))));
                }
            } 
        } 
    } 
    var_17 = (~(((/* implicit */int) var_3)));
}
