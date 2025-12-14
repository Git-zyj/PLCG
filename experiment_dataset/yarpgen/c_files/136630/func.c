/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136630
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_1 + 4] [i_1]))))));
                var_17 = min((((((/* implicit */_Bool) ((661224566U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))) ? (((/* implicit */int) (unsigned char)127)) : (((((/* implicit */_Bool) (signed char)-123)) ? (var_4) : (arr_3 [i_1]))))), ((-(((/* implicit */int) var_7)))));
                var_18 = ((/* implicit */_Bool) var_15);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((((/* implicit */_Bool) (unsigned char)31)) && (((/* implicit */_Bool) (signed char)-119)));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_16 [i_3] [i_4] [i_4] = ((/* implicit */signed char) 1256341925);
                    var_19 *= ((/* implicit */_Bool) (-((-(arr_9 [i_2 + 2])))));
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_2 - 2])))));
                    var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_14)) == (arr_15 [i_3 + 3] [i_2 - 1])))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_22 |= ((/* implicit */signed char) (_Bool)1);
        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967282U)) && (((/* implicit */_Bool) arr_9 [0]))))) % (((/* implicit */int) (unsigned short)23251)))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) /* same iter space */
    {
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29681))) >= (arr_21 [i_6 + 1])));
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-29668)) - (((/* implicit */int) (signed char)-119))));
    }
    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_15 [i_7 + 2] [i_7 + 1])))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_13 [i_7 - 1] [i_7 - 1]) : (arr_13 [i_7 - 1] [i_7 + 2])))) ? (((/* implicit */long long int) arr_21 [i_7])) : (((((-1256341917) > (((/* implicit */int) (unsigned short)21803)))) ? (max((211783434328878762LL), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) arr_6 [i_7 + 1] [i_7 + 2]))))));
    }
    var_27 = ((/* implicit */short) var_11);
}
