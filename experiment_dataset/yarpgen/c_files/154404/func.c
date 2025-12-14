/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154404
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((var_6) + (arr_5 [i_0] [i_1 - 1])))))) | ((~(max((var_10), (((/* implicit */long long int) (unsigned char)75))))))));
                    var_19 += ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)191))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_4 [i_2] [i_0 - 2]))));
                    arr_10 [i_0 + 1] [i_0 - 2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) >> (((/* implicit */int) (_Bool)1))))) ? (-269246680052028203LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34627))))))));
                    arr_11 [i_2] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 3] [i_2 + 3])) : (((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_2 + 3]))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 3]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_12)) ? (var_1) : (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23030))) : (var_6)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    var_22 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23027)) >> (((var_17) + (1016798419)))))) && (((/* implicit */_Bool) var_13)))));
                    var_24 += ((/* implicit */signed char) ((max((var_16), (((/* implicit */unsigned int) var_13)))) % (((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28926)))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) 18446744073709551615ULL))))))));
                    var_26 += ((/* implicit */signed char) ((short) var_10));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        for (long long int i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_27 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 6787788354905327376LL)) ? (-6787788354905327377LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        for (signed char i_10 = 3; i_10 < 9; i_10 += 3) 
                        {
                            {
                                arr_34 [i_6] [6ULL] [i_6] [i_9] [i_9] [i_7] [i_7] |= ((/* implicit */short) (unsigned short)23030);
                                arr_35 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) var_17)));
                                arr_36 [i_10] [i_6] [i_9] [i_8] [i_8] [i_6] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_15 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23027))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_16)))))));
                                var_27 = ((/* implicit */unsigned int) ((_Bool) var_6));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
