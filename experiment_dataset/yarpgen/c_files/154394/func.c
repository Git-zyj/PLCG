/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154394
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
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 &= 31LL;
                        var_14 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1])))))));
                        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(arr_0 [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))) : (arr_5 [(unsigned short)3] [i_1 - 1])));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)65535))))));
    }
    for (long long int i_4 = 4; i_4 < 11; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_14 [i_4 + 1])))));
        var_17 = ((unsigned char) arr_13 [i_4]);
    }
    for (long long int i_5 = 4; i_5 < 8; i_5 += 3) 
    {
        arr_19 [i_5 + 3] [i_5 + 2] = ((/* implicit */_Bool) -1LL);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 3; i_7 < 10; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_4))));
                        arr_27 [i_6] [(signed char)5] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_34 [i_9] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (-31LL)))) ? (((((/* implicit */_Bool) arr_23 [i_10] [i_9] [i_5])) ? (((/* implicit */unsigned long long int) 540334409)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_32 [i_9] [i_9] [(short)10] [i_9]))))))) ? (min(((+(((/* implicit */int) (unsigned char)21)))), (((((/* implicit */_Bool) 6067612780296844362LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_10] [i_9] [i_5])))))) : (min((684409796), ((+(((/* implicit */int) arr_18 [i_5]))))))));
                    arr_35 [i_10] [i_10] |= ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_10] [i_5 + 3] [i_10] [i_5]))))), (arr_13 [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)65535))))))) : (((arr_22 [i_5] [i_5 - 3] [i_5 - 1] [i_5]) * (arr_26 [i_5 - 3] [i_5] [i_5]))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)186)))))));
                    arr_36 [i_5 - 3] [i_9] [(short)10] = (~(((/* implicit */int) ((((/* implicit */int) arr_23 [i_5 + 1] [i_9] [i_5])) >= (((/* implicit */int) arr_18 [i_5 - 4]))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) ((unsigned int) var_5)))), ((signed char)-1)));
}
