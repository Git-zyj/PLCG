/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1565
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-13372)) == ((-((+(((/* implicit */int) var_8))))))));
                    var_12 = ((/* implicit */short) ((unsigned char) min((min((((/* implicit */short) (signed char)88)), ((short)13371))), (((/* implicit */short) (_Bool)0)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)-13372)) <= (((/* implicit */int) var_8)))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2] [i_2 - 1] [i_2 + 3] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 3] [i_2]))));
                    }
                    for (short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_15 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL)));
                        var_16 = max((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) -173344415)))))), (((short) (unsigned short)64395)));
                        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_14 [3] [i_2] [(signed char)3] [(signed char)9] [i_0] [i_0]), (((/* implicit */short) arr_1 [i_0]))))) ? (((/* implicit */int) max(((signed char)13), (((/* implicit */signed char) var_5))))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) var_8)))))), (((/* implicit */int) var_9))));
                        var_18 = (!(((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_4]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) (~(var_0)));
                            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)64395)) ? ((~(((/* implicit */int) (short)13372)))) : (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (short)-13352)) > (((/* implicit */int) (_Bool)1))));
                        }
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-28)), (0ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 24; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 2; i_7 < 24; i_7 += 4) 
        {
            arr_23 [i_6] [i_7] [i_6] &= ((/* implicit */signed char) ((((unsigned long long int) var_5)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 + 1])))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) (short)-12746)) : (((((/* implicit */int) arr_21 [i_7])) / (((/* implicit */int) (signed char)-35))))));
        }
        var_25 |= ((((/* implicit */_Bool) 13466939152517593306ULL)) ? (((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (signed char)-63)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-71)) : (0))));
    }
}
