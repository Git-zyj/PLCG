/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127668
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), (var_15)))), (max((2883911308U), (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */int) ((_Bool) min(((unsigned char)120), (((/* implicit */unsigned char) var_12)))))) : (((/* implicit */int) var_15))));
    var_17 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)136), (((/* implicit */unsigned char) (_Bool)0))))) << (max((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((var_3), (arr_0 [i_0])))))), (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] [2U] = ((/* implicit */unsigned int) arr_0 [i_1]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 7; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) arr_5 [i_2 + 1])) && (((/* implicit */_Bool) arr_5 [i_2 - 1])));
                    arr_12 [i_2] [3] [i_2 + 2] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))));
                        arr_15 [i_2] [i_2 - 2] [i_2 + 3] [i_2] = ((/* implicit */_Bool) ((arr_1 [i_4]) ? (((((/* implicit */int) (unsigned char)125)) & (((/* implicit */int) arr_8 [i_2])))) : (-1465743184)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))) - ((+(((/* implicit */int) (unsigned char)120))))));
                        arr_19 [i_1] [i_2] [7] [i_3 + 1] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) != (6478969))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) -1465743184)) ? (-6478970) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_20 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) 6478969)))));
                }
            } 
        } 
    }
}
