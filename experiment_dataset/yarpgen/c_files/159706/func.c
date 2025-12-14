/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159706
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_2 [i_1])))))) == (((/* implicit */int) var_8)))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3] [i_3] [i_4 - 1] [i_4])) ? (((/* implicit */long long int) -98994552)) : (arr_4 [i_2] [i_1] [i_4 - 1]))))));
                            arr_14 [i_0] = ((/* implicit */signed char) ((((((unsigned long long int) var_1)) ^ (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_0])))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (5066393771759243987ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_14)))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 98994544))));
                arr_15 [i_0] = ((/* implicit */unsigned char) 98994551);
                arr_16 [(short)5] [(short)9] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)4)), (var_14)))))));
                arr_17 [i_0] = ((/* implicit */long long int) 11230135850708915404ULL);
            }
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                arr_21 [8] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) arr_11 [(short)2] [(short)2] [i_5] [i_5] [i_0]);
                var_20 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((var_2) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [8LL] [i_0])))) & (((((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_1] [i_1])) >> (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [(unsigned short)2] [i_5]))))))) : (((/* implicit */unsigned long long int) ((((var_2) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [8LL] [i_0])))) & (((((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_1] [i_1])) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [(unsigned short)2] [i_5])) - (35))))))));
            }
        }
        arr_22 [i_0] = ((/* implicit */unsigned long long int) var_10);
        arr_23 [i_0] = ((/* implicit */unsigned char) -1686700405);
        var_21 = ((/* implicit */unsigned char) min((-98994543), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */unsigned int) ((var_4) << (((max((((var_4) << (((18446744073709551615ULL) - (18446744073709551613ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) 98994552))))))) - (227858836)))));
}
