/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132314
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
    var_10 = ((/* implicit */int) min((var_2), (7787074794066694195LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */int) arr_0 [i_0]);
                            arr_12 [i_3] [i_2] [i_0] |= ((/* implicit */unsigned char) (unsigned short)13587);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_12 *= ((/* implicit */signed char) max((((/* implicit */int) min(((unsigned short)21127), (((/* implicit */unsigned short) arr_1 [i_1 - 2] [i_1 - 1]))))), (-490874025)));
                            var_13 -= ((/* implicit */unsigned int) arr_9 [i_4] [i_5] [i_4] [i_5] [i_4] [12]);
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) 2745914248740754664LL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
