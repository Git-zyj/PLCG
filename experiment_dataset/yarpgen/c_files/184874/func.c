/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184874
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), ((+(var_2)))));
    var_14 = ((unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) / ((-(((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65520))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)87))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((_Bool) arr_11 [(unsigned char)4] [i_1 - 1] [i_1] [i_1] [i_4 - 1] [i_1])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) var_6))))), (var_0))) : (((/* implicit */long long int) (-(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_4)))))))))))));
                                var_17 = ((/* implicit */unsigned long long int) (unsigned short)11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) var_5))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max(((_Bool)1), ((_Bool)1))))))));
}
