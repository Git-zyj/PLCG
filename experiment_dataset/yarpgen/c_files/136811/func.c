/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136811
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (6754316514848373089LL))))));
                            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))));
                            arr_10 [i_2] [i_2] [(unsigned short)15] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_4)))))))) ? (max((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) max((var_2), (var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_9)))))));
                            arr_11 [i_0] = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */long long int) ((short) ((unsigned short) var_1)));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_3)), (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (((long long int) var_4))));
                arr_13 [i_0] [(unsigned char)15] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_3)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) ((unsigned char) min((((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (var_3)))) ? (min((var_0), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))))))));
    }
}
