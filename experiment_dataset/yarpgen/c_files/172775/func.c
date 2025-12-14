/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172775
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~((((-(747749184))) | (((/* implicit */int) var_8))))));
                    arr_9 [i_0] [i_1] [i_0] &= ((/* implicit */long long int) var_13);
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2])), (var_10)))) ? (max((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (1546216510U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_1 + 3]), (arr_7 [i_1 + 4])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((-545002034) / (((/* implicit */int) (unsigned char)254))));
                        var_17 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_3 [i_2] [i_3]));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) var_7);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            arr_16 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) arr_5 [i_3]);
                            var_18 = ((((/* implicit */int) arr_4 [i_4 - 1] [i_1 + 1])) >> (2U));
                            arr_17 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 2U))) ? (((/* implicit */long long int) var_2)) : (-1LL)));
                            arr_18 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */int) ((unsigned int) 6082171462854929309LL));
                        }
                    }
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 1) 
        {
            {
                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_23 [i_5])) ? (var_7) : (18446744073709551615ULL)))))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)4))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) ((unsigned short) var_6))) - (12945))))))));
                                arr_34 [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)48177)) : (((/* implicit */int) arr_7 [i_5]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
