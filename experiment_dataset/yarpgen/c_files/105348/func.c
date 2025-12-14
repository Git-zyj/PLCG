/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105348
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))) % (((/* implicit */int) arr_0 [i_0 + 1] [i_0])));
        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) (_Bool)0)));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-4131))));
                    arr_9 [i_0] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1131447944)) ? (3683173833899463270LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((long long int) arr_5 [i_2] [i_1 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_0] [i_0 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1] [i_0 + 1] [i_0 + 1] [i_0]))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 1])) - (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 1]))));
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0 + 1]))));
                            arr_19 [i_2] [i_2] [16] [i_2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_4 [i_0] [12ULL] [i_2 - 4])) : (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [i_2 + 2] [i_3] [i_4 - 1]))));
                        }
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(5359930642517530022ULL))))));
                        arr_20 [i_0] [i_2] [0ULL] |= ((-6649386581985559882LL) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_2] [i_2] [i_2 - 3] [i_3 + 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
    {
        arr_24 [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1368431541)) ? (((/* implicit */int) (short)2047)) : (1131447958)));
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            for (short i_7 = 3; i_7 < 16; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_13 [i_5 - 2]))));
                    arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-4123)) : ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((_Bool) arr_10 [i_7 - 1] [i_5] [i_7 - 3] [i_6])))));
                    var_21 = ((/* implicit */signed char) min((arr_0 [i_5] [i_5]), (((/* implicit */short) ((268434432) <= ((+(((/* implicit */int) arr_7 [i_6])))))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -6044423816752181292LL))))), (((((/* implicit */_Bool) (unsigned short)13675)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-4994640286535445921LL)))))));
                }
            } 
        } 
    }
}
