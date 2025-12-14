/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105149
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
    var_12 = ((/* implicit */long long int) (unsigned char)191);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (~((-(var_5))))))));
                                var_14 = ((/* implicit */_Bool) ((unsigned int) var_10));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))), (1020382725067938552ULL));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_7))))));
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14853))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_5]))));
                                var_17 = ((/* implicit */unsigned long long int) (-(569367458)));
                            }
                            for (unsigned short i_6 = 1; i_6 < 10; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */long long int) (-(min((arr_4 [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6] [i_6 - 1]))))));
                                arr_19 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_6 + 1] = ((/* implicit */unsigned char) var_11);
                            }
                            for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) 
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) var_7);
                                arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_7] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2] [i_7 + 2]);
                                var_19 = ((/* implicit */unsigned short) var_7);
                            }
                            var_20 = ((/* implicit */long long int) (-(var_7)));
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] = ((/* implicit */signed char) (-(var_3)));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_1] [i_9] [i_9 + 3] [i_9] = ((/* implicit */signed char) var_4);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)48))) ? (arr_20 [i_0] [i_1] [i_8] [i_9]) : (((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((signed char) arr_0 [i_0])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) (signed char)-35)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1]))))))) : ((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
