/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103105
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_18 = (((((-(arr_3 [i_1 + 1] [i_1 + 1] [(unsigned short)1]))) + (2147483647))) >> ((+(((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])) / (3932319652U))))));
                        var_19 = ((/* implicit */unsigned int) max((min((((/* implicit */short) arr_4 [i_0] [i_0])), (var_11))), (((/* implicit */short) arr_4 [i_0] [i_3]))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((3932319652U) >> (((362647644U) - (362647641U))))))));
        var_20 = ((/* implicit */signed char) 362647644U);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 4; i_6 < 16; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) (~(((((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (145))) - (17))))) / (((/* implicit */int) var_2))))));
                        var_22 = ((/* implicit */unsigned int) (!(((_Bool) arr_12 [i_4] [i_6]))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_28 [(short)0] |= ((/* implicit */unsigned char) ((3932319652U) / (362647644U)));
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_8] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 362647667U)) || (((/* implicit */_Bool) (short)27106)))))) : (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (arr_22 [i_4] [i_7]))))) : (3932319654U)))));
                            var_23 = ((/* implicit */unsigned char) var_2);
                            arr_30 [11] [(_Bool)1] [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3932319652U)) ? (arr_25 [i_6 + 2] [i_6 + 1]) : (((/* implicit */int) arr_14 [i_6 - 3] [i_6 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) (short)27106)) : (arr_25 [i_6 - 4] [i_6 - 4]))))));
                            arr_31 [i_4] [0] [i_6] [i_7] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-27103))) / (3932319651U)))));
                        }
                        arr_32 [i_4] [i_4] [(unsigned char)15] [i_4] [(unsigned char)12] = var_10;
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_4] [(signed char)4] [i_4] [i_4] [i_4])) + (2147483647))) << (((((((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4])) + (18931))) - (3))))))));
    }
    var_25 = var_14;
    var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((var_10), (((/* implicit */signed char) var_13))))) + (2147483647))) << (((((/* implicit */int) var_3)) - (9)))));
}
