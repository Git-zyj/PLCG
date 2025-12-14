/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150924
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
    var_11 &= ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) % (var_3))), (((/* implicit */unsigned long long int) min((2252088819U), (1U)))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */unsigned long long int) ((2168718052U) == (2177625143U)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((long long int) min((((/* implicit */int) (_Bool)1)), (296312576)))) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_0] [(unsigned short)16] &= ((/* implicit */unsigned long long int) arr_12 [(unsigned short)7] [(unsigned short)7]);
                        }
                    } 
                } 
                arr_15 [18] [i_1] &= ((/* implicit */int) max((arr_9 [i_0] [i_0] [(unsigned char)2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [(short)18] [i_1] [i_1]) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_1])) : (var_1)))) ? (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_0] [i_0])), (var_8)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) == (((/* implicit */int) var_7))))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] [(unsigned short)10] [i_4 + 2] [4ULL] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)896))));
                            arr_22 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */short) (_Bool)1);
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 19535333U)) ? (-296312564) : (((/* implicit */int) (unsigned short)43964))))) ? (((/* implicit */long long int) ((((arr_8 [i_0] [i_1] [i_0]) ? (2591356987U) : (((/* implicit */unsigned int) 296312576)))) & (((/* implicit */unsigned int) var_5))))) : (((long long int) 18446744073709551610ULL))));
                            var_14 = ((/* implicit */int) (_Bool)1);
                            var_15 = ((((arr_3 [i_0 + 1] [i_4 + 2] [i_4 + 2]) && (arr_3 [i_0 + 1] [i_4 + 2] [i_4 - 2]))) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_7)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
