/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139548
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
    var_14 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-26))));
    var_15 |= 8636553818490354716LL;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_1 - 1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1] [i_2]))))) > (min((((/* implicit */long long int) var_7)), (arr_7 [i_3] [i_1 + 2] [i_1 + 2])))));
                            var_16 = ((/* implicit */long long int) arr_0 [i_2]);
                            arr_11 [0U] [i_2] [i_1 + 1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (6727781914951616190LL) : (-6727781914951616190LL)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) -6727781914951616190LL);
            }
        } 
    } 
}
