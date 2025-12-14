/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142983
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (signed char)69)))));
                    arr_9 [(_Bool)1] [(signed char)5] [(_Bool)1] [i_2] = ((/* implicit */long long int) min(((signed char)-79), ((signed char)125)));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 3845752076573380556ULL)))) / (max((2382754962U), (((/* implicit */unsigned int) arr_1 [i_0]))))))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)84)))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) 1458753767))))), (max((266287972352LL), (arr_7 [i_0 - 1] [i_0] [15ULL] [(signed char)7])))))) ? (((/* implicit */unsigned long long int) ((((arr_8 [i_0 - 4] [i_0 + 1] [i_0 - 2] [i_0 + 1]) + (9223372036854775807LL))) >> (((arr_8 [i_0 - 4] [i_0 - 1] [i_0 - 2] [i_0 - 1]) + (7853532232368969637LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8)))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [i_0 - 4] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6025))) : (arr_3 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) 1158267486U)) % (var_0)))))));
        arr_10 [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (min((((/* implicit */unsigned long long int) min((arr_12 [i_3]), (arr_12 [i_3])))), (((arr_11 [i_3]) ^ (arr_11 [i_3]))))) : (((unsigned long long int) arr_11 [i_3]))));
        arr_13 [i_3] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((266287972352LL) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((((/* implicit */unsigned long long int) arr_12 [i_3])) / (var_11)))))) ? (max((((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_12 [i_3]) : (var_6))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_12 [i_3]) : (arr_12 [i_3]))))) : (((long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)5739)) : (-1277455078)))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (short)23557)) ? (2506374852U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3]))))))))));
                    var_18 = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 266287972352LL)))))))));
                }
            } 
        } 
        arr_19 [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59815)) ? (((/* implicit */int) (short)-9701)) : (((/* implicit */int) (signed char)-50))));
    }
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
}
