/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143409
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
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_12 = var_11;
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_2 [i_0 + 2])))) ? (1154151210U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) < (var_2))))));
        var_13 ^= arr_2 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_7)), ((~(min((15395685682022970178ULL), (((/* implicit */unsigned long long int) var_7))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_11)) - (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) arr_2 [i_0 + 2]))))))))));
    }
    for (long long int i_1 = 4; i_1 < 17; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            arr_20 [2ULL] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)0))));
                            arr_21 [i_5] [i_2] [4U] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_8 [i_3] [i_4]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1])) ? (arr_15 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]) : (arr_15 [i_1 - 3] [i_1] [i_1] [i_1 + 1] [i_1 - 3])));
                            var_16 = ((((/* implicit */int) arr_24 [i_1 - 2] [i_2] [i_3] [i_4] [i_6])) / (((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_6])));
                            var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */int) var_7)) : (var_9)))));
                        }
                        arr_26 [i_1 - 2] [i_1] = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)0))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 650248717)) ? (((/* implicit */int) (short)-24909)) : (((/* implicit */int) (signed char)-30))));
            var_20 = ((/* implicit */long long int) var_1);
        }
        arr_27 [i_1] [i_1] = ((/* implicit */signed char) arr_23 [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1] [i_1] [i_1]);
    }
    for (long long int i_7 = 4; i_7 < 17; i_7 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */long long int) min((((((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 3] [i_7 - 4])) < (((((/* implicit */_Bool) var_7)) ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) : (var_9))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)22729)), (8648408855333273902LL)))) || (((((/* implicit */_Bool) 7822853047732818266LL)) || (((/* implicit */_Bool) (unsigned short)40367))))))));
        var_22 &= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) -4791958614564295678LL)))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((-1130045138), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_10)) : (((var_4) >> (((var_5) + (79543290)))))));
}
