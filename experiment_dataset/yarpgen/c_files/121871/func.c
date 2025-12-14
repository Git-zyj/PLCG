/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121871
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-((+(((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_16))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_3]);
                            arr_11 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) ((arr_7 [i_0] [i_1] [i_2] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [(short)5])))))))))) * (max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_3])) == (((/* implicit */int) (short)25179))))), (arr_1 [(unsigned short)9]))));
                            var_19 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (+(arr_7 [i_0] [i_1] [i_2] [i_3])))))));
                            var_20 &= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_0] [5U] [i_0])))) & (((/* implicit */int) arr_6 [(unsigned char)6] [i_1]))));
                        }
                    } 
                } 
                var_21 = (unsigned short)18054;
            }
        } 
    } 
}
