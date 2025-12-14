/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135010
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
    var_19 = ((/* implicit */unsigned char) min((15643784016483517282ULL), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_2])))) * ((+(min((15643784016483517302ULL), (((/* implicit */unsigned long long int) (short)-32759)))))));
                    var_20 -= ((/* implicit */unsigned char) arr_2 [i_1]);
                    var_21 = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_15 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (arr_5 [i_2] [i_2]) : (4670000812164457742LL)))))) ? (((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17068666402825198797ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_10)) : (1439488902U))))))));
                        arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_0]))))), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
                        var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)51644))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_20 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_0] [i_1]))));
                        arr_21 [i_0] [i_1] [i_0] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) (short)32759))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_23 = var_10;
                        arr_25 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_3);
                        arr_26 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (17878451877722629213ULL)));
                        arr_27 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                    }
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (1848715420281767878LL)));
        var_24 = ((/* implicit */int) (-(((var_15) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (((((/* implicit */unsigned long long int) var_17)) * (arr_0 [i_0])))))));
    }
    var_25 = ((/* implicit */unsigned char) min((4670000812164457743LL), (((/* implicit */long long int) (short)32767))));
    var_26 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) -7787055792534427691LL))));
}
