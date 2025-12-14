/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109674
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
    var_15 = ((/* implicit */signed char) var_7);
    var_16 = (((-((-(((/* implicit */int) var_6)))))) ^ (((/* implicit */int) var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((min((arr_3 [i_0] [i_0]), (max((arr_3 [i_0] [i_1]), (var_12))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_17 = ((/* implicit */signed char) arr_3 [6LL] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((-5771237110912405264LL), (2110891924598766842LL)));
                                arr_20 [i_0] = ((/* implicit */signed char) ((_Bool) ((_Bool) arr_13 [i_1] [i_4] [i_5 + 1] [i_6])));
                                arr_21 [i_0] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7466024367504249987LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (1150713530U)));
                                arr_22 [i_4] = (signed char)-63;
                                var_18 += ((/* implicit */long long int) (+(arr_6 [i_6] [i_4] [i_4] [i_1] [i_0])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_30 [i_0] [i_1] [11U] [i_8]);
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((arr_25 [i_0] [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned long long int) (signed char)63))))))) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-52)))) + (((/* implicit */int) (signed char)14))))) : (arr_24 [i_9] [i_1] [i_1])));
                                var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_22 = ((/* implicit */signed char) ((long long int) arr_30 [i_8] [i_8] [i_8] [i_8]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)1830)), (((((/* implicit */_Bool) 9284424115672057067ULL)) ? ((((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 459990499))))));
                            var_24 = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) arr_23 [i_0] [i_0])));
                            var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((int) arr_29 [(unsigned short)7] [i_1] [(unsigned short)7] [i_1] [i_10] [i_11]))), (((unsigned long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) + (arr_9 [i_0] [i_0] [(unsigned char)2] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            {
                arr_41 [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(-2110891924598766836LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1809)) || (((/* implicit */_Bool) arr_5 [i_12] [i_12] [i_12] [i_12])))))) : (arr_17 [i_12] [i_12] [i_12] [i_12] [i_12])))));
                var_27 += ((/* implicit */signed char) arr_36 [i_12] [i_12] [i_12] [i_13] [i_12] [i_13]);
            }
        } 
    } 
}
