/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16208
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
    var_10 = ((unsigned char) ((var_8) - (((/* implicit */int) ((signed char) (unsigned char)233)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) ((unsigned short) 8864233463423838616LL))) : (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_7))))));
                arr_6 [15LL] |= ((/* implicit */int) ((unsigned char) ((long long int) (signed char)1)));
                arr_7 [i_0] [i_0] [12LL] = -983823728;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) max(((unsigned char)253), (((/* implicit */unsigned char) (signed char)-19))));
        var_11 ^= max((((((/* implicit */int) (unsigned char)32)) / (arr_10 [i_2 + 1]))), (((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1]))));
        arr_12 [i_2 + 1] &= ((/* implicit */unsigned long long int) (signed char)-28);
        var_12 = ((/* implicit */int) (-((~(arr_8 [i_2 - 1])))));
    }
    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_13 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) 683936352))), (arr_14 [i_3] [i_3 + 1])));
        arr_15 [i_3] = ((/* implicit */short) arr_9 [i_3 + 2]);
        arr_16 [i_3] = ((/* implicit */signed char) arr_14 [0LL] [0LL]);
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-63)) + (2147483647))) << (((((((/* implicit */int) (signed char)-47)) + (71))) - (24))))) != (((max((arr_10 [i_3]), (((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45574)) && (((/* implicit */_Bool) var_4)))))))));
            arr_21 [i_3] [(short)19] = ((/* implicit */signed char) (unsigned char)159);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            arr_24 [i_3] = ((/* implicit */long long int) ((signed char) arr_13 [i_3] [i_5]));
            arr_25 [i_3] = ((/* implicit */short) ((int) arr_23 [i_3 + 1]));
            arr_26 [i_3 + 2] [23ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24177)) ? (((/* implicit */unsigned long long int) var_9)) : (1175058090641713381ULL)));
        }
    }
}
