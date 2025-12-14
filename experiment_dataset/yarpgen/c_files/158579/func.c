/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158579
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2]))));
                    arr_11 [(signed char)18] [i_2] &= ((/* implicit */signed char) (((-(((/* implicit */int) arr_4 [i_1 + 1] [0U] [i_1 - 2])))) - ((-(223764579)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_15);
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) min((((/* implicit */int) (short)-9634)), (223764568)))) ? (var_14) : (((/* implicit */unsigned long long int) var_0))))));
    var_20 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 10330581078632897314ULL))))))) - (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((signed char) min((arr_9 [i_3 + 2]), (((/* implicit */unsigned char) (_Bool)1))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) arr_8 [i_3 - 1] [i_3] [i_3]))), (1524865984U)))) && (((((/* implicit */_Bool) 2138108585U)) && (((/* implicit */_Bool) ((signed char) arr_7 [i_6] [i_5] [i_4] [i_3]))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_3 + 3]))) ? (arr_18 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8620)))));
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                            {
                                var_24 *= ((/* implicit */short) 4834165523937897169ULL);
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_16 [i_4] [(unsigned char)15] [i_4]))))))));
                                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7640)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56933)))))) ? (((/* implicit */int) (short)-7640)) : (((/* implicit */int) (unsigned char)128))));
                                var_27 = ((/* implicit */long long int) (+(822215170)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
