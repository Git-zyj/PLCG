/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143308
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_2))))));
                            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_1);
                            var_13 = ((/* implicit */short) var_1);
                            var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_3]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [11]))) * (min(((((_Bool)1) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_5))))))))));
                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned short) (!(arr_16 [i_4 + 1] [2U])));
                    arr_21 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((min((11204767756786080774ULL), (((/* implicit */unsigned long long int) arr_9 [i_4 - 1] [i_5] [i_4 - 1] [i_4])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_28 [i_4 - 1] [i_5] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_25 [2U] [i_5] [i_6] [i_7] [i_8] [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9))), (((/* implicit */unsigned int) ((short) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) == (((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */unsigned char) max(((~(var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) -1))), (arr_9 [i_4 + 1] [i_6] [(short)6] [i_8]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (-965770221) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            arr_40 [i_12] [i_9] [i_9] [i_9] = ((/* implicit */short) min((((6636365441069927382ULL) ^ (arr_33 [i_11 + 1] [i_11] [i_11 + 2]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_39 [i_11 + 1] [i_11] [i_11] [i_11])))));
                            arr_41 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned int) (short)16188)), (min((((/* implicit */unsigned int) ((signed char) (_Bool)0))), (arr_29 [i_9])))));
                        }
                    } 
                } 
                arr_42 [i_9] [i_10] [i_10] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_9] [i_9])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_35 [i_9] [i_9] [(short)12])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) arr_29 [i_9]))))));
                arr_43 [i_9] = ((/* implicit */unsigned char) var_1);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_0);
}
