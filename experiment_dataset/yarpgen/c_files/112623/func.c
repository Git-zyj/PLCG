/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112623
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
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 1])) ? (((((((/* implicit */_Bool) arr_2 [i_0])) ? (4030149667972726431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) >> (((((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1] [i_1])) - (97))))) : (min((((((/* implicit */_Bool) 14416594405736825170ULL)) ? (4030149667972726431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))))), (4030149667972726446ULL)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [11] [i_0] [i_0] [i_0] [8U] = ((/* implicit */unsigned short) 4030149667972726446ULL);
                                arr_14 [i_0] [i_1 + 1] [i_2] [i_2] [14] [i_1 + 1] = ((/* implicit */short) (unsigned char)196);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) 14416594405736825170ULL);
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_11 [1ULL] [i_1 - 1] [i_5] [i_1 - 1])) : (((/* implicit */int) var_6)))) <= (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_1 - 1])) : (((/* implicit */int) (unsigned char)251)))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [6U] [i_0] [6U] |= ((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1]);
                            }
                        } 
                    } 
                } 
                arr_22 [i_1] = ((((/* implicit */_Bool) max((arr_4 [i_1 - 2] [i_1 - 2] [i_1]), (arr_4 [i_1 + 1] [i_1 + 1] [(unsigned char)10])))) ? (max((1125112684159926138ULL), (((/* implicit */unsigned long long int) (unsigned char)4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 2] [13])) + (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [4LL]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) - (((/* implicit */int) var_6)))) / (var_1)));
    var_18 = ((/* implicit */short) max((max((1125112684159926138ULL), (((/* implicit */unsigned long long int) (unsigned char)12)))), (((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
}
