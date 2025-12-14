/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104176
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(signed char)16] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)152))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [10ULL] [i_0])) != (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) >= (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104)))))) ? (max((((/* implicit */int) var_4)), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_4)))))) : (max((((/* implicit */int) ((short) var_5))), (((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) var_1)) + (15287)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)231)) / (((/* implicit */int) (unsigned short)53383))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) var_2))))), (((arr_1 [(short)15] [i_0 - 2]) / (var_5))))))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_12 [i_1] [i_1 + 1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
            var_12 = ((/* implicit */short) (-(18446744073709551615ULL)));
            arr_13 [i_2] [i_1 + 2] = ((/* implicit */unsigned short) (unsigned char)156);
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned long long int) var_8);
            arr_17 [i_1] = ((/* implicit */short) (unsigned char)108);
            arr_18 [i_1] = ((/* implicit */unsigned short) ((arr_11 [i_1 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1023ULL)));
        }
        arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 + 3]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_7))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((signed char) max((arr_21 [i_4] [i_4]), (((/* implicit */int) var_0)))));
        var_14 |= ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min(((unsigned char)169), ((unsigned char)94)))))), (max(((-(((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) var_0))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)96))))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))))))));
                arr_28 [i_5] [i_6] = ((/* implicit */unsigned short) ((arr_4 [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5])))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_3))))) & (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)113))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))))))));
}
