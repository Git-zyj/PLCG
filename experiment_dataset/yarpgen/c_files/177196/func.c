/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177196
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
    var_20 = ((/* implicit */long long int) var_1);
    var_21 = max((((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_18)))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1046393981U)))))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((long long int) (~(var_6)))) <= (((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */int) var_17)) >> (((/* implicit */int) var_11))))))))))));
    var_23 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 2] [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)15816)))) : (var_4))), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) var_12)), (var_4)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_14))), (min((((/* implicit */signed char) var_16)), (var_11)))))) * (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_19)), (var_17))))) > (var_15)))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1133483698)) ? (((/* implicit */int) (short)4080)) : (((/* implicit */int) (signed char)-2)))))))))))));
                                var_27 = ((/* implicit */unsigned int) var_8);
                                arr_17 [i_0] = ((/* implicit */unsigned short) min(((+(var_0))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-2)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0 + 3] = ((unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                }
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_7)), (var_13))))))));
                arr_19 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_13))));
            }
        } 
    } 
}
