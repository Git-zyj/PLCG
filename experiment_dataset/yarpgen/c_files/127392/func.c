/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127392
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
    var_18 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)10)) >= (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = max((arr_0 [i_0]), (arr_0 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) var_16)))), ((+(var_8))))))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_15 [(unsigned short)0] [i_1] [i_3] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))));
                        arr_16 [i_1] [i_2] [i_1] [(short)20] [(short)19] [i_4] = ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) < (arr_10 [i_1] [i_1] [i_3] [i_4]))))) <= (((/* implicit */int) arr_8 [i_4] [i_3] [i_1])));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            arr_20 [i_1] [(unsigned short)15] [i_3] [(_Bool)1] [i_3] = ((/* implicit */signed char) (((~(arr_7 [i_3]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196)))))))));
                            var_21 = ((/* implicit */short) (((((~(arr_10 [i_4] [(short)18] [i_1] [i_1]))) << (((/* implicit */int) (unsigned char)2)))) * (((arr_7 [i_5]) >> (((arr_7 [i_4]) - (379642192U)))))));
                            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(short)11] [i_4] [(_Bool)1] [i_1])))))));
                            arr_21 [i_5] [(unsigned char)11] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (-(max(((-(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_4 [i_1] [i_3]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_24 [i_6] = (-((+(((/* implicit */int) (short)-23269)))));
        arr_25 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) + (arr_10 [i_6] [i_6] [i_6] [i_6]))))), (min((2110806854U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)17))))))));
        arr_26 [i_6] [i_6] &= (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_22 [i_6])) == (((/* implicit */int) var_13)))))))));
    }
    var_23 |= ((/* implicit */unsigned int) var_0);
    var_24 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16))) : (var_11))))), (((/* implicit */long long int) ((unsigned int) var_11)))));
}
