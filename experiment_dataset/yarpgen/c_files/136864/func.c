/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136864
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
    var_17 = min((((/* implicit */unsigned long long int) ((int) (+(var_3))))), (var_2));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned char) var_2);
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned short)42341);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_14 [i_3 + 1] [i_0 + 2] [i_1] [i_0] [i_0 + 2] [i_0] = ((/* implicit */signed char) var_10);
                        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2] [i_0])) ^ (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)43589), (((/* implicit */unsigned short) arr_0 [i_0 - 1]))))) ? (4138211571686894316ULL) : (18218347160275560309ULL))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */int) ((unsigned short) 3859749046338168323LL));
}
