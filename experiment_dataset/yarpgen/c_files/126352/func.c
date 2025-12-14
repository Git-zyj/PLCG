/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126352
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_0] [i_2] [i_0]) ^ (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)0)))) ^ (((/* implicit */int) (signed char)3)))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) arr_7 [i_0] [i_1] [(signed char)8]);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1])))) - (60)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2 + 2])), (arr_4 [(short)1] [i_2 + 3])))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)20)), (arr_4 [i_0] [i_1])))) : (((/* implicit */int) (signed char)-20))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_2))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_3))));
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (max((max((var_5), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_7))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])), (((((/* implicit */unsigned long long int) (-(-7608794625370196420LL)))) / (((((/* implicit */_Bool) arr_13 [i_3] [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) : (10427151072947478294ULL)))))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 268435456U)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))))) != (var_8)))), (((long long int) arr_15 [i_4] [i_4] [i_6]))));
                        var_26 += ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((arr_24 [i_7]) + (((/* implicit */int) var_11))));
        var_28 |= ((/* implicit */long long int) var_19);
        var_29 += ((/* implicit */unsigned char) arr_25 [(signed char)13]);
        arr_27 [7ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_26 [(unsigned short)17])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_25 [i_7])))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)27)) : (((/* implicit */int) (unsigned short)0))))));
        arr_28 [i_7] = ((/* implicit */long long int) ((short) arr_25 [i_7]));
    }
}
