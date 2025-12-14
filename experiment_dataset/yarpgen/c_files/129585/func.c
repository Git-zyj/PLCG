/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129585
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
    var_17 = ((/* implicit */unsigned short) (~(max((((var_1) << (((((/* implicit */int) var_8)) - (182))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_0)) - (41))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_18 |= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) << (((((/* implicit */int) (signed char)-22)) + (29)))))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 - 3])))) : (((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] |= ((/* implicit */unsigned int) ((max((min((8110092755068129734LL), (10657007302418551LL))), (((/* implicit */long long int) (signed char)-3)))) + (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)24935), (((/* implicit */unsigned short) (signed char)40))))))));
        arr_3 [(unsigned short)12] [i_0 - 1] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned char) var_12);
        arr_4 [i_0] = max((((/* implicit */long long int) max((arr_1 [i_0 + 2]), (arr_1 [i_0])))), ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-38))) & (3009297126548071348LL))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_5 [(unsigned char)19]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) ((short) (signed char)21))) : (((/* implicit */int) (unsigned short)3584))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_13 [i_2 - 1] [i_3 + 1]))))) : (-7729796843296659443LL)));
                var_22 = ((/* implicit */int) ((((9398194087691126559ULL) + (var_9))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_3 + 2] [i_2 + 2] [i_1])))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2] [i_4 - 1]))));
                var_23 = var_9;
            }
            arr_18 [(unsigned char)1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (max((((/* implicit */unsigned short) (signed char)-50)), (((unsigned short) (unsigned char)205))))));
            arr_19 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-10737)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) : (4294967295U))))) / (1870211529746982642ULL)));
        }
    }
    var_24 = ((/* implicit */_Bool) min((((var_12) << (((((/* implicit */int) max(((unsigned char)97), (((/* implicit */unsigned char) (_Bool)1))))) - (97))))), (((/* implicit */long long int) (signed char)45))));
}
