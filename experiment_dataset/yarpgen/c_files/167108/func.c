/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167108
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) 0U);
        arr_3 [i_0] [i_0 + 2] = (~((~(((/* implicit */int) var_0)))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (signed char)91))));
                    arr_11 [i_3 + 2] [i_2 - 2] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0U))));
                    var_16 += ((/* implicit */signed char) ((_Bool) ((_Bool) var_14)));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_14 [i_3] [i_3] [i_2] [i_1 - 2] [i_1 + 2] |= ((/* implicit */short) (unsigned char)10);
                        arr_15 [i_1] [i_1] [i_2 - 2] [i_3 + 3] [i_4] |= ((/* implicit */long long int) max((15451564254399647012ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-10752)))))));
                    }
                    for (signed char i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        arr_19 [i_1] [i_1] [i_3 + 3] [i_5 - 2] [i_5 - 1] |= ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_13)), ((short)-1)))))));
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_4)))));
                        var_18 ^= ((/* implicit */_Bool) var_13);
                        var_19 = ((/* implicit */short) ((int) 2407377894423210789LL));
                        arr_20 [i_3] [4ULL] [i_3] [i_5 + 2] [i_5 + 2] = ((/* implicit */signed char) (unsigned char)246);
                    }
                }
            } 
        } 
        var_20 ^= ((/* implicit */int) var_5);
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_6))));
            arr_24 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-3)))))));
        }
        for (signed char i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            var_22 = ((/* implicit */int) var_13);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) 7269096571615062533ULL))))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)51030)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL))))), (((/* implicit */unsigned long long int) (short)6128)))))));
        }
    }
    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) max(((~(367186209))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (short)15)) : (-493557524)));
    }
    var_27 += ((/* implicit */_Bool) 0);
    var_28 = (short)0;
}
