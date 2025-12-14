/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160784
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_13 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (max((((/* implicit */long long int) (unsigned char)235)), ((+(-9223372036854775788LL)))))));
                            arr_11 [i_0] [i_0] [i_1] [i_3] [10LL] [i_3] = ((/* implicit */signed char) ((unsigned int) 1796824560904384239LL));
                            var_14 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) -397823715)) ? (397823704) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2] [i_3])))));
                            var_15 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) -397823715)) : (3484832111U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) -397823714))))))));
                        }
                    } 
                } 
                var_16 |= ((((/* implicit */_Bool) 35465847065542656LL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) -1796824560904384227LL)) ? (((/* implicit */int) (_Bool)1)) : (-397823720)))))) : (((/* implicit */int) ((unsigned char) arr_8 [i_1 + 1] [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (long long int i_5 = 1; i_5 < 11; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_17 = max((((long long int) arr_9 [i_4] [i_5] [i_4] [i_4] [i_8])), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) * (((/* implicit */int) var_5)))))))));
                                arr_22 [i_4] [i_5] [i_4] [i_7] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned char)79)) | (((/* implicit */int) arr_6 [i_10 - 1] [i_9 - 1] [i_5 + 1] [i_5 + 1])))) + (2147483647))) >> (((((arr_1 [i_9 + 2]) << (((arr_13 [i_9 + 2] [i_5 + 1]) - (678053716U))))) - (1397724654U)))));
                            var_19 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                var_20 |= ((/* implicit */long long int) max((-397823723), (-397823704)));
            }
        } 
    } 
}
