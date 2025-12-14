/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116494
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
    for (short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_2 - 2] [i_3 + 1] [i_4 - 1] = ((/* implicit */unsigned short) var_9);
                                arr_13 [i_0] [i_3] [i_2] = ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)122))));
                                arr_14 [i_0 + 1] [(unsigned short)0] [(unsigned short)0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 2] [i_1] [i_0 - 1]))) * (((((/* implicit */_Bool) (short)-26596)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_0 [i_2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (signed char)(-127 - 1));
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                arr_20 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_16 [i_5] [i_6]), (min((arr_15 [i_5 - 1]), (((/* implicit */unsigned short) var_5))))))), (var_3)));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [i_5] [i_5 + 2] [i_5 + 2])) > (((/* implicit */int) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [i_5 + 1]), (arr_15 [i_5 - 1]))))) : (((((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 405346557)) || (((/* implicit */_Bool) 405346557)))))) : (((unsigned long long int) -405346548))))));
            }
        } 
    } 
}
