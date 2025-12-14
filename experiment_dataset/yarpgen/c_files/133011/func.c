/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133011
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
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (~(0U)));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_3 [i_2]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (signed char)111);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 10; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */short) (_Bool)1)), ((short)0)))))));
                                arr_20 [i_0] [i_1] [i_2] [i_5 - 4] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((short) (unsigned short)0));
                                var_20 = ((/* implicit */short) (-(max((((/* implicit */long long int) 1981891281)), (arr_11 [i_0 + 2] [i_1] [i_5 - 4] [i_0 + 2] [i_6])))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) -1398781143))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 8; i_8 += 4) 
                        {
                            {
                                arr_25 [i_1] [i_1] [i_7] = max(((~(((/* implicit */int) (signed char)-66)))), (((((/* implicit */_Bool) 545328661)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_23 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_8 + 1])))));
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), ((+(var_5)))));
                                arr_26 [i_1] [i_7] [i_1] = ((/* implicit */_Bool) max((708932616U), (((/* implicit */unsigned int) (short)-2))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_5);
    var_25 = ((/* implicit */unsigned int) var_6);
}
