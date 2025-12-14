/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12813
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
    var_14 = ((/* implicit */unsigned int) var_7);
    var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */_Bool) (unsigned char)189)) && (((/* implicit */_Bool) (short)-16275)))) && (((/* implicit */_Bool) var_5))))));
    var_16 = ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((arr_0 [i_0]) | (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (-715863714) : (((/* implicit */int) (unsigned char)31)))) : (arr_1 [i_0])));
        var_17 = ((/* implicit */short) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_18 *= ((/* implicit */_Bool) min((14918462116160138078ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 17; i_2 += 4) 
        {
            var_19 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((-1585253632528023438LL) | (((/* implicit */long long int) 715863708))))), (15735774212418772901ULL)));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                arr_10 [i_3] [i_2] [i_3 + 2] = (-(((unsigned long long int) var_5)));
                arr_11 [i_1] [(signed char)5] [i_3] = ((var_13) ? (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((4793648471370233856ULL) == (16998808181299783555ULL)))), ((-(7587205678741270133LL)))))));
                arr_12 [i_1] [i_3] [i_2 - 3] [i_3] = ((((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */int) ((arr_6 [i_3] [i_2] [i_1]) || (var_13))))))) ? (arr_5 [i_1]) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3])));
                var_20 = ((/* implicit */long long int) ((-1LL) != (-2966972213647637610LL)));
                var_21 |= ((/* implicit */unsigned char) min((arr_9 [i_2 - 2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_3), (arr_6 [7LL] [i_2] [i_2])))) == (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2))))))))));
            }
            var_22 *= ((/* implicit */long long int) min(((~(((/* implicit */int) (!(var_3)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_0))))))))));
            var_23 -= ((/* implicit */signed char) (-(524287ULL)));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_4] [i_4]))))) <= (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))), (var_4)))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                var_24 *= ((/* implicit */_Bool) var_8);
                var_25 = ((/* implicit */signed char) var_10);
            }
        }
    }
}
