/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152871
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), ((_Bool)1)));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    var_15 -= ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2ULL]))))) <= (((/* implicit */unsigned long long int) arr_7 [(_Bool)1]))))), (var_7))))));
                var_17 &= ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((int) (signed char)-17)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_18 = ((/* implicit */short) arr_6 [i_1] [i_1]);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_3] [i_2 + 2] [i_3])) + (2147483647))) << (((((((/* implicit */int) arr_9 [i_1 - 2] [4] [i_1 + 2])) + (112))) - (24))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] = ((arr_8 [i_1] [i_1] [i_1] [i_1]) && ((!(((/* implicit */_Bool) (-(3635593326U)))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((arr_16 [i_1 - 3] [i_1 - 1] [i_2 - 2]) + (2147483647))) << (((arr_17 [i_1 + 2]) - (3752673848100058927ULL)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))) | (2945733302U)))));
                                var_21 *= ((((/* implicit */int) var_2)) << (((arr_17 [i_1 - 1]) - (3752673848100058916ULL))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) (signed char)-31);
                    var_23 = ((/* implicit */short) arr_13 [1LL] [i_4] [1LL] [i_2]);
                }
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    arr_21 [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_1] [i_2 - 2]))));
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 8; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_27 [0ULL] [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_28 [i_1] [i_2] [1ULL] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                                var_24 = ((/* implicit */unsigned char) arr_9 [i_1] [i_7] [(_Bool)1]);
                                var_25 = ((/* implicit */long long int) arr_17 [9U]);
                                arr_29 [0U] [4] [4] [0U] [i_9] &= ((/* implicit */int) arr_25 [i_1 - 3]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
