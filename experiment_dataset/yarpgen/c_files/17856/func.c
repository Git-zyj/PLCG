/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17856
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
    var_19 &= ((/* implicit */int) ((var_9) / (((/* implicit */unsigned long long int) var_5))));
    var_20 ^= ((/* implicit */unsigned short) var_13);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)149))))) * (((((/* implicit */_Bool) var_13)) ? (max((5266900092092238813LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                                arr_16 [18U] [i_1] [i_2] [i_3 + 1] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (134217727U));
                                arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0 - 4] [i_0 - 3])))) ? (((/* implicit */long long int) (~(arr_7 [i_0] [i_0 - 3] [i_3 - 1] [i_3 - 2])))) : (((arr_1 [i_0 + 1] [i_0 + 1]) << (((arr_1 [i_0 - 4] [i_0 + 1]) - (4926747540386488812LL)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1466969306)) | (16477482004762171764ULL)));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) -17))))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0 - 3] [i_0 - 3] [i_0])) ? (arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 3] [10]))) : (((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_10)))) / (max((1466969288), (2034814067)))))));
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_24 [i_5] = ((/* implicit */int) (_Bool)1);
        arr_25 [i_5] = ((/* implicit */int) var_7);
        arr_26 [i_5] = ((/* implicit */unsigned int) min(((-(-1))), (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
        arr_27 [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
        arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_23 [i_5]) : (arr_23 [i_5])))));
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        arr_31 [(signed char)10] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6]))) % (1969262068947379859ULL))) : (((/* implicit */unsigned long long int) (-(-7512410170807329177LL))))));
        arr_32 [i_6] [i_6] = ((/* implicit */short) 16477482004762171754ULL);
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        arr_35 [i_7] = ((/* implicit */_Bool) arr_3 [i_7 + 1] [i_7 + 1] [i_7 - 1]);
        arr_36 [i_7] = ((/* implicit */short) 16477482004762171757ULL);
        arr_37 [i_7] = ((/* implicit */unsigned int) arr_5 [(_Bool)1] [(unsigned short)5] [i_7]);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (var_11)));
    }
}
