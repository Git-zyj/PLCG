/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106107
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned char)50))));
    var_13 -= ((/* implicit */signed char) min((((long long int) ((var_4) > (((/* implicit */int) (unsigned char)201))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)101)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)205)) != (((/* implicit */int) (signed char)-101)))))) < (min((((/* implicit */unsigned long long int) 4064650401946001620LL)), (1369379663787902510ULL)))))) << (((4064650401946001612LL) - (4064650401946001588LL)))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 3; i_4 < 11; i_4 += 1) /* same iter space */
                        {
                            var_14 -= ((/* implicit */unsigned int) arr_3 [i_0 - 1] [2] [i_4 - 2]);
                            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-4064650401946001612LL)))) ? (4391789164327541464LL) : (arr_7 [i_2] [0ULL])))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 3; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 3])) * (((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 3])))))));
                        }
                        arr_17 [(signed char)7] [i_1] [i_3] [i_0 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 3]) / (((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2])))) : (var_6)));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 0ULL))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) ((signed char) 856371614U));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_6]) > (((/* implicit */unsigned int) arr_2 [i_0])))))));
                    }
                    arr_22 [i_0] = ((/* implicit */short) min((2973502379948773647ULL), (((/* implicit */unsigned long long int) (short)-15159))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1]) == (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                var_20 -= min((((/* implicit */unsigned int) min((arr_27 [i_7] [i_7] [i_7]), (arr_27 [i_7] [i_8] [i_7])))), (((4294967290U) | (((/* implicit */unsigned int) arr_27 [i_7] [i_7] [i_7])))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1894095904152380701LL))))) * (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                            arr_34 [i_7] [i_7] [i_7] [i_10] &= ((/* implicit */short) arr_27 [i_8] [i_8] [i_9]);
                            arr_35 [4LL] [i_8] [4LL] [4LL] [4LL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967281U)) ? (670237211) : (((/* implicit */int) (_Bool)0))))), ((~(-7817405079988515462LL)))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)3)), (6U)))) : (arr_29 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_11 = 3; i_11 < 14; i_11 += 1) 
                            {
                                arr_39 [i_9] [i_11] [i_9] [i_10] [i_11] [i_8] = ((/* implicit */_Bool) 88313093144154684LL);
                                arr_40 [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -88313093144154684LL)) ? (arr_38 [i_7] [i_8] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                                var_22 = ((/* implicit */unsigned int) ((-4064650401946001612LL) & (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_7] [i_7] [i_8] [i_8] [0ULL] [0LL] [i_7])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
