/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130737
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_1);
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) max((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 7; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) var_2);
                    var_22 += ((/* implicit */long long int) max((((unsigned int) 189798360U)), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_11 [i_2] [i_3] [i_4]))) == (((/* implicit */int) ((_Bool) arr_3 [i_3] [i_3] [i_2 + 1]))))))));
                    var_23 = ((/* implicit */long long int) arr_12 [i_4] [i_4 - 2] [i_3] [i_2]);
                    var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? ((-(arr_6 [i_4 + 3]))) : (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_5 [i_2 + 1])), (var_13)))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) var_1);
    var_26 = ((/* implicit */_Bool) max(((+(var_11))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 189798375U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)))))));
    var_27 = ((/* implicit */unsigned char) var_5);
}
