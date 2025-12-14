/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158539
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (var_4)));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (var_16)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) max((min((arr_3 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))), (arr_3 [i_0])));
                    var_21 ^= ((/* implicit */long long int) max((((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_18)))) == (max((arr_0 [i_0] [i_2]), (((/* implicit */unsigned int) var_12)))))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_22 -= ((/* implicit */_Bool) var_9);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_3] [i_4 - 3] = ((/* implicit */unsigned int) var_3);
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((((/* implicit */unsigned int) var_16)) <= (((((/* implicit */_Bool) (unsigned short)2769)) ? (arr_10 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                    }
                    arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (~((+((-(4005848031U)))))));
                }
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) max((var_5), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (var_1))))))))));
                var_25 *= ((/* implicit */short) arr_2 [i_0] [i_0] [i_1]);
                arr_15 [i_1] = ((/* implicit */unsigned char) ((_Bool) max((var_9), (((/* implicit */long long int) var_10)))));
                arr_16 [i_1] |= ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) > (arr_8 [i_0] [i_1] [2] [i_1])))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */unsigned int) var_16);
}
