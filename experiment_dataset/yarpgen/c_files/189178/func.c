/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189178
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((long long int) (+(var_14)))), (((/* implicit */long long int) (((-(((/* implicit */int) var_12)))) + (((/* implicit */int) (_Bool)0))))))))));
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) < (((/* implicit */long long int) var_0))))))));
                var_17 = ((/* implicit */short) ((2147483648U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60952)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (var_5)));
                    arr_13 [i_2] [14ULL] [(unsigned short)5] [i_4] = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    } 
}
