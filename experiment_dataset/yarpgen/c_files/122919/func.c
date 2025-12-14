/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122919
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
    var_18 = (signed char)-6;
    var_19 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (843491516259383617LL) : (562949953421311LL))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 ^= ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 4] [12] [i_1])) ? (((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 4] [i_1 + 4] [(short)10])) + (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_2] [(unsigned char)7])))) : ((-(((/* implicit */int) arr_5 [(unsigned short)4] [i_1 - 1] [i_1 - 1] [8LL])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (14870570884684979493ULL))))));
                                var_22 = ((/* implicit */_Bool) (-(17336189336096045598ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
