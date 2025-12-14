/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112742
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((var_0), (var_7))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 + 2]))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1])) ? (5216829107877405856ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1]))));
                var_17 = ((/* implicit */int) ((arr_5 [i_1 + 2]) ? (((((/* implicit */_Bool) 4867944830661654688ULL)) ? (var_10) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))));
            }
            for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3 + 2])) || (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_3 + 2]))));
                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) var_0));
                arr_13 [i_1] [i_1] = (((!(arr_10 [i_1]))) && (((var_2) == (arr_0 [i_0] [i_1 - 1]))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [20ULL]));
            }
            var_19 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_11)))) == (((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_6 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))));
            var_20 = arr_7 [i_1] [i_1 - 1];
        }
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_9 [i_4 - 1] [(unsigned short)10] [i_4 - 1] [i_4 + 1]))))))));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_20 [i_5] [i_5] &= ((/* implicit */short) (~(((unsigned long long int) arr_17 [i_0] [i_4 + 1] [i_0]))));
                var_22 = ((/* implicit */unsigned long long int) arr_2 [i_5]);
            }
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 14668485010539203298ULL);
                var_23 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            }
        }
        arr_25 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((+(arr_2 [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(short)18] [(short)18] [i_0])))))) | (((((/* implicit */unsigned long long int) max((arr_16 [i_0]), (((/* implicit */long long int) (short)-21349))))) % (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0]))))))));
        arr_26 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0]))))), (((arr_18 [i_0] [i_0] [i_0]) | (arr_18 [i_0] [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        var_24 = ((/* implicit */int) min((var_24), (min((((/* implicit */int) arr_10 [(_Bool)1])), (((((/* implicit */int) (!(((/* implicit */_Bool) 12301534529656624420ULL))))) * (((/* implicit */int) ((signed char) arr_28 [i_7])))))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)53))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7])) ? (arr_21 [i_7] [i_7] [i_7]) : (arr_21 [i_7] [i_7] [i_7])))) : (max((((/* implicit */unsigned long long int) arr_18 [i_7] [(_Bool)1] [i_7])), (arr_3 [i_7] [i_7])))));
        var_26 ^= ((/* implicit */signed char) min((arr_8 [i_7]), (arr_8 [i_7])));
        arr_29 [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7])))))) ? (((arr_16 [i_7]) << (((((((/* implicit */int) (signed char)-126)) + (186))) - (60))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)255)), (var_2))))))));
        arr_30 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) - (0ULL)));
    }
    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 13186933218096168325ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)228))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_5), (((/* implicit */long long int) var_4))))))) : (var_5)));
}
