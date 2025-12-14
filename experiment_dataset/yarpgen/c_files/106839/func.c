/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106839
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_0] [6U] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 + 3])) <= (((((/* implicit */_Bool) -2914922837899344978LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32181))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) arr_3 [i_1 + 4]))))));
                            var_16 ^= ((/* implicit */unsigned int) (-(arr_10 [i_4 - 2] [i_3 - 1] [i_2 + 1] [(short)4] [i_0])));
                            var_17 = ((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [10U]);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */long long int) (-(max(((-(var_2))), (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_6] [i_7]))))));
                    arr_22 [i_6] = ((/* implicit */_Bool) var_7);
                    var_18 += ((/* implicit */short) arr_7 [i_5] [i_6] [i_7]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_7)))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */short) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1132532717U))))));
}
