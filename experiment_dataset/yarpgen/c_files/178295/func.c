/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178295
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_3))))), (((((/* implicit */int) var_5)) % (((/* implicit */int) arr_2 [i_1] [13ULL]))))))) % (((unsigned long long int) 9344686522213470385ULL))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_6 [17ULL]) > (var_12))))))) < (((((/* implicit */unsigned long long int) ((int) arr_7 [i_4] [i_1 - 3]))) | (((((/* implicit */_Bool) arr_8 [i_0] [20LL] [i_0])) ? (arr_8 [i_0] [i_2] [i_4]) : (arr_4 [i_0])))))));
                                var_14 = min((((/* implicit */unsigned int) (unsigned char)126)), (((arr_6 [15]) >> (((((/* implicit */int) (unsigned short)43699)) - (43682))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_7))))));
    var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6253152402616307369LL))))))))));
    var_17 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((short) var_3)))))));
}
