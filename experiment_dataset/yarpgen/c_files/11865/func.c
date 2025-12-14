/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11865
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
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((max((((arr_8 [i_1] [i_1]) & (((/* implicit */int) (short)32767)))), (((/* implicit */int) arr_0 [i_1 - 2])))) / (((((((/* implicit */int) var_8)) | (((/* implicit */int) arr_0 [i_1])))) * (((/* implicit */int) (short)(-32767 - 1))))))))));
                                var_18 = ((/* implicit */int) min((var_18), (((((((((/* implicit */_Bool) arr_13 [i_4] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned char)20)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (short)32767)) : (arr_13 [i_0] [i_2] [i_0])))))) ? (max((arr_13 [i_0] [i_2] [i_2]), (arr_13 [i_2] [i_1] [i_4 + 2]))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_14)), (arr_10 [i_0] [i_1 + 1] [i_1] [i_4 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 4]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((unsigned char) (!(((/* implicit */_Bool) arr_5 [i_6]))))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_0] [i_0])) < (var_7))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 1312411141))));
                                var_21 = ((/* implicit */long long int) min((arr_6 [i_1] [i_0] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_5] [i_6])))))));
                                arr_20 [i_6] [i_0] [6U] [i_1 + 1] [i_0] [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_3)), (2150091354U))), (((/* implicit */unsigned int) arr_11 [i_6 + 2]))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) max((-5), (((/* implicit */int) arr_11 [i_2])))))) ? (((/* implicit */int) ((arr_10 [i_0] [i_6 + 1] [i_0] [i_5]) >= (((/* implicit */unsigned long long int) var_9))))) : (((/* implicit */int) (signed char)80))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) && ((_Bool)0))))) == (var_14))) ? ((~(min((var_7), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
