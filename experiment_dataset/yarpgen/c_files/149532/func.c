/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149532
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (unsigned char)53))));
        var_14 = ((/* implicit */unsigned int) (-(8525719078072236542ULL)));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) (-(arr_1 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(var_3)))), (max((arr_8 [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)-78))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_2] [13ULL]), (((/* implicit */unsigned long long int) (short)28867))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_3]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (var_12)))))) && (((/* implicit */_Bool) var_1))));
                    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2] [(unsigned short)0]))))), (arr_6 [i_2] [(short)8])));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) var_2);
    var_19 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                {
                    arr_22 [i_4] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_6] [i_6 + 1] [i_6 - 1]))))), (max((var_0), (max((var_12), (((/* implicit */unsigned long long int) var_9))))))));
                    arr_23 [i_4] [i_4] [i_6] = var_12;
                    var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (short)28862))))));
                    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_16 [i_4] [i_5] [i_6])))));
                    arr_24 [i_4] [i_5] [i_6 - 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65534))))) ? (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 + 1] [(unsigned char)8] [i_6 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_6 - 1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (var_2))))));
}
