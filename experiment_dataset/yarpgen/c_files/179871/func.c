/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179871
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
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 |= ((/* implicit */_Bool) var_0);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = var_3;
                            arr_11 [i_0] [i_1 + 1] [i_0] = (-((+(var_11))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        for (int i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            {
                arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))))));
                arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) var_10))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))));
    var_18 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                {
                    arr_27 [i_6] [(unsigned char)11] [(unsigned short)17] [16U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(0LL)))) ? ((+(((/* implicit */int) (signed char)125)))) : ((-(((/* implicit */int) var_0))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (_Bool)1))))));
                        var_20 &= ((/* implicit */unsigned int) var_12);
                        var_21 = ((/* implicit */int) (+(var_9)));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (var_9))));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) var_10)) : ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))))));
                    }
                }
            } 
        } 
    } 
}
