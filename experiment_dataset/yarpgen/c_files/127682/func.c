/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127682
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
    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)3))))))) | (((/* implicit */unsigned long long int) 0U))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */short) -4465289521201345675LL);
                                arr_13 [i_0] [i_0] [5LL] [i_3] = (_Bool)1;
                                var_20 = ((/* implicit */int) arr_2 [i_1 + 1] [i_0 + 1]);
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)64759)))) < ((+(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 2]))))));
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [i_1 + 2] [0LL] [i_1 + 2])), (((((/* implicit */_Bool) arr_8 [i_1] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_2])) : (((/* implicit */int) ((8968127740534573159ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [(short)3]))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_5 [i_0 - 1] [i_1] [i_1 + 1])));
                    var_23 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */unsigned int) var_17);
    var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (((var_4) ^ ((~(((/* implicit */int) (unsigned short)10489))))))));
}
