/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181352
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
        var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) * (0U)))) ? ((-(((/* implicit */int) ((short) arr_2 [(unsigned char)6] [(unsigned char)6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)215)) || (((/* implicit */_Bool) 8857510612670776953LL)))))))));
        var_12 = min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) var_8)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= ((-(4294967281U)))));
        var_14 = ((/* implicit */unsigned char) 622026981366329035ULL);
        var_15 = ((/* implicit */unsigned short) max((var_15), (arr_0 [8] [i_1])));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 19LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (0U)))) ? (((/* implicit */unsigned int) var_9)) : (arr_5 [i_1] [i_1])));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64))));
            var_16 = ((/* implicit */signed char) var_9);
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (unsigned char)251))))), (((((/* implicit */_Bool) var_9)) ? (2796362U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ^ (((max((((/* implicit */long long int) arr_12 [i_3])), (-5886158347539901360LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34533)) ? (((/* implicit */int) (unsigned char)255)) : (-192253159))))))));
                    var_17 = ((((/* implicit */_Bool) 1928551956)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)205))))), (1583327278U)))) : (((((/* implicit */_Bool) (-(1469110184)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((-192253159), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12701))) <= (arr_19 [i_3] [i_3] [i_3] [i_3])))))))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */int) (+(3526770085U)));
}
