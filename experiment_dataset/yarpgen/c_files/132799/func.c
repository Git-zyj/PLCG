/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132799
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))), (((/* implicit */int) var_14)))))));
                var_18 = ((/* implicit */unsigned int) (unsigned char)48);
                var_19 = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))))))));
                var_20 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (251658240U)))))), (arr_0 [i_1])));
                var_21 = (-(251658241U));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_15);
}
