/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165645
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58651))) + (((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25295)))))) ? (min((((/* implicit */unsigned int) var_1)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40241)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)40241)) - ((-(((/* implicit */int) (unsigned short)25295))))))) - (arr_1 [(short)9])));
                arr_5 [i_1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)9])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)25269)) < (((/* implicit */int) (unsigned short)40245))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 4] [i_1])) : (arr_3 [i_0 + 2] [i_0 + 4] [i_0 + 4]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) var_5)), (arr_8 [i_0 - 1] [i_3] [i_3])))));
                            arr_13 [3LL] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 874273264U)) & (((((/* implicit */unsigned long long int) ((int) (unsigned char)104))) ^ ((~(arr_6 [i_1] [i_1] [i_1] [i_3])))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) (~(var_10)))) && (((/* implicit */_Bool) ((((8644558481795450791ULL) * (((/* implicit */unsigned long long int) 874273272U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_1] [i_1] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
