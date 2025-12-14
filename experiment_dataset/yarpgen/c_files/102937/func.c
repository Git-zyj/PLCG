/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102937
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
    var_12 = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) (-(4273003029U)))), (-9223372036854775796LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 2])) ? (((long long int) arr_3 [i_0])) : (((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) var_0)) : (var_1))) & (((/* implicit */long long int) ((993658411) >> (((arr_3 [i_1]) - (8736134020541557675LL))))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) var_5);
                    arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)79)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)7552)) < (((/* implicit */int) arr_1 [i_0 - 1])))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (arr_6 [i_0 + 3] [i_0 + 3] [i_2] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_3] = ((((-2537983566209859225LL) - (((/* implicit */long long int) var_6)))) - (((/* implicit */long long int) ((int) (_Bool)1))));
                    var_15 ^= ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_5 [i_0])))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
                {
                    var_16 = (-(((((/* implicit */int) arr_12 [i_0] [i_1] [i_4 + 2])) >> (((((/* implicit */int) arr_12 [i_0 - 1] [2LL] [i_4 - 1])) - (144))))));
                    var_17 = ((/* implicit */signed char) (_Bool)1);
                    arr_15 [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_5 [15ULL])) > ((((_Bool)1) ? (arr_4 [i_4 + 1] [i_0 + 3]) : (((/* implicit */long long int) -1318143652))))));
                    var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23307))))) ? (((/* implicit */int) arr_12 [i_0 + 2] [i_0] [i_1])) : (((/* implicit */int) min(((unsigned short)11978), (((/* implicit */unsigned short) (unsigned char)31)))))));
                    var_19 = (i_4 % 2 == 0) ? (((/* implicit */signed char) (+(((15509103313026356245ULL) << (((arr_10 [i_4]) - (6539785012128683926ULL)))))))) : (((/* implicit */signed char) (+(((15509103313026356245ULL) << (((((arr_10 [i_4]) - (6539785012128683926ULL))) - (9877230135504440459ULL))))))));
                }
                arr_16 [i_1] [i_0] = arr_13 [i_1] [i_0] [i_0 + 3] [i_1];
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned char)67))));
            }
        } 
    } 
}
