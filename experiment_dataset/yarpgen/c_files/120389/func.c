/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120389
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_15)))) ? (min((((/* implicit */unsigned long long int) var_18)), (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_8))) % (((/* implicit */int) var_7)))))));
        arr_3 [i_0 + 2] |= ((/* implicit */short) (-(8087297432352051687LL)));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_18))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 4; i_2 < 13; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12777))) : (-2959151653706186736LL)));
                        var_23 |= ((short) 5550352360883218200LL);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) (signed char)100);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    arr_20 [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12777)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                    var_25 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13050)) ? (((/* implicit */int) var_8)) : (var_9)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_13))));
                    arr_21 [i_1] [(unsigned short)6] [i_5] [i_6] = var_4;
                }
            } 
        } 
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_8))));
    }
    var_27 = ((/* implicit */unsigned int) var_18);
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_15))), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11560))) - (2337182005U)))) : ((-(var_15)))))));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (8646282692171893652ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51904)) >> (((((/* implicit */int) var_4)) - (650))))))));
}
