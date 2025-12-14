/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102608
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) (unsigned char)255);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_2] [i_3] [i_4]))));
                        arr_11 [i_1 - 1] [i_2] [(_Bool)1] [i_4] = (~(((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_3 [(unsigned short)0]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22744))) < (arr_5 [i_1] [i_1 + 1] [i_4]))))));
                        arr_12 [i_4] [i_2] = ((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_3] [i_4] [i_2] [i_1]));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */int) ((long long int) arr_3 [i_1 + 2]));
        arr_13 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_5])) || (var_2)));
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_5] [i_5] [6]))));
            arr_19 [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)231)) || ((_Bool)1)));
            var_24 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_15 [i_5]))))));
        }
        for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_25 = ((/* implicit */short) ((var_9) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_17))))));
                var_26 += ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) arr_15 [i_7 + 2])) : (((/* implicit */int) arr_15 [i_7 + 3]))));
            }
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_7])) - (((/* implicit */int) var_16)))))))));
        }
        var_28 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 5508467693568109668ULL)) || (((/* implicit */_Bool) (short)15019))))) >> (((((/* implicit */int) var_3)) - (63888)))));
    }
    var_29 = ((/* implicit */signed char) max((min((var_8), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_15))));
}
