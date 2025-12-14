/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147095
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
    var_16 |= ((/* implicit */int) ((var_0) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) -8)) ? (12) : (13)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [(unsigned short)4] &= ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = -14;
                            arr_12 [i_0] = ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned int) -2)) : ((-(2502633481U))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_3])))) ? (((arr_3 [i_1] [i_2] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((unsigned short) ((((unsigned int) arr_18 [(unsigned char)4] [i_0] [i_4] [i_4] [i_4] [i_4])) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) var_10))))))));
                            arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (7) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_5])))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_0 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) ((992175887U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)15131)))));
    var_22 |= ((/* implicit */int) ((unsigned long long int) var_1));
}
