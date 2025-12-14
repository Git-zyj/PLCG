/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128526
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (+(-939038025)));
                    var_13 -= ((/* implicit */long long int) (+(arr_1 [11ULL])));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (939038024) : ((~(((/* implicit */int) arr_0 [i_0 - 2])))));
    }
    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((int) -939038018));
        var_15 -= ((/* implicit */unsigned int) min(((+(939038024))), (var_8)));
        arr_12 [1] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (arr_11 [i_3 + 2])))), (((((/* implicit */_Bool) 6712193151147286475ULL)) ? (((/* implicit */unsigned int) arr_11 [i_3 + 1])) : (arr_1 [i_3])))));
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (var_10)))) ? (arr_4 [9U] [i_4]) : (var_10)));
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            var_16 = ((/* implicit */int) max((min((5115160598011473639ULL), (((/* implicit */unsigned long long int) arr_19 [i_5 - 1])))), (((/* implicit */unsigned long long int) arr_1 [17ULL]))));
            var_17 = ((/* implicit */unsigned long long int) arr_14 [i_4] [(_Bool)1]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((arr_7 [i_5] [i_6] [i_7]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_0 [i_4]))))))))) & (((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_5 + 2] [i_5 + 1])) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (arr_24 [i_7])))) : (((((/* implicit */_Bool) arr_10 [i_4] [18ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1987220920U)))))));
                        arr_27 [i_4] [13ULL] [13ULL] [i_6] [9ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_20 [i_4] [i_4] [12U] [(_Bool)1]), (((/* implicit */long long int) var_1))))) || (((/* implicit */_Bool) var_8)))) ? (min((3077531285U), (((/* implicit */unsigned int) arr_17 [i_5 - 1] [i_6])))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_7] [6ULL])) ? (939038017) : (((/* implicit */int) (short)18760)))))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((arr_11 [i_5 - 1]) < (arr_24 [i_5 - 1]))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5 - 1]))))) : ((+(arr_11 [i_5 + 1])))));
                        arr_28 [i_4] [i_4] [i_6] [(short)10] [i_5 + 2] [i_4] = ((/* implicit */short) arr_4 [i_5] [i_4]);
                    }
                } 
            } 
            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) / (arr_5 [i_5 - 1] [i_5 + 2] [i_4])));
        }
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_4))), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
}
