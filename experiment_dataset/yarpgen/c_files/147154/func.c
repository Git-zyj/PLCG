/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147154
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
    var_19 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) * (((((/* implicit */int) (unsigned short)255)) + (((/* implicit */int) (short)7))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8))))) < (((/* implicit */int) (short)14))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)22)) && (((/* implicit */_Bool) (short)0))))) << (((((/* implicit */int) min(((unsigned short)40983), (((/* implicit */unsigned short) (signed char)-79))))) - (40961)))));
                    arr_14 [i_1] = ((/* implicit */short) min((min((((/* implicit */long long int) (unsigned short)24553)), (-4325377804964259089LL))), (((var_16) % (arr_10 [i_1])))));
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */short) min((max((((/* implicit */long long int) var_14)), (2419073582312166227LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_3 - 1])) != (((/* implicit */int) (unsigned short)40983)))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((((((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [(unsigned short)16])) ^ (((/* implicit */int) var_2))))) | (((arr_4 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (short)14))))))) + (9223372036854775807LL))) << (((((min((((/* implicit */int) arr_7 [i_1] [(signed char)18])), (((((/* implicit */int) arr_11 [i_1] [i_1])) << (((var_6) - (1705484704769879739ULL))))))) + (26133))) - (30)))))));
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((max((((/* implicit */short) (unsigned char)255)), ((short)-51))), (((/* implicit */short) (signed char)-9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17))) | (18446744073709551615ULL)))));
        arr_17 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) (signed char)104)), (arr_11 [i_1] [i_1])))) + (((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) var_1)))))))), (((((/* implicit */long long int) ((/* implicit */int) (short)8191))) & (-3730413862783596075LL)))));
    }
    var_21 = ((/* implicit */unsigned short) var_1);
}
