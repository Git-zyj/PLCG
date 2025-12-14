/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102406
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((arr_0 [i_0]) << (((var_1) + (743371505)))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 4294967295U))) ? (((/* implicit */int) (short)-23652)) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-458))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_21 = ((unsigned long long int) (unsigned char)30);
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (11488091597710476363ULL) : (((/* implicit */unsigned long long int) 818709300))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)46)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned char)25))));
        arr_7 [i_1] [(short)11] = ((/* implicit */unsigned long long int) (~(((arr_1 [13]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) arr_4 [i_2]);
        /* LoopNest 2 */
        for (signed char i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_18 [i_2] [i_4] [i_3] [i_4] = ((_Bool) max((((/* implicit */int) (signed char)98)), (arr_17 [i_4 + 1] [i_4 + 2] [i_3 - 1])));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (((-((-(((/* implicit */int) (_Bool)0)))))) / (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_4] [i_6])) ? (arr_5 [i_2] [11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_6])))))))));
                                arr_26 [i_2] [i_3] [10ULL] [i_2] [i_6] |= ((/* implicit */long long int) (+(-555110942)));
                                var_24 = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-99)), (18446744073709551615ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((unsigned char)31), (((/* implicit */unsigned char) (signed char)-66)))))))) ? (((((/* implicit */_Bool) ((int) 3719020390U))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))) : (max((((/* implicit */int) var_17)), ((+(var_14)))))));
}
