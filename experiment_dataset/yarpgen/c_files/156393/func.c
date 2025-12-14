/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156393
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) max((arr_0 [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned int) ((signed char) arr_0 [i_1 - 2] [i_1 - 1])))));
                var_10 += ((/* implicit */unsigned short) (-(arr_1 [i_0])));
            }
        } 
    } 
    var_11 += ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            {
                var_12 += ((/* implicit */unsigned int) var_8);
                var_13 = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_3 - 3] [i_2 + 1])))))));
                    arr_15 [i_4] [i_3] = ((/* implicit */unsigned int) var_4);
                    var_15 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64394)) > (((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */unsigned short) arr_16 [i_5] [i_3 - 3] [i_4] [i_5]);
                    }
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */long long int) var_4);
}
