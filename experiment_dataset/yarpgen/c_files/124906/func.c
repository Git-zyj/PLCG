/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124906
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max(((-((-(((/* implicit */int) var_6)))))), (min(((-(((/* implicit */int) (signed char)26)))), (((/* implicit */int) arr_6 [(_Bool)1])))))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) ((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) << ((((-(((/* implicit */int) var_10)))) + (147)))))))));
                                arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1607322996)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) * (min((var_8), (((/* implicit */unsigned long long int) arr_11 [i_2] [2U] [i_2 + 3] [i_2 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_19 [i_1 + 2] [i_1 + 2] [i_7 + 1] [i_7])) - (((/* implicit */int) var_10)))), (((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)13))))));
                                var_17 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((unsigned long long int) var_0)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)27059)) > (((/* implicit */int) arr_10 [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        {
                            arr_30 [i_0] [(_Bool)1] [i_1 + 2] [17U] [(signed char)1] [i_9 - 1] = ((/* implicit */short) (-(((/* implicit */int) min(((signed char)-13), (((/* implicit */signed char) (_Bool)1)))))));
                            arr_31 [i_0] [i_1] [i_8] [i_0] [i_8] = ((/* implicit */signed char) max((((((/* implicit */int) arr_7 [i_0] [(signed char)13] [i_8])) << (((((((/* implicit */int) arr_19 [i_0] [i_1] [i_9 + 2] [i_1])) + (18698))) - (19))))), (((/* implicit */int) ((short) var_9)))));
                            arr_32 [i_0] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 419812903)) || (((/* implicit */_Bool) (signed char)-106))))), (var_13))))) / (arr_28 [i_8] [i_9 + 2] [i_1 + 1] [i_1 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_19 = max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (unsigned char)232)));
                            var_20 = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_5))));
                arr_42 [i_10] = ((/* implicit */signed char) ((int) max((arr_38 [i_11 + 2] [i_11 + 3] [i_11 - 1] [i_11]), (arr_38 [i_11 + 1] [i_11] [i_11 - 1] [i_11]))));
            }
        } 
    } 
}
