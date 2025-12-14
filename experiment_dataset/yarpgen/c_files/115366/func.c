/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115366
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
    var_17 *= ((/* implicit */unsigned int) ((var_8) / (((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (short)-30012))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_3 - 2])) ? (0) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) == (arr_3 [i_2]))))))));
                                var_19 ^= ((/* implicit */_Bool) 1428284592534648114LL);
                                var_20 *= min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) arr_1 [i_4 - 1] [i_4])) : (((/* implicit */int) (unsigned char)78))))), (((long long int) arr_7 [i_1] [i_3] [i_4])))), (((/* implicit */long long int) arr_7 [i_4 - 1] [i_4 + 1] [i_3 - 3])));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_11 [i_0] [i_1]))));
                arr_13 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((var_1), (((/* implicit */long long int) arr_2 [i_1]))));
            }
        } 
    } 
}
