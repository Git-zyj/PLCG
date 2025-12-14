/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130651
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
    var_10 = ((/* implicit */unsigned char) (signed char)127);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 4880185750262867952ULL)) && (((/* implicit */_Bool) (unsigned short)4080)))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (unsigned char)83))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))) : ((+(((((/* implicit */_Bool) var_1)) ? (arr_8 [i_1] [(unsigned char)0] [8U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))));
                            arr_10 [i_0] [1U] [i_2] [0] = ((/* implicit */int) (!(((/* implicit */_Bool) 6442400678939659010LL))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_3 [i_0]) : (arr_3 [i_1]))), (((arr_3 [i_5]) - (arr_3 [i_0])))));
                                var_12 |= ((/* implicit */unsigned long long int) ((var_0) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4065)) != (((/* implicit */int) min((var_7), ((unsigned short)61455))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) 1677212611U);
    var_14 = ((/* implicit */unsigned char) var_2);
}
