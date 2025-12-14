/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126529
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((995041729U) - (995041711U)))))), (((995041729U) + (((/* implicit */unsigned int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)45);
                            arr_10 [i_3] [i_3] &= ((/* implicit */long long int) var_6);
                            arr_11 [i_0] [i_1 - 2] [i_3] [i_3] |= ((/* implicit */unsigned long long int) var_4);
                            arr_12 [i_0] [i_1] = ((/* implicit */int) arr_5 [i_1]);
                        }
                    } 
                } 
                arr_13 [i_0] [(signed char)6] &= (((_Bool)1) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned short)3406)));
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
            }
        } 
    } 
    var_11 = ((/* implicit */short) -1670497316033510021LL);
    var_12 = ((/* implicit */unsigned int) var_2);
    var_13 &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)210))))));
}
