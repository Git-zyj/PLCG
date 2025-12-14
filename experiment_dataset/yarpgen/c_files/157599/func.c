/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157599
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_10 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))) : (((/* implicit */int) ((arr_7 [i_1 - 1] [i_0]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19761)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])) : (((/* implicit */int) (short)-19761))))))))));
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19787)))))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min((((arr_1 [i_1 - 1] [i_2]) ? (445368291366810925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_0])) <= (((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))))))));
                            }
                        } 
                    } 
                    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((((/* implicit */int) (unsigned short)19321)) + (((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_2] [i_1 + 2] [i_1])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)35)) ? (-1654020984799548807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    arr_14 [i_0] &= ((/* implicit */_Bool) ((unsigned short) ((_Bool) (short)-19761)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (short i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_26 [i_5] [i_5] [i_7] [i_8] [i_8] [i_9]), (arr_26 [i_5] [i_5] [i_7] [i_8] [i_9] [i_5])))) ? (((/* implicit */int) arr_26 [i_5] [i_6 + 2] [i_7] [i_8] [i_9] [i_9])) : (((((/* implicit */int) arr_26 [i_9] [i_8] [i_7] [i_7] [i_6] [i_5])) | (((/* implicit */int) arr_26 [i_5] [i_5] [18U] [(signed char)9] [i_8] [18U]))))));
                                var_15 ^= (+(((/* implicit */int) var_4)));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)3477)) < (1120751215))))) + (1071666521637484068ULL)))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
}
