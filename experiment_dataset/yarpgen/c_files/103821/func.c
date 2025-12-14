/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103821
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9690)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_18))))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((var_12), (var_8))))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_0]))) ? (var_3) : (((unsigned long long int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_2)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((int) max((((2396676318990933965ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_23 = var_1;
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            arr_13 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_1 [i_2])))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [(short)3] [i_1])) && (((/* implicit */_Bool) -1930421187)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_5 [(short)14] [i_1] [i_2] [i_3])));
                        }
                    }
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) var_9);
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((unsigned int) arr_6 [5] [5] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_13)) : (var_12)));
                }
                for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_11))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_19)))))) : (var_3)))) ? (((var_1) & (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                }
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((long long int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) var_17);
}
