/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146621
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_11 += ((((_Bool) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (var_3)))));
                        var_12 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (1728663128U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_0)))))) : ((-(arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]))) : (((unsigned int) arr_3 [i_0]))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1728663128U)) || (((/* implicit */_Bool) ((unsigned char) ((2566304167U) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        }
                        arr_15 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((2566304167U) == ((-(1728663117U)))));
                    }
                    /* LoopSeq 2 */
                    for (short i_5 = 4; i_5 < 17; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */int) (~((-(2566304184U)))));
                        arr_20 [i_5 - 3] [i_2] [i_1] [i_1] [i_0] [i_0] = ((2566304168U) >> (((((/* implicit */int) var_6)) - (7045))));
                        arr_21 [(unsigned short)0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */short) (+(arr_13 [i_1] [i_2] [i_1] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_5 - 1] [i_5 - 4] [i_5] [i_5 - 3])) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_5 - 4] [i_5 - 3] [i_5] [i_5 - 3])) + (8826))) - (8)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 4]))) ^ (1728663122U))));
                            arr_25 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((+(arr_24 [i_6 - 1] [i_6 - 1] [i_6]))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_7]))))) <= (max((2566304157U), (((/* implicit */unsigned int) arr_22 [i_7] [i_7] [i_2] [i_1] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(arr_27 [i_0] [i_1])))) * (1728663128U)));
                            arr_32 [i_0] [i_0] [i_1] [i_2] [i_7] [i_1] = ((/* implicit */short) arr_9 [i_8] [i_1] [i_2] [i_1] [i_0]);
                        }
                        for (unsigned char i_9 = 4; i_9 < 15; i_9 += 1) 
                        {
                            arr_35 [i_1] [i_1] [i_2] [i_2] [i_7] [i_9] = arr_27 [i_9 - 1] [i_9 - 3];
                            var_18 = ((/* implicit */unsigned int) var_1);
                        }
                        arr_36 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_12 [i_0]);
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0])) & (((long long int) arr_22 [i_0] [i_0] [(short)2] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (unsigned short i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                {
                    arr_42 [i_0] [i_10] [i_10] [i_11 + 1] = ((/* implicit */int) 1728663128U);
                    arr_43 [i_10] [i_10] = ((/* implicit */int) min((1728663111U), (2566304185U)));
                    arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) var_0))))) - (((((/* implicit */_Bool) arr_37 [i_11] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) var_7)), (arr_13 [i_0] [i_10] [i_10] [1LL] [i_11])))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
    }
}
