/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172588
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((~(((/* implicit */int) arr_8 [7LL] [i_2 + 2] [i_2 + 2])))) / (((/* implicit */int) ((arr_8 [i_0] [i_2 + 1] [i_3]) && (arr_8 [(unsigned char)11] [i_2 + 1] [i_2 + 1])))))))));
                            var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 4] [i_1 + 2] [i_2 + 1] [i_2 + 1] [i_1 + 2] [i_1 + 4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))), (min((((unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_2] [i_2 - 1] [i_3])), (((/* implicit */unsigned long long int) ((413079564) / (((/* implicit */int) var_15))))))));
                            arr_9 [(unsigned char)18] [i_3] [i_2] [i_3] [i_0] [i_3] |= ((/* implicit */unsigned int) var_16);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12455817017554459407ULL)) ? (((/* implicit */int) (short)-28936)) : (((/* implicit */int) (short)28936)))))));
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_5)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((short) max((arr_23 [i_6]), (((/* implicit */unsigned long long int) arr_22 [i_7])))));
                                var_25 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) var_8)));
                                var_26 = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) 742586637633089807LL)), (var_16))) | (var_7))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 22; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_23 [i_6]), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)19)))))) || ((!(((/* implicit */_Bool) arr_18 [i_8]))))));
                                var_28 = ((/* implicit */unsigned char) ((unsigned short) ((2147483647) >= (((/* implicit */int) arr_21 [i_7 - 1] [i_11 + 1])))));
                                var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) min((((((/* implicit */_Bool) -37480752)) || (((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_6] [i_11])))), ((!(((/* implicit */_Bool) -362193585))))))) ^ (((/* implicit */int) arr_20 [i_6] [i_11] [i_8] [i_11]))));
                                arr_32 [(short)10] [i_6] [i_11] [i_8] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
