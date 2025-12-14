/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185875
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9057)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_12))))));
                        arr_11 [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (1108156416) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1839010159U)) ^ (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_1])) | (arr_8 [i_1] [i_2])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_3])) : (var_8)))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)2481)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12448))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -603203236)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_7)))))));
        var_15 += ((/* implicit */unsigned char) (~(-603203236)));
        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)185)) ? (((-603203236) - (max((var_4), (-773890827))))) : (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)44))))));
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((var_8) + (((/* implicit */unsigned long long int) (~(arr_14 [i_4 - 1]))))));
        var_19 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */int) arr_15 [i_4 + 1])), (arr_14 [i_4 + 1]))));
        var_20 ^= ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned int) ((773890827) + (((/* implicit */int) (_Bool)1))))) : (arr_17 [i_5])));
        arr_19 [i_5] = (short)14966;
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_5]))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_4))));
        }
        for (short i_7 = 3; i_7 < 22; i_7 += 4) 
        {
            var_23 = ((((/* implicit */_Bool) (signed char)-123)) ? (2108130275) : (((/* implicit */int) (unsigned short)0)));
            arr_27 [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_24 [i_5]) * (var_3)))) ? (var_0) : (((/* implicit */unsigned int) var_4))));
        }
        arr_28 [i_5] = ((/* implicit */signed char) arr_16 [i_5]);
    }
}
