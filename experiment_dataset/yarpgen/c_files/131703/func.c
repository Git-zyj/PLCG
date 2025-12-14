/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131703
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 0ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned int) 963738334149363558LL));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) var_11);
                                var_17 = ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [(unsigned short)3]);
                                arr_15 [(signed char)10] [i_0] [i_2] [i_3] = (i_2 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((arr_12 [i_4] [i_2] [i_2] [i_1] [i_1 - 1]) - (913703852U)))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((arr_12 [i_4] [i_2] [i_2] [i_1] [i_1 - 1]) - (913703852U))) - (3152141907U))))));
                                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) 18014398501093376LL))))));
                                arr_16 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */signed char) -164797510);
                            }
                        } 
                    } 
                    arr_17 [i_1] |= ((/* implicit */short) var_11);
                    arr_18 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_14)))))));
                }
            } 
        } 
    }
    var_19 -= ((/* implicit */_Bool) var_2);
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((963738334149363530LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51768))) < (0ULL)))))))), (var_3)));
}
