/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125171
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) var_1))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_11 |= ((/* implicit */signed char) var_2);
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_13 -= ((/* implicit */unsigned int) arr_6 [i_2]);
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_5))));
        }
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_15 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((2213452859U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43662))))))));
            var_16 = ((((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_6 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)))));
        }
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_12 [(unsigned short)0] = ((/* implicit */signed char) arr_3 [i_4]);
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) var_0);
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4])))))) < (var_0))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_5]))))))))))));
            var_19 = ((/* implicit */short) arr_6 [22ULL]);
        }
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned char) arr_15 [i_4]);
            var_21 = ((((((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_15 [i_6]))) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4] [i_6]))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 - 2] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6 - 2] [i_6 + 1]))) : (arr_17 [i_6 - 2] [i_6 + 1])))))))));
        }
        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
        {
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4]))) | (var_0)))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_0))));
        }
    }
    var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */int) var_9)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13650)))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_5))));
}
