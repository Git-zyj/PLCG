/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185203
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= (+(((/* implicit */int) (unsigned char)85)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_9);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned short)24092)))))), (var_6)));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)97)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                            var_18 = ((/* implicit */long long int) max((((/* implicit */int) var_12)), ((-(((/* implicit */int) var_10))))));
                            var_19 = ((/* implicit */unsigned char) (-(294170037348575477ULL)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) & (var_9))), (((/* implicit */unsigned int) var_6))))), ((~((~(var_13)))))));
            }
        } 
    } 
}
