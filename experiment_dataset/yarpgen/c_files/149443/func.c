/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149443
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
    var_15 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) min((((/* implicit */int) var_6)), (var_5))))), (((var_11) / (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2]);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)5] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2]))));
                    }
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                    var_19 += max(((-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_1])))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))) : (arr_7 [i_0] [i_0] [i_0]))))));
                    var_20 = ((/* implicit */int) min((var_20), (min((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13))))) << (((((arr_0 [i_0]) ? (var_8) : (((/* implicit */int) arr_0 [i_0])))) - (1440587926))))), (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((var_8) << (((((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned char)3)) : (-140677944))) - (3)))));
}
