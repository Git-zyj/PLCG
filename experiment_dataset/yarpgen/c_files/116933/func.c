/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116933
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_19))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) var_10);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_3] [4U] [i_3] [4U] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1])) ? ((~(8944620120691182748ULL))) : (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((var_13) - (3693233727U)))))))))));
                                arr_16 [i_1] [i_2 + 1] [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_13 [i_1] [i_1] [(unsigned short)13])))))), (((3474619084968712822ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (signed char)9);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_24 [i_1] [i_1] [8U] = ((((/* implicit */_Bool) arr_6 [i_0 + 2] [0] [i_0])) || (((/* implicit */_Bool) min((2433757428U), (((/* implicit */unsigned int) (unsigned char)121))))));
                                arr_25 [i_1] [i_5] [i_5] [i_5] [i_5] [i_5] [(signed char)7] = ((/* implicit */short) max((((/* implicit */unsigned char) ((signed char) max((854671761), (1657062663))))), (min((max(((unsigned char)131), (((/* implicit */unsigned char) (signed char)33)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 7984257757731530731LL)) && (((/* implicit */_Bool) (short)-30155)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
