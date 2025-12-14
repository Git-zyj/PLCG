/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116257
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
    var_10 *= ((/* implicit */unsigned char) ((int) (((!(((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)229)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))))))));
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned short) var_6)), (((unsigned short) (+(var_8))))));
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_2))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)93)))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1] [i_3])))));
                                var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 - 1] [i_2 + 3] [i_2 + 3])) ? (arr_12 [i_1] [0ULL] [i_2 + 3] [i_2 + 3]) : (arr_12 [i_1] [i_2] [i_2 + 3] [i_2 + 3]))));
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 1] [(_Bool)1] [i_4]);
                                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min(((+(max((((/* implicit */unsigned long long int) (unsigned short)9064)), (9938861154365002247ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])))) - (min((((/* implicit */unsigned long long int) (short)7)), (arr_7 [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_14 = (+(((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_21 [i_0] [6])))) : (((arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 8029167093103651247ULL)) ? (((/* implicit */int) (short)-18)) : (1579747181)));
                                arr_23 [i_1] [i_5] [i_2 - 1] [(short)8] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-27632)), (17ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
