/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16296
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_13 = (+(((/* implicit */int) arr_7 [i_0])));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_1))))))) : (arr_2 [i_3] [i_2] [i_1])));
                                var_15 = ((/* implicit */unsigned int) var_10);
                                var_16 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) (~(var_6)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_4] [i_2] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_9 [i_3] [i_1] [i_2] [i_3]);
                            }
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_2 [i_0] [i_1] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_6] [i_5] [i_1]);
                            var_18 = ((/* implicit */unsigned long long int) ((var_0) ? ((+((-(var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0)))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) var_6);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_7), (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */int) arr_18 [i_6] [i_5] [i_1] [i_0])) : (min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_17 [i_1] [i_1] [i_5] [i_6] [i_0] [i_5]))))));
                            var_20 = (+(min((var_8), ((+(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) max((var_2), (arr_17 [i_9] [i_8] [i_7] [i_7] [i_1] [i_0])))), (arr_27 [i_0] [i_8] [i_7] [i_9] [i_9] [i_0] [i_9])))))))));
                                var_22 = ((/* implicit */signed char) (+(max((arr_22 [i_8] [i_7] [i_0]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
                                arr_29 [i_0] [i_1] [i_7] [i_8] [i_7] = ((/* implicit */signed char) (-((+((~(((/* implicit */int) arr_7 [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) max(((-((+(arr_25 [i_0] [i_1] [i_10] [i_11]))))), ((+((+(arr_30 [i_0] [i_11] [i_10])))))));
                            var_24 = ((/* implicit */_Bool) ((arr_8 [i_0] [i_10] [i_11]) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_11]))))), (max((var_3), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_10] [i_10] [i_11] [i_11]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~(((/* implicit */int) var_9)))))))));
                            arr_35 [i_0] [i_10] [i_1] [i_0] = ((/* implicit */int) var_3);
                            arr_36 [i_0] [i_1] [i_10] [i_11] = ((/* implicit */signed char) arr_12 [i_0]);
                            var_25 = (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_1] [i_10] [i_10] [i_11]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
