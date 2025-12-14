/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116098
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_12 |= (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) != (((/* implicit */int) (unsigned short)61440))))))));
        var_13 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_1))))));
    }
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 4 */
    for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1]))) : (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((short) ((unsigned char) arr_5 [i_1 - 2])));
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)16227), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551593ULL))))))))) | ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) & (var_2)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) (~(((unsigned int) ((unsigned short) var_9)))));
        arr_9 [i_2] = ((/* implicit */short) ((var_0) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_2]))))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 1] [i_5 - 1])) ? (2154618108822180508LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40544))))));
                        arr_19 [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((arr_12 [i_3] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-81)))))) ? (arr_15 [i_2] [i_3 - 1] [i_4 - 1] [(_Bool)1]) : (arr_15 [i_4] [i_4] [i_4 + 3] [i_2])))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_11 [i_2]))))));
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        var_19 = ((int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (-2154618108822180509LL)));
        arr_23 [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) arr_2 [i_6] [i_6]))))));
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_20 = 403911343;
        var_21 = ((/* implicit */int) ((short) (-(((/* implicit */int) arr_25 [i_7])))));
    }
    var_22 = ((/* implicit */short) var_10);
}
