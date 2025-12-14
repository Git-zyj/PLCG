/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116117
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [(unsigned char)5] = ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])))));
                    arr_7 [i_0] [(short)4] [(unsigned short)7] [i_2] = ((/* implicit */int) ((unsigned char) (~(arr_3 [i_2 + 1]))));
                    var_21 = ((/* implicit */unsigned int) arr_1 [i_1] [i_2 + 1]);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_5 + 1]), (arr_9 [i_5 - 1])))) ? ((+(((arr_12 [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5]))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) var_12)))) * ((-(((/* implicit */int) arr_4 [i_3])))))))));
                    arr_14 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_10 [i_3])))), ((+(((/* implicit */int) var_2))))))) ? (var_19) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_3] [i_4])), ((+(-715365805))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_6] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_3])), (arr_9 [(signed char)1]))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) arr_12 [i_5] [i_5])))))) % (((/* implicit */long long int) ((unsigned int) arr_4 [i_5 + 1])))));
                        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_3] [i_4] [i_5 + 1] [i_5] [i_5 + 2] [(short)10]))));
                        arr_18 [i_3] [i_4] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) arr_8 [i_3] [i_3]);
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */short) var_4)), (max((((short) var_13)), (((/* implicit */short) arr_16 [i_5 + 3] [i_5 - 1] [i_5] [i_5] [i_5 + 2]))))));
                        arr_19 [i_6] [i_5] [i_5] [(short)4] = ((/* implicit */signed char) var_13);
                    }
                    arr_20 [i_3] [i_5] = ((/* implicit */unsigned char) (-(1353411412U)));
                }
            } 
        } 
        var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_3] [i_3]))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (31ULL)))) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((((/* implicit */int) arr_11 [i_3] [i_3])) * (((/* implicit */int) arr_11 [i_3] [i_3]))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        var_28 = ((/* implicit */short) arr_21 [i_7 + 1] [i_7 - 2]);
        arr_24 [i_7] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)51))))));
    }
    var_29 = ((/* implicit */long long int) var_9);
}
