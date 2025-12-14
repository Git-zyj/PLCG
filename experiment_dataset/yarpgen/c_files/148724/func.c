/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148724
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) (-(((unsigned long long int) ((_Bool) 9486153440880436333ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                                var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 9486153440880436333ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 - 1] [(short)15]))) : (arr_2 [i_4 + 1])))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((9486153440880436345ULL), (((/* implicit */unsigned long long int) ((short) 9486153440880436333ULL)))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_9)) | (arr_6 [i_1] [i_2] [(unsigned char)15]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5956611969251823994ULL)) || (((/* implicit */_Bool) 125097125U)))))) & (((9486153440880436333ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58164)))))))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_2 + 1] [i_3 + 1])), (min((arr_4 [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [(short)10] [i_0]))))))) ? (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_7))))) ? (arr_6 [i_0] [i_1] [i_2]) : (((((/* implicit */int) (unsigned short)7371)) & (((/* implicit */int) (unsigned short)58145)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [(unsigned char)10])) == (((unsigned long long int) var_9)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((int) var_8));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) -688022396);
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */_Bool) ((int) var_9));
    var_24 *= ((/* implicit */unsigned short) ((var_10) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4032)) % (((/* implicit */int) (unsigned short)7391)))))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        var_25 = var_15;
        /* LoopNest 3 */
        for (unsigned int i_6 = 2; i_6 < 7; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) 
                {
                    {
                        arr_22 [i_5 - 1] [i_8] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7371))));
                        var_26 = ((/* implicit */unsigned short) ((long long int) (~(var_3))));
                    }
                } 
            } 
        } 
    }
}
