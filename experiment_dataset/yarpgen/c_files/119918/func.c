/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119918
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) (+(arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)78))))), (((((/* implicit */_Bool) -135437969)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((945182690741969908ULL), (4397509640192ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
