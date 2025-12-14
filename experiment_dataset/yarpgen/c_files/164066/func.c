/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164066
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
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) var_8)) > ((((_Bool)1) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) min((var_3), (var_3)))), ((+(((/* implicit */int) var_6)))))) : (((/* implicit */int) ((unsigned char) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34066)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (short)5007)) - (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) (short)5018))))))))), (((long long int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_3]))))))));
                        arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(((long long int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                }
            } 
        } 
    } 
}
