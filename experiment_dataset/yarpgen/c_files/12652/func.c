/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12652
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1 - 1] [i_2]);
                    arr_8 [i_0] [(short)11] [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_0]) << (((((/* implicit */int) (unsigned char)199)) - (186)))));
                    var_20 = ((/* implicit */int) (~(max((arr_5 [i_1 + 2] [(unsigned char)11] [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)251)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_15);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_13))))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_20 [i_3 + 2] [13] [i_5] [i_6] [i_7] = (_Bool)1;
                                var_23 |= ((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_5]);
                                arr_21 [1U] [i_4] [i_5] [i_5] [(short)7] [i_6] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_6] [i_7])))))))));
                                var_24 ^= ((/* implicit */unsigned int) min(((unsigned short)11259), (((/* implicit */unsigned short) (short)4920))));
                                arr_22 [i_7] [i_6] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_3] [6] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_5])), ((-(((/* implicit */int) var_15))))))) ? (((/* implicit */int) arr_16 [i_3] [i_8] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_5))))))))))));
                                arr_29 [i_9] [i_9] [i_3 - 1] [i_9] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) arr_5 [(unsigned char)12] [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (0U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)2355))))) : (max((min((arr_17 [i_3] [i_4] [i_5] [i_9]), (((/* implicit */int) var_4)))), (((/* implicit */int) (!((_Bool)1))))))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_3] [i_4] [i_5] [i_3 + 1] [i_9])))) : (max((arr_26 [(short)10] [i_4] [i_3] [i_3 + 2] [i_4]), (arr_26 [i_9] [i_5] [i_5] [i_3 + 3] [(short)11])))));
                                arr_30 [i_9] [i_9] [i_8] [i_5] [i_4] [i_9] = var_12;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
}
