/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113484
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (min((var_2), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2224)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_2 [16U] = var_0;
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 -= (((-((~(var_5))))) << (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 + 1] [(_Bool)1] [(_Bool)1])) > (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [13]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))));
                }
            } 
        } 
    }
    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    {
                        var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (_Bool)1))));
                        arr_20 [i_3] [i_5] [(signed char)18] [i_3] = ((/* implicit */unsigned short) (((-(max((((/* implicit */long long int) arr_18 [i_3])), (var_8))))) > (((/* implicit */long long int) (+((~(((/* implicit */int) var_1)))))))));
                        var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) ((var_8) | (var_8))))), ((-(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 + 1] [i_3] [4])))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] [20ULL] = ((/* implicit */_Bool) arr_14 [i_3] [i_3]);
        var_15 = min((((/* implicit */unsigned long long int) arr_17 [i_3])), (max((((arr_10 [(signed char)12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_1))))))));
    }
    var_16 = ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((unsigned char) (_Bool)1))))), ((+(((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)0))))))));
}
