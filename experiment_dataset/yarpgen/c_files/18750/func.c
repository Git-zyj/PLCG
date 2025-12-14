/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18750
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
    var_11 = ((/* implicit */short) (-((-((+(((/* implicit */int) (short)-2779))))))));
    var_12 |= ((/* implicit */int) max((min((((((/* implicit */_Bool) (unsigned short)65535)) ? (2556090063873537709LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) var_0))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */_Bool) (short)-15449)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_1] [(unsigned char)2] [(unsigned char)2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) arr_6 [i_1])), (arr_7 [i_1]))) : (min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1])))))))));
                        var_14 = ((/* implicit */long long int) max((var_14), (max((((/* implicit */long long int) (unsigned char)65)), (max((min((var_1), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_2]))))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)61)), (2590228961U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) -3177765144354620355LL)))))) : (min((arr_4 [i_2 + 4] [i_3 - 1] [i_1]), (((/* implicit */unsigned int) (short)-1))))));
                        var_16 = ((/* implicit */unsigned short) (signed char)127);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (arr_7 [i_4])));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_6] [i_5] [i_4] [i_6]) : (((/* implicit */long long int) arr_6 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_4] [i_6])));
                    arr_23 [i_5] [i_5] = ((((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) < (611383363));
                    arr_24 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)102))));
                }
            } 
        } 
        var_18 ^= ((/* implicit */unsigned short) ((((arr_8 [i_4] [i_4] [i_4] [i_4]) + (9223372036854775807LL))) << (((var_6) - (9364118101716009237ULL)))));
        var_19 = ((arr_0 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) (unsigned char)24)))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-86)) - (((/* implicit */int) (unsigned short)1)))) + (2147483647))) >> (((/* implicit */int) (!((_Bool)1))))))) ? (var_1) : (((/* implicit */long long int) 2147483647U))));
}
