/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131733
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_15 -= ((signed char) min((min((((/* implicit */unsigned int) (unsigned char)129)), (3195077867U))), (min((((/* implicit */unsigned int) (short)606)), (arr_2 [(unsigned short)7] [i_1])))));
                            var_16 = ((/* implicit */unsigned long long int) (unsigned short)1661);
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-28062)), (((unsigned short) arr_4 [i_0] [i_0] [i_0])))))));
                            var_18 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) ((unsigned short) (unsigned char)130))), (arr_8 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1])))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */signed char) ((min((arr_6 [i_1] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)17898)))) / (min((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [i_1] [(_Bool)1] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned int) (signed char)-127);
    var_21 = var_14;
}
