/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183363
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
    var_19 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))), ((+(((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(((arr_2 [i_0]) * (arr_2 [11]))))) : (((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((arr_3 [i_0]) - (3603491557U)))))))))));
        var_21 += ((short) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) (unsigned char)255)))) ? ((((-(((/* implicit */int) arr_1 [i_0])))) & ((((-2147483647 - 1)) / (arr_0 [i_1] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (2102992180U) : (((/* implicit */unsigned int) arr_0 [12LL] [(unsigned short)11]))))))))));
                    var_23 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((short) arr_6 [(unsigned short)13] [6] [(unsigned short)13]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((arr_13 [i_3]), (((/* implicit */unsigned int) -1)))) * (((/* implicit */unsigned int) ((arr_9 [i_3] [(unsigned short)15] [i_5] [i_5 + 4]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_5 + 4]))))))))));
                    arr_19 [i_4] [i_4] [i_4] [i_4] = arr_14 [i_5] [i_5 - 2];
                    var_25 += ((/* implicit */short) arr_0 [i_3] [i_3]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 3; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_1 [i_3]))));
                        arr_29 [14] [i_6] [(short)3] [i_3] [i_6] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (2147483647) : (((/* implicit */int) (unsigned char)1))))) ? (arr_26 [i_3 - 1] [i_8 - 2] [i_8 + 2] [i_3 - 1]) : (((((/* implicit */_Bool) arr_5 [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 1]))) : (arr_26 [i_8 - 1] [i_8 - 2] [i_8 + 2] [i_3 - 1])))));
                    }
                } 
            } 
        } 
    }
}
