/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18357
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) ((int) ((((/* implicit */int) max((var_2), ((short)-5534)))) ^ ((~(((/* implicit */int) (short)(-32767 - 1))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) var_5)))));
                        var_12 ^= ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) arr_3 [i_3] [i_2 + 2]))), (((unsigned short) (_Bool)1))));
                            var_13 ^= ((/* implicit */unsigned short) var_9);
                            arr_15 [i_1] [i_3] [i_1] = var_3;
                        }
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_0] [i_5] = ((/* implicit */short) (unsigned short)40291);
                            arr_19 [i_0] [i_1] [i_2 - 2] [i_1] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24027)), (var_8)))) || (((/* implicit */_Bool) (unsigned short)40291))))), ((~(((/* implicit */int) ((short) (_Bool)1)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 271709441898470535ULL))) && (((/* implicit */_Bool) var_0))));
                            var_15 = ((/* implicit */unsigned short) var_8);
                            arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0];
                            var_16 = ((/* implicit */unsigned short) min(((unsigned char)2), (((unsigned char) ((((/* implicit */int) (unsigned char)43)) >= (((/* implicit */int) arr_17 [i_2] [i_1] [i_2] [i_2 + 3] [i_3] [i_1])))))));
                            arr_23 [i_0] [i_1] [i_0] = var_6;
                        }
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) var_6);
                        var_18 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (8779937325551396089ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3354812352U)) ? (4294967295U) : (4268013629U)))))));
                    }
                }
            } 
        } 
        arr_26 [i_0] [i_0] = arr_21 [i_0] [6U] [i_0] [6U] [i_0];
        arr_27 [i_0] = ((/* implicit */unsigned long long int) var_5);
    }
    var_19 = var_5;
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_2)))))));
}
