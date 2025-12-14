/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152187
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)13] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)6] [i_1] [(_Bool)1]))) : ((-(var_3)))))));
                    arr_6 [i_1] = ((/* implicit */long long int) 4491960961679051325ULL);
                    var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_15 += ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (signed char)110)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_0 [i_1])))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (5042769359432739395ULL))))), (((/* implicit */unsigned long long int) (+(arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_2);
}
