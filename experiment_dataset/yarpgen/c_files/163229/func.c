/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163229
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_19 = ((max((((int) (unsigned short)29709)), (((/* implicit */int) var_5)))) & (max((max((var_2), (((/* implicit */int) var_11)))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))));
                            var_20 -= ((/* implicit */long long int) ((max((arr_7 [i_0] [i_1 + 2] [i_3]), (((/* implicit */unsigned long long int) 510)))) * (min((((arr_7 [i_3] [i_3] [i_2]) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1 + 2])), (-511)))), ((-(0U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_20 [i_6] [i_5] [i_6] [i_4] [i_7] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 573006423))) >= (((-511) / (((/* implicit */int) var_7))))))), ((+(-2019308690968957929LL)))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_12))));
                            arr_21 [i_4] [i_5] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) var_18);
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((unsigned long long int) ((arr_12 [i_4]) * (((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_4] [i_5] [i_5])), (-511)))))));
                arr_22 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(510)))), (arr_12 [i_4])));
                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)48914), (((/* implicit */unsigned short) (signed char)27)))))));
            }
        } 
    } 
}
