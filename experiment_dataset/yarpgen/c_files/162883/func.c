/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162883
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
    for (int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_4])))) ? (min((arr_2 [i_2]), (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)255)) : (arr_2 [i_3]))))) : (((int) min((var_4), (arr_8 [i_0]))))));
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((_Bool) var_8)))));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */_Bool) (-((+(((/* implicit */int) ((unsigned char) var_0)))))));
                var_13 = ((/* implicit */int) ((unsigned int) ((_Bool) arr_2 [i_0 - 2])));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_19 [i_5])))));
                                var_15 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 4])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_5] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (-891795870)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 14U))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 4; i_9 < 15; i_9 += 2) 
                        {
                            var_16 = ((/* implicit */short) (((+((-(((/* implicit */int) var_3)))))) & (((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [(_Bool)1] [i_8] [i_5] [i_0] [i_0])))) | (((/* implicit */int) ((unsigned char) (short)-1)))))));
                            arr_29 [i_9 - 2] [i_5] [i_8] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned long long int) var_8);
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5] [i_8])) ? (arr_24 [i_9] [i_8] [i_5] [i_5] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_9 - 2] [i_9 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_9] [i_8]))))) : ((~(31U))))))));
                            var_18 = ((/* implicit */short) min(((((~(((/* implicit */int) (unsigned char)2)))) - (((/* implicit */int) ((unsigned char) arr_27 [i_1] [i_9]))))), ((-(((/* implicit */int) (unsigned char)237))))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [(_Bool)1] [(_Bool)1]))))))));
                        var_20 *= ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_3))), ((-(arr_19 [i_10])))));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+(((unsigned int) ((((/* implicit */_Bool) (unsigned char)52)) ? (var_7) : (((/* implicit */unsigned long long int) var_5)))))));
}
