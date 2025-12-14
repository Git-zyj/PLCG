/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179600
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
    var_17 -= ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) ((unsigned char) (unsigned char)112))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */signed char) (unsigned char)143);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) 0U)));
                    arr_8 [i_2] [1U] [(unsigned char)11] = ((unsigned char) ((unsigned int) (unsigned char)112));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) 4714097838780491631ULL)));
                    var_19 = ((/* implicit */long long int) 4294967295U);
                }
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)144)))));
                arr_12 [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) ((int) ((_Bool) (unsigned short)10487)));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_20 [3] [i_4] [i_4] [3] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) 4714097838780491631ULL)));
                                arr_21 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) -2020244745);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
