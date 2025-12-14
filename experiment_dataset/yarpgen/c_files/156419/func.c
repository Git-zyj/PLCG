/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156419
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
    var_15 = min(((~(((/* implicit */int) (unsigned char)23)))), (((((/* implicit */_Bool) (+(var_2)))) ? ((-(((/* implicit */int) (unsigned char)106)))) : (((int) var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9521120382442747196ULL))))), (arr_1 [(signed char)3] [i_1])));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((976355336), ((-2147483647 - 1))));
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_4 [i_2] [i_2] [(_Bool)1] [i_0]))))))) : (max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) min((arr_5 [i_2] [i_0] [i_0]), (arr_2 [0U] [0U]))))))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) 1150062949649413663ULL);
                                arr_15 [i_0] [i_0] [(unsigned char)10] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_3]))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min(((~(((arr_2 [i_0] [i_1]) + (var_10))))), (((/* implicit */int) ((_Bool) -1492995381)))));
            }
        } 
    } 
    var_21 = (-2147483647 - 1);
}
