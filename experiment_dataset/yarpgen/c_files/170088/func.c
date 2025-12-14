/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170088
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
    var_10 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)30)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)88)) : (var_4))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-96)) ? (-291539942) : (((/* implicit */int) (unsigned short)64979)))) / (((var_0) - (((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_0]))))))) < (((long long int) (signed char)-17))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1195388044)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-27))));
                                var_12 = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) : (633511010U))), (((/* implicit */unsigned int) (short)8577))))) / (min((((/* implicit */long long int) (_Bool)0)), (((0LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)538)))))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) | (min((0ULL), (((/* implicit */unsigned long long int) (signed char)14))))))) ? (((((/* implicit */_Bool) -886497618)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_3))));
}
