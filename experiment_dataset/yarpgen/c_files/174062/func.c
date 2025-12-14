/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174062
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-346551370) / (var_16)))) ? (((/* implicit */int) arr_5 [(signed char)6] [(signed char)6] [(signed char)6])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [(short)2] [i_1])) : (((/* implicit */int) var_4))))))) ? (((unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) < (((arr_3 [10ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = arr_12 [i_0] [i_0] [8U];
                                arr_16 [i_0] [i_2] [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-29930)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_21 = (+(((/* implicit */int) (signed char)127)));
                            arr_21 [i_0] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_19)), (var_9)))) * (((((/* implicit */int) arr_7 [i_6] [i_5])) * (((/* implicit */int) arr_9 [i_1] [4] [i_1] [0ULL]))))))) ? (-46064660) : (max((max((arr_4 [10ULL]), (arr_4 [i_6]))), ((-(arr_4 [i_6])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) var_14))) : ((-(((/* implicit */int) var_9))))))) : ((~(min((((/* implicit */unsigned int) (short)-29926)), (var_2)))))));
}
