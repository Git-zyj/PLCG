/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158427
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((unsigned short) (short)24576))));
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (((var_1) ^ (((/* implicit */unsigned int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_14 = ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_5)), (((short) (short)-15608)))))) : (max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_3 [i_0]))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0 - 1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))), ((~((~(523398838U)))))));
                            arr_15 [4U] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 + 1] [i_1] [i_2]))) ? (((arr_2 [i_0 - 1]) * (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((var_11) + (((/* implicit */int) arr_11 [i_1 - 1] [(signed char)11])))) * (max((var_9), (((/* implicit */int) arr_6 [i_4] [i_0])))))))));
                            var_15 += ((/* implicit */unsigned int) 2658963159704353216ULL);
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_3))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [(short)1])), (arr_5 [i_1] [i_1] [i_1 - 1]))))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 1367062454U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3414818548U)) || (((/* implicit */_Bool) (short)-15608)))))) : (((unsigned int) arr_7 [i_0] [(short)3] [i_5] [i_6]))));
                        arr_21 [i_0] [i_1] [i_5] [i_1] = ((arr_16 [i_0] [(_Bool)1] [(_Bool)1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) (!((!((!(var_5)))))));
            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_11 [i_7] [i_0])) - (((/* implicit */int) var_5))))))));
        }
        var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_23 [i_0 + 1])) & (((/* implicit */int) arr_23 [i_0 - 1]))))));
        var_22 = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) arr_3 [i_0])))));
    }
    var_23 = (~(4063232U));
}
