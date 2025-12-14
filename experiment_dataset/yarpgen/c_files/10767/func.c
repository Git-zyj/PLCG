/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10767
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
    var_17 &= (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) > (var_12))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) var_11)) - (8238))))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0])), (arr_7 [i_1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) : (max((((/* implicit */unsigned int) var_3)), (720556860U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) + (4294967295U)));
                                arr_15 [i_4 - 4] [i_0] [(signed char)12] [(short)10] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_15)) >> (((((/* implicit */int) (unsigned char)182)) - (177))))) >= (((/* implicit */int) arr_1 [i_1])))))) + ((((+(var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [(short)18]))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) arr_0 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_2]))))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_9)), (var_10)));
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)13)))) : (-5587089042675933296LL))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_12))));
    }
    var_24 += ((/* implicit */_Bool) var_0);
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((unsigned char) var_11)))))) & (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_7])) ? (arr_7 [i_6]) : (((/* implicit */int) arr_8 [i_6])))), (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_9)) : (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7]))) != (var_7)))), (((var_9) ? (((/* implicit */int) (short)-13918)) : (((/* implicit */int) var_9))))))));
                var_26 = ((/* implicit */short) (~(((/* implicit */int) var_16))));
            }
        } 
    } 
}
