/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151782
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
    var_20 = min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_19) / (((/* implicit */int) var_8))))) != ((((_Bool)1) ? (var_12) : (18446744073709551613ULL)))))), ((~((~(4284888194U))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (_Bool)0)) << (2ULL))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_19) : (((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), ((unsigned char)114)));
                    arr_11 [i_0] [12] [i_2] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) var_19)) : (arr_6 [(unsigned char)0] [i_1]))) >> (((((/* implicit */int) arr_7 [i_0] [(signed char)1] [i_2])) - (21623)))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) 1405400214567104152LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) (-(arr_6 [i_3] [2ULL])));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((short) 1125899906842623ULL));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (arr_13 [i_4 - 1]) : (arr_13 [i_4 + 1])));
                        arr_24 [i_6] &= ((/* implicit */int) 1125899906842623ULL);
                        var_26 = ((unsigned char) arr_7 [i_3] [i_4 + 1] [i_5]);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (~(arr_1 [i_3])));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) 0ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            arr_30 [i_7] = ((/* implicit */unsigned long long int) var_5);
            var_29 = ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8]))) : (arr_28 [i_8]));
        }
    }
}
