/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120738
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
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
    var_12 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) ((((/* implicit */_Bool) 576458553280167936ULL)) && (((/* implicit */_Bool) var_9))))))) < (((/* implicit */int) var_2))));
    var_13 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned char)250))));
    var_14 -= ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2])), (18446744073709551615ULL))))))), (var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]);
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((max((arr_5 [i_3] [i_1] [i_2]), (((/* implicit */int) (short)-1355)))) / (((/* implicit */int) arr_10 [i_1])))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3]))))) >= (((/* implicit */int) arr_12 [i_0] [4] [i_2] [i_3]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
