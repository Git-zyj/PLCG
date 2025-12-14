/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132002
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (2944679767U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) var_5);
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2944679761U)) ? (2944679758U) : (2944679776U)))) ? (2944679768U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((((/* implicit */_Bool) 2944679786U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
        var_17 = ((/* implicit */long long int) (_Bool)1);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) 2944679781U);
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)56)) >= (((/* implicit */int) var_3))));
        var_19 = var_11;
        var_20 = ((/* implicit */int) var_13);
    }
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))));
        arr_13 [i_3] = ((/* implicit */short) 1350287522U);
        var_22 = ((/* implicit */unsigned int) (((_Bool)1) ? (var_2) : (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_6);
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) var_12);
                            var_25 = ((/* implicit */unsigned short) var_1);
                            var_26 |= ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned short) 1073741824);
        }
        var_28 = ((/* implicit */unsigned int) var_7);
    }
    var_29 = ((/* implicit */signed char) var_2);
    var_30 *= ((/* implicit */unsigned char) var_5);
}
