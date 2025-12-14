/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18200
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (min(((~(var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]));
                                var_19 = ((/* implicit */int) arr_0 [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_20 -= min((((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_2] [i_0 + 1]))))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_2] [i_1] [i_1] [i_1])))) > ((-(arr_2 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = var_16;
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    var_22 = arr_12 [i_6];
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_25 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) arr_0 [i_5] [i_6])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9]))))))))) < (((((5859847290641267881ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) >> (((min((arr_21 [i_6] [i_6] [i_7] [i_8] [i_9 - 1] [i_9]), (arr_21 [i_9] [i_8] [i_8] [i_7] [i_6] [i_5]))) - (9042924523657879935ULL)))))));
                                arr_26 [i_5] [i_9] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)108)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
