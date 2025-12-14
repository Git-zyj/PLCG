/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160077
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((713462694U), (((/* implicit */unsigned int) (+(760068855))))))), (((((/* implicit */long long int) 713462667U)) ^ (var_15)))));
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (arr_0 [(short)15]) : (((/* implicit */int) (signed char)-35)))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max(((unsigned short)26966), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_7 [i_0] [(unsigned short)4]), (((/* implicit */short) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
