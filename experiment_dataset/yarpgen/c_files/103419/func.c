/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103419
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = (+(var_7));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_5 [i_1] [i_1] [i_3]))), (((/* implicit */long long int) min((var_13), ((unsigned short)65522))))))));
                                arr_11 [i_4 + 2] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
                                arr_12 [i_0] [i_1 + 1] [i_3] = ((/* implicit */unsigned short) max((min((17499306427932637694ULL), (((/* implicit */unsigned long long int) 28672)))), (((/* implicit */unsigned long long int) max(((unsigned char)0), ((unsigned char)88))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)231))))))))) < (var_4)));
    /* LoopSeq 2 */
    for (int i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_15 [i_5 - 2]))))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_15 [i_5]), (((/* implicit */short) ((28672) >= (((/* implicit */int) var_13)))))))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_14 [i_5] [i_5]))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) min(((unsigned short)40385), (((/* implicit */unsigned short) arr_16 [(unsigned char)11])))))))));
    }
    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((unsigned long long int) (short)16383)) / (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)42876)), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (long long int i_9 = 2; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_21 += (!(((/* implicit */_Bool) (unsigned char)132)));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7 + 3]))))), (min((var_6), (((/* implicit */int) (unsigned char)198)))))) : (var_11)));
                    }
                } 
            } 
        } 
        arr_31 [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_14 [i_6] [i_6 - 1])))) != (((/* implicit */int) (unsigned char)250))));
    }
    var_23 += ((/* implicit */long long int) var_15);
    var_24 |= ((/* implicit */unsigned char) var_5);
}
