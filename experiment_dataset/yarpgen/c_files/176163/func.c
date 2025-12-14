/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176163
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_8))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) max((((/* implicit */signed char) var_4)), ((signed char)38))))))));
                var_19 |= ((/* implicit */unsigned short) var_5);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) var_13);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((((/* implicit */_Bool) var_18)) ? (max((var_18), (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) var_5))))))))));
                    var_21 = ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) var_17);
                        arr_13 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~((+(arr_12 [i_0] [i_0] [11] [i_2] [i_3])))));
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [4] [4] [i_3]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))))) : (((/* implicit */int) ((signed char) (signed char)-8)))));
                        var_24 = ((/* implicit */unsigned short) var_1);
                    }
                }
                arr_14 [6] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_0));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)8)))))))));
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) var_2)))))) ? (var_10) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (var_12))))))));
    var_27 = ((/* implicit */int) ((unsigned char) ((var_10) | (((/* implicit */unsigned long long int) var_18)))));
}
