/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176561
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (var_4)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [i_1] [i_0]))))), (var_4))))));
                                var_10 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                                var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2]) : (arr_0 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3] [i_1]))) != (arr_4 [i_2] [i_3])))))));
                                var_12 &= ((/* implicit */_Bool) ((long long int) var_2));
                                var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) (short)21287);
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) var_5)) | (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0)))))))) ? (((/* implicit */long long int) ((arr_9 [i_0] [i_1]) / (((((/* implicit */_Bool) (unsigned short)26408)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))) : (arr_8 [i_0] [i_0] [i_1] [12LL] [i_1])));
                var_16 = 2099223427;
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)15935))))));
                arr_19 [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(var_4)))) + (((arr_5 [i_5] [(_Bool)1] [i_6]) << (((var_4) - (7271948739953825159LL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_3);
    var_19 += ((/* implicit */long long int) var_0);
}
