/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163345
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
    var_16 = ((/* implicit */int) (_Bool)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(arr_1 [i_0] [7U])));
        var_17 *= (!(((/* implicit */_Bool) arr_2 [i_0] [10])));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        var_19 = ((/* implicit */signed char) -2755819460462016322LL);
        var_20 = ((/* implicit */signed char) ((unsigned int) 2755819460462016321LL));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (((/* implicit */int) arr_4 [i_1] [i_1])))));
        var_22 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_23 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((long long int) var_13))) || (((/* implicit */_Bool) arr_5 [i_1])))));
        var_24 = var_6;
    }
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_25 = min((((/* implicit */long long int) min((4095295332U), (max((199671961U), (((/* implicit */unsigned int) (unsigned short)38840))))))), ((-(arr_20 [i_2] [i_3] [i_4 + 2] [i_4 + 1] [i_4 + 2]))));
                                arr_22 [i_2] [(signed char)10] [i_3] [i_6] [i_2] [i_6] [i_6] = arr_18 [i_4 + 1] [i_3] [i_6 - 1];
                                var_26 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_19 [i_2] [i_3] [i_4] [16]));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((((/* implicit */short) arr_16 [i_2] [i_3] [i_2])), (var_13)))) && (((/* implicit */_Bool) 199671961U))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_27 [(signed char)16] |= ((/* implicit */unsigned short) arr_25 [8U]);
        var_28 = max((((unsigned short) arr_24 [i_7 + 1] [i_7 + 1])), (((/* implicit */unsigned short) ((short) ((arr_6 [i_7]) >> (((((/* implicit */int) var_8)) - (195))))))));
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (-2755819460462016322LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        arr_30 [3U] = ((/* implicit */_Bool) ((int) min((arr_10 [i_8] [i_8] [i_8]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)0])) ? (var_10) : (((/* implicit */unsigned int) 8191))))))));
        var_30 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)64)), (arr_29 [8ULL])))))))));
        var_31 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_8])))))));
    }
}
