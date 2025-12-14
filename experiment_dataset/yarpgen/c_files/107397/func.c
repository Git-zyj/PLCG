/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107397
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1024)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 = arr_9 [i_0] [i_0] [i_2] [i_3];
                            var_21 -= ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((((/* implicit */_Bool) 7618134841761223927ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (5875578049270125842ULL)))));
                            arr_10 [i_0] [i_1] = ((/* implicit */int) ((10828609231948327688ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40472)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_16) : (((/* implicit */unsigned int) arr_0 [i_1]))))) ^ (10828609231948327693ULL))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_18);
}
