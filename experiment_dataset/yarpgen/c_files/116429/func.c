/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116429
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
    var_15 = min((var_13), ((-(var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (var_7) : (var_13));
        var_16 = ((unsigned int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_17 += ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) min((((/* implicit */unsigned long long int) var_9)), (17838194458837057690ULL)))));
        var_18 = var_9;
    }
    for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((_Bool) min((var_0), (((/* implicit */long long int) var_9))))) ? (var_0) : (((long long int) (+(17895673071590363709ULL))))));
        var_19 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 - 1])) ? (min((var_13), (608549614872493931ULL))) : (((((/* implicit */_Bool) arr_7 [11ULL])) ? (var_5) : (var_13)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((long long int) arr_3 [i_2])) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 4])))));
                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 + 2] [i_3] [12LL]))) / (arr_3 [i_3])));
            }
            arr_16 [13ULL] [i_3] [i_3] = ((/* implicit */long long int) 8772681831239389251ULL);
            arr_17 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_2 - 4]));
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            arr_20 [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((1260275746U), (((/* implicit */unsigned int) arr_7 [0U]))));
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) ((arr_6 [i_2]) != (((/* implicit */unsigned long long int) arr_5 [i_5] [5LL]))))))))) % (var_2)));
            var_23 = ((/* implicit */long long int) ((unsigned char) 1023ULL));
            var_24 -= ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (13609595877457751121ULL))) == (17838194458837057690ULL))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((unsigned long long int) (~(var_5))));
            var_26 = (unsigned char)255;
            arr_25 [i_2] [(unsigned char)13] [i_2] = (+(1073741823U));
        }
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_27 -= (-(var_5));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_12 [i_2]))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((unsigned char) arr_11 [7ULL] [i_7]))));
        }
    }
}
