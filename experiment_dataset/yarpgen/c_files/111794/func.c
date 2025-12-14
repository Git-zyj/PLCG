/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111794
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 1])) * (((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 1]))))) > (((max((((/* implicit */unsigned long long int) arr_3 [2ULL])), (0ULL))) & (max((11183131228409586046ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 4]))))))));
                arr_6 [6ULL] [i_0] [i_0] |= ((/* implicit */unsigned long long int) max(((unsigned char)0), ((unsigned char)168)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (+(6053529984913904803ULL)));
    var_16 = (((((+(var_6))) * (((8796093022207ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) | (((var_6) << (((((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))))) - (18182469105548582020ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) ^ (arr_7 [i_2] [i_3]))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_3] [i_3] [i_3] [i_4] [i_5] [(unsigned char)16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                                arr_20 [i_2] [i_3] [i_2] [i_2] [(unsigned char)5] [i_2] = ((/* implicit */unsigned char) (-(max((arr_17 [i_2] [i_2] [i_4] [i_5] [i_6]), (arr_17 [i_2] [i_2] [i_2] [i_2] [(unsigned char)3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) << (((var_12) - (18182469105548581962ULL)))));
}
