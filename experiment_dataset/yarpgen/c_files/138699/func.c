/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138699
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */signed char) var_5);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 + 2] [i_0] [i_4] = var_7;
                                var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_5 [i_4] [i_3] [i_0])) ^ (((/* implicit */int) arr_5 [i_3] [i_1 + 1] [i_0]))))));
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [(unsigned char)11] [i_2])))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1])))) & (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_12 [i_3] [i_4])))))))));
                                arr_14 [11] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_11 [i_1] [i_3] [i_4]))))))) ? (((var_10) << ((((~(((/* implicit */int) var_5)))) + (89))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (arr_8 [i_2 + 2] [i_2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            {
                arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) arr_17 [i_6 - 1])), (arr_15 [i_5] [i_6])))));
                arr_20 [i_5] [i_6] [i_6] = (+(((((((/* implicit */long long int) arr_16 [i_5] [10ULL])) + (var_16))) + (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                var_22 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_14)))))) ? (arr_15 [i_5] [i_5]) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [14ULL] [i_5]))) + (((arr_15 [i_5] [i_6]) >> (((var_0) - (6744598698988134767LL)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 4; i_7 < 7; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */long long int) arr_18 [i_9 + 2] [i_7] [i_7])), ((-(((((/* implicit */_Bool) arr_3 [i_7])) ? (var_0) : (((/* implicit */long long int) arr_16 [20U] [20U])))))))))));
                    var_24 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_7] [i_7 + 2] [i_7])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9 - 1])))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((((((/* implicit */_Bool) arr_18 [i_7 + 4] [i_8] [i_9])) ? (arr_15 [4U] [4U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_9 + 2]))))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_8])) ^ (((/* implicit */int) arr_8 [i_7] [i_8]))))))))))));
                    var_26 = ((/* implicit */int) var_13);
                    var_27 -= ((/* implicit */short) max((((/* implicit */long long int) ((arr_15 [(short)8] [i_9 + 1]) % (arr_15 [(_Bool)0] [i_9 + 2])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_15 [(signed char)10] [i_9 - 1])) : (var_4)))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_9);
}
