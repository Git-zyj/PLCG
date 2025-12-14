/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167264
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((var_0) ? (max((var_2), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))))))))));
                var_12 = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_9 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_7))))) : (((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))) ? (max((((/* implicit */long long int) var_1)), (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
        var_14 = ((/* implicit */long long int) var_7);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (9052549986509992690LL) : (((/* implicit */long long int) 1325303660))))) ? (min((4194303ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (12961417811387227531ULL)))) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-30595)), (7ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15849))))));
    }
    for (signed char i_3 = 4; i_3 < 21; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) -3838209710819326204LL)) ? (((/* implicit */int) (short)17000)) : (((/* implicit */int) (unsigned char)16)))))));
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((_Bool) ((var_10) ? (var_3) : (max((((/* implicit */long long int) var_10)), (var_2)))))))));
                    var_18 += ((/* implicit */signed char) var_8);
                }
            } 
        } 
    } 
}
