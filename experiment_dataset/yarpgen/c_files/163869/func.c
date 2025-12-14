/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163869
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
    var_10 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((short) min(((-(((/* implicit */int) (signed char)56)))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_4])))));
                                arr_14 [16LL] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-10516)) || (((/* implicit */_Bool) arr_12 [i_4 - 1] [i_3 + 3] [i_2] [i_1] [5U])))))));
                                arr_15 [12U] [(short)20] [i_1] [i_2] [i_1] [22ULL] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_3] [i_3 + 1] [i_0 - 1] [i_0])) <= (10451861755755264670ULL)))));
                                var_11 = arr_1 [i_0];
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_5] |= ((/* implicit */unsigned char) 2176818109U);
                    var_12 = (i_5 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)81)) << (((/* implicit */int) arr_16 [i_5])))) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_17 [i_0 + 2] [i_0 + 2] [i_0 - 1])), (var_0))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)81)) << (((((/* implicit */int) arr_16 [i_5])) - (92))))) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_17 [i_0 + 2] [i_0 + 2] [i_0 - 1])), (var_0)))))));
                    arr_19 [i_0] [i_0] [i_5] = arr_12 [i_0] [i_0] [i_1] [i_5] [i_5];
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_24 [i_6 + 1] [(signed char)6] [7U] = ((/* implicit */signed char) 0ULL);
                    var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)39))))), ((~(var_3)))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
            }
        } 
    } 
}
