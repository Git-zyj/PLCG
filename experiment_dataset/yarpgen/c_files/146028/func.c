/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146028
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) (((+(var_8))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))));
                        var_10 = ((/* implicit */unsigned char) (_Bool)0);
                        arr_10 [i_0] [i_0] [i_0] = 3288699235U;
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) 18446744073709551612ULL);
                    }
                    for (unsigned int i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        arr_14 [i_4] [i_4] [i_0] [9U] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_11 -= ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)1))))), (var_0)))));
                    }
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 608507623U)) ? (284393720U) : (((((/* implicit */_Bool) (signed char)32)) ? (924928870U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (min((((/* implicit */unsigned int) var_1)), (var_3)))));
                                var_14 = ((((/* implicit */int) min((var_1), (var_2)))) >= (((/* implicit */int) (!(var_2)))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [7U] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_27 [i_9] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                    var_15 = ((/* implicit */unsigned char) (signed char)101);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) 2265604178U);
        arr_28 [i_7] = ((3129090688U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)3)) ? (2869154865U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */unsigned int) ((((var_8) / (var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))));
    }
    var_18 = var_4;
}
