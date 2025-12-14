/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115888
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2] [i_2]);
                                var_17 = ((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_0] [(unsigned short)12] [i_2])), (((((/* implicit */_Bool) (unsigned short)19119)) ? (((/* implicit */int) (short)-6107)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                                var_18 = ((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]);
                                var_19 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30967)) % (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))))) | (var_11)));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) (+(arr_4 [i_1] [i_1]))))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_0)), ((+((-9223372036854775807LL - 1LL))))))));
    var_22 = ((/* implicit */signed char) 18422727728405847467ULL);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11736)) ? (max((7438574391893809205ULL), (((/* implicit */unsigned long long int) arr_16 [i_6 + 1])))) : (((/* implicit */unsigned long long int) (~(((int) (signed char)-83)))))));
                            var_24 *= ((/* implicit */long long int) (_Bool)1);
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (signed char)-114))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) 1155341059U);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) (signed char)-112);
}
