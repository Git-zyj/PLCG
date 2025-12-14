/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124359
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (+((~(((/* implicit */int) (short)17976))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)157)) || (((/* implicit */_Bool) 2569763472U))))) >= (((/* implicit */int) (unsigned char)242)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) min((-1699609655), (((/* implicit */int) arr_4 [i_0] [i_0]))))), (((long long int) arr_0 [i_3] [i_1 + 1]))))));
                            var_23 = ((/* implicit */unsigned char) ((4294967292U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-7050)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) arr_8 [i_4] [4] [i_4] [(short)5] [i_4]);
                    arr_17 [7] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [13] [i_5])) << (((var_1) - (3523521254U)))));
                    var_25 = ((/* implicit */int) var_13);
                    var_26 = ((/* implicit */long long int) var_6);
                    arr_18 [4U] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (short)11101)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_4])) : (var_14)))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 3; i_7 < 7; i_7 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)31189)) && (((/* implicit */_Bool) var_17)))))));
        var_29 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -2147483626)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)229))))));
        arr_22 [i_7] [i_7 + 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) var_15))) <= (((var_12) ? (-534055686638878650LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(unsigned char)3] [i_7 + 2] [i_7 - 3] [2] [i_7])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_8 [i_7 - 1] [(unsigned char)23] [i_7 - 3] [i_7] [i_7]))));
    }
    var_31 = ((/* implicit */unsigned char) ((int) var_15));
}
