/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181143
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
    var_16 = var_10;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */long long int) var_0)) / (var_14)))))));
                    var_18 &= max((max((arr_4 [i_2] [i_0]), (((/* implicit */unsigned long long int) max((arr_1 [i_2] [i_1]), (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_2) <= (((/* implicit */int) var_8))))), (min((arr_1 [i_2] [i_1]), (((/* implicit */int) arr_3 [i_1 - 1]))))))));
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */short) (unsigned char)128)), ((short)32767)));
                    var_19 *= ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) 8899724436666381642LL)) ? (384595703) : (((/* implicit */int) (short)18117)))))) <= (((/* implicit */int) (short)32756))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_11))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_7] [i_3 + 2] [i_7] [i_3 + 2] [i_3 + 2])))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+((+(var_0))))))));
                                var_24 &= ((/* implicit */long long int) ((var_4) >= (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (short)-18118)), (2097808445))) >> (((((/* implicit */int) min((((/* implicit */short) var_3)), (arr_17 [i_3] [i_4] [i_5] [i_5] [i_7])))) + (93))))))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_5] [i_5] = ((/* implicit */signed char) arr_11 [i_3]);
                }
                var_25 = ((/* implicit */long long int) arr_14 [i_4 - 2] [i_3 + 1] [10U]);
            }
        } 
    } 
}
