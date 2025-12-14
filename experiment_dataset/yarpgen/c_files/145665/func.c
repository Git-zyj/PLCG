/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145665
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */signed char) (unsigned short)55605);
                                arr_15 [i_1] &= ((/* implicit */short) ((int) ((((arr_5 [i_0] [i_1] [i_2]) / (((/* implicit */int) (short)-766)))) / (((arr_5 [i_3] [i_3] [10LL]) / (((/* implicit */int) arr_6 [i_3] [i_3])))))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */long long int) min((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_1])))), (((/* implicit */unsigned short) (unsigned char)127))));
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_5 + 1] [i_0] = ((/* implicit */unsigned int) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((_Bool) arr_16 [i_0] [i_6])) || (((/* implicit */_Bool) arr_11 [i_5] [i_5 - 1] [i_5] [i_0])))))) : (min((min((((/* implicit */long long int) (short)1)), (3214927985984650445LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_6])))))))));
                            var_13 = ((long long int) (unsigned short)47639);
                            arr_21 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_5 + 2] [i_0] [i_6] [i_0]);
                            var_14 = ((/* implicit */_Bool) arr_9 [i_0] [i_0]);
                            arr_22 [(signed char)10] [i_0] [i_1] = ((/* implicit */_Bool) arr_7 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */long long int) ((unsigned int) var_3));
}
