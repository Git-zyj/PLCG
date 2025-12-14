/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125334
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
    var_10 = ((/* implicit */signed char) var_6);
    var_11 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((((/* implicit */int) (unsigned char)4)) >> (((/* implicit */int) (signed char)0)));
                    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (signed char)0)) : (-46674472)));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-4)), (-257286710))))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)13239))))) + (min((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0 + 1])))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -46674472))));
        var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)14] [i_3])))))));
        arr_10 [i_3] = ((/* implicit */unsigned char) (((((((!(((/* implicit */_Bool) arr_0 [14LL] [i_3])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-17887))))) : (min((((/* implicit */long long int) var_6)), (arr_0 [(short)8] [i_3]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [(unsigned short)10])) : ((-(((/* implicit */int) (signed char)4)))))) + (21912)))));
        var_18 = ((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_3]);
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32256))) - ((+(min((((/* implicit */unsigned int) 382464239)), (var_0)))))));
    }
    for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (unsigned char)51)))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)4)))), (((/* implicit */int) ((((/* implicit */_Bool) 536870911U)) || (((/* implicit */_Bool) (short)27403)))))))) ? (((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */int) arr_11 [i_4]))))) : (((unsigned int) ((arr_12 [i_4] [i_4]) >> (((6755399441055744ULL) - (6755399441055698ULL))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        var_22 = ((/* implicit */long long int) (-(arr_17 [i_5 - 1])));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_5 - 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)4))));
                    arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_5] [i_5] [i_5 + 1] [i_7]))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32797))) - (18)))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (~(2066375428011941080ULL)))) ? (((((/* implicit */_Bool) arr_24 [i_6] [i_7])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(_Bool)1] [i_7]))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [2LL] [i_6] [i_7])) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483620))) + (31)))))))))));
                }
            } 
        } 
    }
}
