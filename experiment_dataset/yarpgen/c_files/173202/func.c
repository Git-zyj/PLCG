/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173202
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_3] [i_1] [(signed char)6] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_3]);
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3])))))));
                                arr_18 [i_0] [i_1] [i_1] [1U] [i_3] [(unsigned short)6] [i_4] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_16 = 6898085484892579946LL;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_24 [i_5] [i_1] [i_2] [i_5] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) 6898085484892579960LL);
                                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_1]))));
                                var_18 = ((/* implicit */signed char) -6898085484892579949LL);
                                var_19 = ((/* implicit */unsigned char) 0ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_7] [0LL] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (short)-2398);
                                arr_31 [i_0] [i_7] [i_2] [i_7] [i_2] [(short)4] [i_2] = ((/* implicit */short) (_Bool)0);
                                var_20 = ((/* implicit */signed char) (short)15311);
                                arr_32 [i_0] [i_7] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_21 [i_2] [(signed char)5] [i_2] [i_2] [i_2] [i_1] [i_0]);
                                var_21 = ((/* implicit */int) arr_19 [i_0] [(unsigned char)5] [i_2] [i_7] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) 8689668891758655400LL);
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127)))))));
}
