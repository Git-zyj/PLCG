/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125679
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
    var_11 = ((/* implicit */unsigned char) ((unsigned long long int) max(((unsigned short)52067), (max(((unsigned short)52082), ((unsigned short)13495))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_0])))))));
                var_13 = ((/* implicit */unsigned char) arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((arr_0 [i_1 + 3]) - (arr_0 [i_1 + 1]))))));
                        var_15 = ((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_1]);
                        var_16 = ((/* implicit */int) (-(arr_0 [i_1 - 1])));
                        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)26359)) : (((/* implicit */int) arr_6 [i_2] [i_3])))) < (((/* implicit */int) arr_7 [i_3] [i_1 + 1] [i_3] [i_2 - 3] [i_2] [i_2 - 2]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_13 [i_0] [(unsigned char)5] [i_4] [i_4] [i_4] [15] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_2 - 2] [i_0])) & (((/* implicit */int) arr_8 [i_2 - 2] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                                var_18 &= ((/* implicit */int) (short)26359);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)48705))));
                    var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) (unsigned short)43738))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0]) << (((((/* implicit */int) var_2)) - (194)))))) ? (arr_5 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
                }
                var_22 = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (var_3)));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_3))));
}
