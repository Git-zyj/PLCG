/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172625
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
    var_20 |= (~(var_0));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (2934066811658619355LL)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))))) / (((((/* implicit */_Bool) (signed char)-53)) ? (arr_7 [i_1 + 3] [i_1 - 3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                                arr_13 [i_0] [i_1] [i_1] [9LL] [i_3] [i_1] = ((/* implicit */int) arr_7 [i_1] [i_1 - 3] [i_1]);
                                var_23 += ((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_0 [i_0 - 2]), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (var_2)))))) / (((((/* implicit */long long int) var_0)) & (arr_12 [i_1] [i_1 + 3] [i_2] [10U] [i_4] [i_1 + 3] [i_1 - 2])))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned int) 2053525913)) : (var_5)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) : (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned short)58730))))));
                            var_26 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) & (arr_12 [i_5 + 2] [i_0 - 2] [i_1] [i_6] [i_1] [i_5 + 2] [i_1 - 4]))) - (156LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << (((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) & (arr_12 [i_5 + 2] [i_0 - 2] [i_1] [i_6] [i_1] [i_5 + 2] [i_1 - 4]))) - (156LL))) + (89LL))))));
                            arr_19 [i_0] [i_0 - 2] [10] [i_0 + 1] [i_1] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1792551944)) ? ((~(max((((/* implicit */unsigned int) var_0)), (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_28 = ((/* implicit */unsigned long long int) var_4);
}
