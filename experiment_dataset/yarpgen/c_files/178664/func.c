/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178664
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)23] = ((/* implicit */unsigned char) arr_3 [i_0 + 2] [i_1 - 2]);
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [(unsigned short)15])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */int) var_8)) : (var_11))) : ((+(((/* implicit */int) var_3))))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) min((max((arr_2 [i_0] [i_0] [i_1]), (var_2))), (((/* implicit */long long int) arr_1 [i_0 + 1] [i_1 + 1])))))));
                var_15 = ((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_7 [(unsigned char)7] = ((/* implicit */_Bool) ((signed char) (~(min((((/* implicit */unsigned long long int) arr_5 [i_2])), (arr_3 [i_2] [i_2]))))));
        var_16 ^= ((/* implicit */unsigned long long int) ((((max((var_2), (arr_2 [i_2] [i_2] [i_2]))) > (((/* implicit */long long int) (+(var_6)))))) ? (((/* implicit */int) ((((arr_5 [i_2]) + (((/* implicit */int) arr_6 [(unsigned short)3])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_0 [i_2])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1111839339)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] [i_3] = (~(((/* implicit */int) (short)-32153)));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1] [i_3 - 1]) + (((/* implicit */unsigned long long int) arr_9 [i_3]))))) ? (((((/* implicit */_Bool) arr_5 [(signed char)7])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_13 [i_3])))) : (var_6)));
            var_17 = ((/* implicit */_Bool) (+(((arr_10 [i_3]) ? (arr_2 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 4; i_5 < 23; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 - 1])) ? (arr_3 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) var_4))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_6] [i_3] [i_3] [i_3 - 1])) * (((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_3] [i_6 - 1]))));
                        arr_20 [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((arr_9 [i_6 - 1]) >> (((arr_9 [i_6 + 1]) - (77035129U)))));
                        arr_21 [i_3] [(short)5] [(short)5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_12 [i_4] [i_6 - 1])))) ? (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) arr_1 [18ULL] [i_3])))) : (((/* implicit */int) ((short) var_3)))));
                        var_20 ^= ((/* implicit */long long int) ((2147483647) >> (((/* implicit */int) arr_19 [i_3] [i_3 + 1] [i_4] [i_5 + 1] [i_6 + 1] [i_4]))));
                    }
                } 
            } 
        }
    }
}
