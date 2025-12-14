/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163861
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [1ULL] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) | (((((/* implicit */_Bool) (unsigned short)45664)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_13))))));
                    arr_10 [i_2] = ((/* implicit */long long int) ((arr_0 [i_0]) <= (arr_0 [i_1])));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) 0U);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (signed char)104))));
                        var_16 = ((/* implicit */int) var_10);
                        arr_16 [i_2] = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned char)14] [i_2] [(unsigned short)6] [i_0])) || (((/* implicit */_Bool) arr_6 [i_3]))))));
                    }
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned short) var_14);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_31 [i_0] [(signed char)9] &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 1661767568)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16527))) : (arr_24 [i_4] [i_4]))));
                                arr_32 [i_6] [i_4] [(signed char)11] [i_6] [i_7] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_4] [i_5] [i_4 + 1])))) ? (14246108156850883372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_4 + 1] [i_0] [i_0])))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((unsigned short) var_12))))))) * ((-(((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
    var_20 = ((/* implicit */int) var_7);
}
