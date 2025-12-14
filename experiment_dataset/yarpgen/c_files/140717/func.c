/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140717
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
    var_12 = ((/* implicit */int) max((max((0ULL), (((/* implicit */unsigned long long int) -138883867233651041LL)))), (((/* implicit */unsigned long long int) ((unsigned int) var_2)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_8 [i_2] [i_1] [i_2])), (arr_6 [i_2 - 2] [i_2 + 1] [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3 - 1] [i_3])))))));
                            var_14 = (+(((/* implicit */int) arr_3 [i_0])));
                            var_15 = ((/* implicit */unsigned char) 3172350029U);
                            /* LoopSeq 1 */
                            for (int i_4 = 2; i_4 < 15; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) ((unsigned short) -670692248));
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) -3468933968247542947LL)) + (9ULL))), (((/* implicit */unsigned long long int) min((min((7213701056919889511LL), (((/* implicit */long long int) 392430757U)))), ((+(arr_13 [i_2 + 1] [i_4]))))))));
                                arr_16 [i_2] [i_2] [i_3] = (~(min((((unsigned int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])), (((/* implicit */unsigned int) min((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)1))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 4; i_5 < 15; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((unsigned int) arr_6 [i_0] [i_5 + 2] [i_5])) >> (((min((arr_6 [i_0] [i_5 + 2] [i_6]), (arr_6 [i_5] [i_5 - 4] [i_6]))) - (7136137799314495554LL)))));
                            arr_23 [i_0] [i_0] [i_5] [i_6] [i_1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)90)))))));
                            var_17 = ((/* implicit */long long int) 0ULL);
                        }
                    } 
                } 
                arr_24 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) min((-138883867233651039LL), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_18 = (((~((~(var_2))))) & (((((/* implicit */_Bool) max((var_11), (((/* implicit */short) (unsigned char)17))))) ? ((~(var_2))) : (((((/* implicit */int) (unsigned char)24)) ^ (((/* implicit */int) var_3)))))));
}
