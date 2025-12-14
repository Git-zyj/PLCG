/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112785
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_18 *= ((/* implicit */unsigned long long int) var_4);
                arr_7 [i_0] [19ULL] [19ULL] = ((/* implicit */unsigned int) (signed char)73);
                arr_8 [i_2] [(unsigned char)1] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            arr_16 [i_1] = var_9;
                            var_19 = ((/* implicit */unsigned long long int) ((_Bool) 14625625879720259924ULL));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))) & (((/* implicit */int) (unsigned char)241))));
                var_21 = ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [8ULL] [i_1] [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (22ULL) : (14625625879720259944ULL))));
                arr_17 [20] = ((/* implicit */unsigned long long int) (short)3503);
            }
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                arr_20 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((10269994966432230261ULL) > (((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [(unsigned char)20]))));
                var_22 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [17ULL]))));
            }
            arr_21 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
            arr_22 [(unsigned char)20] [(unsigned char)20] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)20928))));
            arr_23 [i_0] [(short)4] = ((/* implicit */short) arr_13 [5U] [(short)8] [(unsigned char)11]);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned char) arr_15 [(short)11] [10])))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((short) var_1)))));
        }
        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_29 [6ULL] [6ULL] [(unsigned char)21] = ((/* implicit */int) arr_13 [i_0] [i_8] [(unsigned char)23]);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32756))))) ? (((((/* implicit */_Bool) arr_24 [18ULL] [i_8] [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))) : (arr_14 [(unsigned char)23] [16ULL] [16ULL] [i_8] [(short)17]))))));
            arr_30 [(unsigned char)24] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20918)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (1120004274222540920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))))) : (((((/* implicit */_Bool) arr_5 [6] [i_8] [i_0])) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20917)))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((6116183503142880720ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27992))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25689))) % (var_14)))));
            arr_35 [20ULL] [1ULL] [i_9] = ((/* implicit */int) var_11);
            arr_36 [i_9] [i_9] = ((/* implicit */int) (~(var_7)));
        }
        var_27 = ((/* implicit */unsigned long long int) ((int) arr_1 [24]));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [3ULL])) : (((/* implicit */int) var_11)))))));
    }
    var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)5624)) ? (((var_15) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))))) : (((unsigned long long int) 3280158725518349122ULL)))) % (((unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-20938))))));
}
