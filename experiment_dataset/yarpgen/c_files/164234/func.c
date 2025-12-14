/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164234
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
    var_12 = var_11;
    var_13 = ((_Bool) (short)-29881);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_14 += ((/* implicit */long long int) ((unsigned char) ((short) arr_0 [i_0])));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(-13)))), (4851350665214132043LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) var_4))))) ? (arr_4 [i_1]) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4851350665214132044LL)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)4191))))))))));
            arr_5 [(unsigned short)4] [(unsigned short)4] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~((~(arr_0 [i_0])))))), (((unsigned int) arr_4 [i_0]))));
            arr_6 [i_1] [(short)0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61345)))))) && (((/* implicit */_Bool) 4851350665214132040LL))));
        }
        var_16 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) 4851350665214132068LL)))))) > (((arr_4 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
    }
    for (unsigned int i_2 = 4; i_2 < 15; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */short) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])))), ((!(((/* implicit */_Bool) 3787773316117470376LL)))))))));
                        arr_20 [i_2] [i_2] [i_3] [(_Bool)1] [i_5] [i_2] = ((/* implicit */short) ((long long int) ((((-4851350665214132057LL) ^ ((-9223372036854775807LL - 1LL)))) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        arr_21 [i_2] = var_4;
    }
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                {
                    arr_31 [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (arr_0 [i_8 + 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)8192)) && (((/* implicit */_Bool) arr_25 [i_6])))))))) : (min((((/* implicit */long long int) arr_18 [0ULL] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1])), (((long long int) arr_29 [i_7] [i_7]))))));
                    var_17 = ((/* implicit */_Bool) (~(-4611686018427387904LL)));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */signed char) var_7);
}
