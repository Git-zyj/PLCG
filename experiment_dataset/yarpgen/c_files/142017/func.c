/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142017
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (+(max((arr_4 [(unsigned short)2] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5))))));
                    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), ((+(arr_1 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_6 [i_0] [i_1]);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((max((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])), (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((arr_7 [i_0 + 2] [i_0 + 1]), (arr_7 [i_0 + 1] [i_0 + 2]))))));
                    var_12 = ((/* implicit */unsigned short) max((arr_3 [i_1]), (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
    var_14 |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned char) (+(var_0)));
}
