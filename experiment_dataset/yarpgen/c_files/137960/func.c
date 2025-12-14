/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137960
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_0] [(signed char)7] [i_0]))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3318276431U)) ? (((/* implicit */int) (unsigned short)21713)) : (((/* implicit */int) (_Bool)1))));
                arr_6 [(short)4] [i_1] = ((/* implicit */short) max((var_2), (((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)21713)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2 - 1] &= ((/* implicit */unsigned int) max(((unsigned short)43823), ((unsigned short)43058)));
                    arr_11 [i_0] [i_0] [i_1 + 3] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */_Bool) (((+(var_7))) | (min((arr_14 [i_2 - 1] [i_2 - 1] [i_2] [i_2]), (305234143U)))));
                                var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8927))))) && (((229490209U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8932)) ? (((/* implicit */int) (unsigned short)40984)) : (-158779051))))))));
                                var_17 = ((/* implicit */unsigned char) ((arr_7 [i_2] [i_1] [i_0]) > (((/* implicit */unsigned long long int) 820246966U))));
                                arr_17 [i_0] [i_1 + 3] [i_1 + 3] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) arr_2 [i_0 - 1] [0LL]);
                                var_18 *= ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10)))), ((+((-(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */int) 0U);
        arr_23 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) ((unsigned short) var_2)))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_7))));
    var_20 = ((/* implicit */unsigned long long int) ((int) ((int) (_Bool)1)));
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) > ((~(((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) (unsigned short)55480)))))))));
}
