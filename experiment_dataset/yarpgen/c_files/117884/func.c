/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117884
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (((((~(((/* implicit */int) (short)6871)))) + (2147483647))) << ((((((-((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))) + (6194191310722623782LL))) - (24LL)))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] = (short)-6872;
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))) ? (((arr_0 [i_0] [i_1]) * (((/* implicit */unsigned int) -1611469098)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))))))));
                var_20 = ((/* implicit */unsigned char) max((((long long int) ((((/* implicit */int) (short)6871)) * (((/* implicit */int) (short)-6872))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6876)) ? (-1561744523) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
                arr_12 [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1]);
                var_21 ^= ((/* implicit */signed char) ((unsigned long long int) (short)6844));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 333319690))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((unsigned char) max((min((891903627), (((/* implicit */int) var_3)))), ((-(((/* implicit */int) var_10)))))))));
}
