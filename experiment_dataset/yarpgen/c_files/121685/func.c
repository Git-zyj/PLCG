/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121685
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -2147483634)) == (max((1363055551U), (((/* implicit */unsigned int) (unsigned char)209))))));
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(var_7))))));
                                var_15 = max((((/* implicit */int) (unsigned char)209)), (2147483647));
                                var_16 = max((max((((/* implicit */int) ((arr_1 [i_0]) == (var_7)))), ((~(2147483635))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_8 [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_0]) : (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((-(((((/* implicit */unsigned int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])) % (1244993306U))))) | (((/* implicit */unsigned int) ((int) max((((/* implicit */int) arr_4 [i_0])), (var_6))))))))));
                    var_18 = ((/* implicit */int) (unsigned char)45);
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : ((-(((((/* implicit */_Bool) 2147483633)) ? (2147483634) : (((/* implicit */int) (unsigned char)46))))))));
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_10)) <= (min((((/* implicit */unsigned int) ((var_7) | (var_11)))), (((((/* implicit */unsigned int) var_0)) / (470350385U)))))));
    var_21 &= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2011095232)) ? (-367823946) : (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */unsigned int) var_8)) : ((-(4294967295U))))), (((/* implicit */unsigned int) var_3))));
}
