/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146734
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
    var_12 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_11);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((arr_15 [i_0] [i_3 + 1] [i_2] [i_0] [i_4] [i_4 + 1] [i_1]) && (((/* implicit */_Bool) ((((int) arr_4 [i_0] [i_2] [i_4 - 2])) / (((/* implicit */int) ((3766494789195457244ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_1] [i_2] [i_1] [i_4 - 2] [i_0] [i_0])))))))))));
                                var_14 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-9211362110415472904LL))))), (((/* implicit */long long int) (~((+(((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_1]))))))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_11 [i_0] [8] [i_1] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_0))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))))));
    var_17 = ((/* implicit */unsigned char) var_0);
}
