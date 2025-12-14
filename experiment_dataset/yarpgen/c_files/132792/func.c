/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132792
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)41))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) var_3);
                                arr_13 [i_4] [i_1] [i_1] [10U] = ((/* implicit */signed char) arr_12 [i_4] [i_4 + 1] [i_4 + 1] [i_3 - 1] [i_4] [i_4] [i_3 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min(((((~(arr_6 [i_5] [i_8] [7]))) / (max((-903780322750638098LL), (((/* implicit */long long int) arr_7 [i_5])))))), (((/* implicit */long long int) ((short) arr_15 [i_6 - 1] [i_6 + 1])))));
                                arr_26 [i_5] [i_6 - 1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_8] [(unsigned short)1] [i_6 + 1])))))));
                                arr_27 [i_5] [i_5] [4] [i_8] = ((/* implicit */unsigned long long int) max(((signed char)102), (((/* implicit */signed char) arr_2 [i_5]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((10878037792887896810ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                arr_35 [i_11] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [2LL] [i_7] [i_10])) ? (((((/* implicit */int) (unsigned char)105)) / (var_7))) : (((/* implicit */int) var_3))))), ((((-(13745495442247231570ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_15 [i_11] [i_11]))))))));
                                arr_36 [i_5] [i_5] [i_7] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) min((-5201975799683710390LL), (((/* implicit */long long int) (short)-22722))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            for (unsigned short i_14 = 2; i_14 < 10; i_14 += 2) 
            {
                {
                    arr_45 [i_12] = ((/* implicit */unsigned long long int) (short)-67);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            {
                                arr_52 [i_12 + 1] [i_12] [i_12] = ((/* implicit */unsigned int) arr_20 [i_12 + 2]);
                                arr_53 [i_12] [i_13] [(signed char)6] [i_15] [i_15] = ((/* implicit */unsigned char) max((7970493645567428651LL), (((/* implicit */long long int) 1787189647))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
