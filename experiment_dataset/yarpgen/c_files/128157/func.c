/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128157
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) < (var_0))))) & (var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_1 [i_0]))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((((/* implicit */int) (unsigned char)151)) % (1286535058))) : (((/* implicit */int) var_8))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)88)) - (((/* implicit */int) (signed char)111))));
            var_20 = ((/* implicit */_Bool) ((-1286535058) - (((/* implicit */int) (short)-32759))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_12);
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_7 [i_0]))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29725))) : (9647912123878329104ULL)));
            var_23 = ((/* implicit */signed char) ((9223372036854775800LL) <= (((/* implicit */long long int) 1286535058))));
        }
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2870837330U)) ? (arr_4 [(unsigned char)19] [(unsigned char)19] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                {
                    arr_19 [(unsigned char)19] [i_4 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_5 + 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) : (var_15)));
                    arr_20 [(signed char)16] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)23020)) : (arr_8 [i_5]))) / (((/* implicit */int) ((arr_2 [i_0] [i_4] [i_5 + 1]) >= (((/* implicit */unsigned long long int) var_10)))))));
                    var_25 = ((/* implicit */long long int) arr_18 [i_4 - 1] [i_4 + 1] [i_4 + 1] [18ULL]);
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
    {
        arr_25 [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) 6464489106517956870LL))), (((((/* implicit */_Bool) 15334184667874807991ULL)) ? (5356644067065453836ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_8 [i_6])) : (min((((/* implicit */unsigned int) var_11)), (var_12)))))) : (var_7)));
        arr_26 [15ULL] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-84)))) ? ((+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)35026)) : (-1286535058))))) : (((((/* implicit */int) arr_14 [i_6])) % (((/* implicit */int) (short)32763))))));
    }
    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))));
}
