/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130400
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_3 + 1] [i_0])) && (((/* implicit */_Bool) arr_9 [i_2 - 1] [i_3] [i_0]))))), (((2147483645) / (arr_9 [i_2 - 1] [i_2 - 1] [i_0])))));
                            var_10 = ((/* implicit */int) max((((/* implicit */long long int) var_3)), (((long long int) 5037320717103896759LL))));
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) 1677040722))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_16 [1] [i_0] [i_4 + 3] [i_4] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(arr_5 [i_5] [11U] [i_1] [(unsigned char)10])))))) ? (min((((/* implicit */unsigned int) (signed char)34)), (min((((/* implicit */unsigned int) var_8)), (1023U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [1U] [2] [i_4 + 4]), (arr_12 [i_4 + 1] [i_5] [i_0] [i_5])))))));
                            arr_17 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((_Bool) var_7));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 19; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(max((arr_23 [i_6 + 1] [i_9 - 2] [i_9 + 2]), (max((arr_27 [0LL] [i_7] [i_7] [i_9] [i_7]), (((/* implicit */unsigned long long int) arr_30 [i_6] [i_7] [i_8] [i_8] [i_8] [i_9] [i_7])))))))))));
                                var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_20 [(short)4] [i_7] [i_6]))))) != (arr_23 [i_6 - 1] [i_6 + 1] [i_6 + 1]))));
                                var_14 = (~(max((((((/* implicit */_Bool) arr_25 [i_6] [i_7] [19U] [2])) ? (44535409U) : (var_5))), (max((((/* implicit */unsigned int) (short)-32707)), (var_6))))));
                                arr_31 [i_6] [i_7] [i_6] [i_9] [i_10] = ((/* implicit */_Bool) arr_22 [i_6] [i_8] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_5) << (((((/* implicit */int) var_1)) + (32085))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
                                arr_37 [i_6] [(signed char)1] [i_8] [(signed char)3] [i_7] [i_6] = ((/* implicit */short) var_0);
                                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_32 [19ULL] [i_7] [i_6 - 1] [i_11])) ? (var_9) : (((/* implicit */unsigned int) arr_32 [i_12] [i_12] [i_6 - 1] [i_11])))) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_6] [i_7] [i_6]), (arr_24 [i_6 - 1] [i_7] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
