/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132207
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */unsigned long long int) min((((int) (!(((/* implicit */_Bool) 8388600))))), (((int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_12 += ((min((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2]), (arr_7 [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1 - 1]))) * ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23320))) + (16357377319540578347ULL))))));
                                var_13 = ((/* implicit */int) var_5);
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((-(var_1))), ((+(31443182U)))))), ((+(var_8)))));
                                var_14 = ((/* implicit */int) min((var_14), ((~(((((/* implicit */int) ((16006228924814467747ULL) <= (11399094281631095986ULL)))) << ((((+(arr_10 [i_0] [i_1] [i_3] [i_3]))) + (1122737085)))))))));
                                arr_15 [i_2] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-61)), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1 + 2] [i_0] [i_1 + 1] [i_1] [i_3] [i_2]))) : ((~(arr_8 [i_0] [i_3] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_6 - 1] [i_6])))));
                                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_6] [i_2] [i_0] [i_6 - 2])), (((var_8) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) (-(((long long int) (signed char)63))));
                                var_18 = ((/* implicit */long long int) var_1);
                                var_19 = ((/* implicit */signed char) (~(31443182U)));
                                var_20 = ((/* implicit */unsigned int) ((long long int) (!((!(((/* implicit */_Bool) arr_19 [i_0] [i_1 + 3] [i_0] [i_7] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_8);
}
