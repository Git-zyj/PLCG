/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105594
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) * (18446744073709551615ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((1201848293) << (((((/* implicit */int) (unsigned char)229)) - (229)))))));
                            var_17 = ((/* implicit */short) (-(var_2)));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0 + 2] [(unsigned char)9] [i_2]))))), (((((/* implicit */_Bool) (short)25469)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (480681003U))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -1062381671)) - ((-(3844326746U))))))));
                                arr_18 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_0 + 2] [i_0]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 3])) : (max((((/* implicit */unsigned long long int) var_12)), (arr_16 [i_0] [i_6] [i_4] [i_5] [i_6] [i_5] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
