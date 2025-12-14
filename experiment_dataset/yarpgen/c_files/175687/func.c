/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175687
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
    var_12 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 402636672U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1700960044U))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((long long int) ((13608890468097624210ULL) >> (((var_11) + (140251677)))))))));
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((13608890468097624223ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))) : (max((1188376720955617669LL), (((/* implicit */long long int) 3296167464U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_15 [9LL] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((-(-1)))))), ((~(arr_14 [i_2] [i_3])))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_23 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_19 [i_2] [i_2] [i_2] [i_2]), (var_11)))) ? (((/* implicit */int) arr_13 [i_3] [i_5])) : ((+(((/* implicit */int) var_2)))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_17 [i_4] [1] [i_4]), (arr_17 [i_3] [i_3] [(_Bool)1])))) ? ((-(((/* implicit */int) arr_6 [12] [i_2] [12])))) : ((+(arr_17 [i_2] [(unsigned short)0] [15U])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned short) var_11);
                                arr_35 [i_8] [i_8] [i_7] [i_6] [i_6] [i_3] [i_2] = ((/* implicit */_Bool) var_9);
                                var_17 *= ((/* implicit */short) (~(((var_1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                                arr_36 [i_8] [i_7] [i_6] [i_3] [i_2] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_5)), (max((var_3), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)9)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) < ((+(var_0))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
