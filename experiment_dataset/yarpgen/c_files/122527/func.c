/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122527
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
    var_18 &= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_11))))), (((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) max(((unsigned short)56162), ((unsigned short)6656)))) - (56157)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */_Bool) (unsigned short)1)) ? (arr_0 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)1)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((unsigned short) (unsigned short)27940))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_5 [i_0 + 2] [i_0 + 3] [i_0 + 1]))))));
                        arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_3 [i_0] [i_0 - 3]), (var_2)))), (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 - 3] [(unsigned short)1] [i_3 + 1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((min(((-(((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_2)))))), (((/* implicit */int) var_0))));
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_1))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            var_21 *= ((/* implicit */_Bool) ((var_1) ? (((((/* implicit */int) arr_25 [i_4] [16U] [i_8] [i_4] [i_8 - 1])) & (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
                            var_22 = ((/* implicit */unsigned char) arr_25 [i_4 - 1] [i_5 + 1] [i_4] [i_7] [i_8]);
                        }
                        arr_26 [i_6] [(unsigned short)4] [i_6] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_22 [i_4])) < (((/* implicit */int) arr_23 [i_4 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_7] [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_4])) <= (((/* implicit */int) arr_23 [i_4 + 1] [i_5 - 1] [5U] [i_7] [i_4 + 1] [i_7]))))) : (((((/* implicit */int) arr_13 [i_4 + 2])) - (((/* implicit */int) var_2))))));
                        var_23 = ((/* implicit */unsigned short) arr_20 [i_4] [i_5 - 1] [i_6] [i_7]);
                    }
                } 
            } 
        } 
        var_24 = arr_16 [i_4 + 1];
    }
}
