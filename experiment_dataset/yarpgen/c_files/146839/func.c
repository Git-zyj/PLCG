/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146839
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), (max((var_14), ((short)26953)))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_6);
                    var_15 += ((/* implicit */_Bool) max((((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))), (((((/* implicit */unsigned int) var_9)) | (var_6)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_22 [i_5] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((var_7) - (arr_21 [i_3 + 1] [(unsigned short)9] [i_5] [i_6]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_3] [i_4] [i_5 + 1] [(unsigned char)1] [i_7 + 2] [12] [i_7])))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1))))));
                                var_16 *= ((/* implicit */unsigned short) ((arr_14 [i_3 + 2] [i_7] [i_3 + 2]) ? (((((/* implicit */_Bool) -2155749891781984143LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 + 2] [i_4] [i_3 + 1]))) : (2155749891781984158LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_3 + 2] [i_7] [i_3 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_29 [i_3] [i_3] [1LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (var_9) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))));
                                arr_30 [i_3] [i_4] [i_5] [i_8] [i_9] = ((/* implicit */unsigned short) max((var_14), (((/* implicit */short) arr_14 [0U] [i_3] [i_5 - 2]))));
                                var_17 = ((/* implicit */unsigned int) ((signed char) var_12));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
