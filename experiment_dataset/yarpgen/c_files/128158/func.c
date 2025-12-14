/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128158
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
    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= ((((!(((/* implicit */_Bool) (signed char)74)))) ? (min((14573638938682307130ULL), (14573638938682307128ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_8 [(unsigned char)7] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
                            arr_9 [i_1 + 1] [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3873105135027244509ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18))))))) ? (((((/* implicit */_Bool) 14573638938682307112ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (min((((/* implicit */unsigned long long int) var_12)), (3873105135027244507ULL))))) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0 + 1] [i_1 + 1] [i_0 + 1] [(unsigned short)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(arr_14 [4U] [i_1]))), (3873105135027244478ULL)))) ? (((/* implicit */long long int) arr_15 [7] [7] [i_5 + 2])) : (var_2)));
                            arr_17 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14573638938682307130ULL))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (int i_7 = 4; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_8] [i_6] [i_0] = 14573638938682307089ULL;
                                arr_27 [(unsigned short)2] [(unsigned short)2] [i_6] [i_7 - 4] [i_7] = ((/* implicit */_Bool) 3873105135027244527ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_10);
}
