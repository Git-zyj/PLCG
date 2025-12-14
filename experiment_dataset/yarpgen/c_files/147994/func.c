/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147994
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_1] [(_Bool)1]))));
                var_18 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5))));
                var_19 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) * (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned int) (+((((-(0LL))) / (((/* implicit */long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) var_2))))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_6] [i_5] [i_5] [i_3] [(signed char)5] = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_2]);
                                var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)106))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_9 [i_4 - 3] [8] [i_5 + 1]))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((1485711675) | (((/* implicit */int) (short)-32739))))) > (((((var_15) > (3376364268559653149LL))) ? (((/* implicit */unsigned long long int) ((long long int) 4535471260722639895ULL))) : (7873510587373732480ULL)))));
                            }
                        } 
                    } 
                } 
                var_24 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6673264320928264618LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_2] [(signed char)16] [i_2])))) : (arr_5 [18])))) > (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 0LL)) : ((-(14500361342286628380ULL))))));
                var_25 = ((/* implicit */signed char) ((unsigned long long int) var_1));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_5);
    var_27 = ((/* implicit */unsigned long long int) var_12);
}
