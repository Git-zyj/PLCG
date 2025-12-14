/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163245
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = var_15;
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((((/* implicit */int) var_8)) * (arr_13 [i_0] [i_1] [i_2] [i_0] [i_4]))) : ((+(((/* implicit */int) var_2))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_11 [i_4] [i_3] [i_1]) : (((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_1]))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_5 [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) (unsigned char)202);
                arr_18 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_10) != (((/* implicit */long long int) arr_3 [i_1] [i_0]))))) >> ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) min((var_7), (((/* implicit */int) (unsigned short)30822))))), (var_13)))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)6679)), ((unsigned short)2032)));
                    var_21 |= ((/* implicit */short) arr_0 [i_6] [i_6]);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_3 [i_6] [i_7 + 1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_6);
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) | ((+(((var_8) ? (((/* implicit */int) (unsigned short)34704)) : (var_7)))))));
}
