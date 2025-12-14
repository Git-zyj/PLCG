/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139825
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
    var_19 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = min((max((((/* implicit */long long int) ((_Bool) var_14))), (arr_1 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_16))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        var_20 *= ((/* implicit */short) arr_1 [0U]);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) -800443299814436400LL);
                    }
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        arr_13 [(unsigned short)14] [6LL] [i_4] |= ((/* implicit */short) (~(arr_1 [0])));
                        var_21 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_4 [i_4 + 1])), (var_14))), (((/* implicit */long long int) var_2))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2] [i_5]))));
                            var_23 = ((/* implicit */signed char) min((arr_8 [i_0] [5ULL] [i_2] [i_0] [i_5]), ((~(arr_11 [i_4 + 1] [i_4] [i_4] [i_4])))));
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_4 - 1] [i_4 + 2] [i_4])))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_25 -= ((/* implicit */short) var_11);
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */short) arr_16 [i_0] [i_1] [i_0]);
                            arr_19 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_6])) ? (min((((/* implicit */long long int) arr_17 [(unsigned char)6] [i_4 + 1] [i_4] [i_4 + 2] [i_4])), (arr_11 [i_0] [i_1] [i_2] [i_0]))) : (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_18)), (1483549213U))))))));
                        }
                    }
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (0ULL)));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) ((unsigned int) max((268435455), (((/* implicit */int) (_Bool)1)))));
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_14 [i_0] [10ULL])));
        var_27 = ((((/* implicit */_Bool) ((unsigned short) min((1881476161), (((/* implicit */int) (signed char)-109)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44334))))) : (8738727546348345455ULL));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) arr_4 [(signed char)11])))) % (-268435455))))))));
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6648)) ? (2141045497) : (-1904519570)))))));
    }
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) > (min((((((/* implicit */_Bool) (unsigned char)22)) ? (arr_25 [i_8]) : (arr_25 [i_8]))), (((((/* implicit */_Bool) arr_25 [i_8])) ? (arr_25 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
        var_30 = ((/* implicit */short) arr_25 [i_8]);
        arr_28 [13] [13] |= ((/* implicit */long long int) ((_Bool) ((arr_26 [i_8] [i_8]) ? (((/* implicit */int) arr_26 [i_8] [i_8])) : (((/* implicit */int) arr_26 [i_8] [i_8])))));
    }
}
