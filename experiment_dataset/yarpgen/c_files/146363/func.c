/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146363
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (((((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)180)))))) + (2147483647))) << (((arr_0 [i_1 - 3]) - (783216581428720870LL)))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) / (arr_2 [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) var_2);
                                arr_21 [i_2] [i_3] [i_5] [8U] [i_5] [i_6 - 2] [8U] = ((/* implicit */unsigned short) 2766101660U);
                                var_14 = ((((/* implicit */_Bool) (unsigned char)143)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)142)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((arr_24 [i_9 + 1] [i_9] [i_9 - 1] [i_3]) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) < (((/* implicit */int) (unsigned char)54))))) : (((((/* implicit */_Bool) (short)-7835)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)148)))))) << (((((/* implicit */int) ((signed char) max((8999716954076116408LL), (((/* implicit */long long int) (signed char)-66)))))) + (85)))));
                                arr_28 [(short)0] [i_3] [(short)0] [i_8] [i_7] [(short)0] [i_9 + 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_25 [i_7 + 1] [i_3] [i_7 + 1] [i_8] [i_9])), (max((arr_27 [i_2] [i_9 + 1] [i_7 + 1] [i_8] [i_9]), (((/* implicit */unsigned long long int) arr_25 [i_8] [i_9 - 2] [i_7 - 1] [i_8] [i_7 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
