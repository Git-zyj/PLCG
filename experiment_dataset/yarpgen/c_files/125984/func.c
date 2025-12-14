/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125984
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_5 [i_0] [8U] [(unsigned short)4]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_4])) ? (-1454796440088778264LL) : (arr_0 [i_1 - 1] [i_4])))), (var_8)))));
                                arr_13 [i_0] [i_0] [i_0] [5U] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_4])) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) > (max((arr_9 [i_1 + 1] [i_0 + 1]), (arr_9 [i_1 - 2] [i_0 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((short) (unsigned short)32195));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                arr_19 [10LL] = ((/* implicit */_Bool) (~(4294967295U)));
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 14; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) (short)-26265))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6067))) / (3LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned int) var_0))))) : (var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
}
