/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179090
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((short) 2147481600U));
                    var_17 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) var_13)), (var_4)))));
                    arr_7 [i_0] [i_0] [(short)14] [6] |= ((/* implicit */int) ((((/* implicit */int) (short)5647)) >= (((/* implicit */int) (unsigned short)11495))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((unsigned char) (unsigned short)6783));
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_18 [(_Bool)0] [i_3] [i_5] = (short)5658;
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) / (var_15)))) && ((!(((/* implicit */_Bool) (signed char)-83)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_17 [i_3 + 1] [i_6] [i_7 + 2])))))) > (max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */int) (signed char)82))))), (min((((/* implicit */unsigned long long int) 1802609834)), (4019545177393315002ULL)))))));
                                arr_23 [i_3 - 1] [i_3] [i_3] [i_3] [2LL] [(_Bool)1] = ((/* implicit */signed char) (+(((((/* implicit */int) (short)5658)) ^ (((/* implicit */int) (unsigned char)180))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((unsigned short) ((((/* implicit */int) (short)28504)) + (((/* implicit */int) (unsigned char)84))));
}
