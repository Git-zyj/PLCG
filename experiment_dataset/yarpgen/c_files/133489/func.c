/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133489
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
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_1 [(unsigned short)9])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2])) == (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) % (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) 2930641285634590193ULL)))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (_Bool)1))));
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 16; i_2 += 2) 
        {
            arr_8 [i_2 - 4] [i_2] [i_2] = ((/* implicit */long long int) var_18);
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) max((min((15516102788074961423ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (-(var_7))))));
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_24 |= ((/* implicit */unsigned long long int) arr_11 [i_1 + 2]);
            var_25 = ((/* implicit */long long int) ((signed char) var_16));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((arr_6 [i_1]) & (((/* implicit */int) ((15516102788074961416ULL) > (18359024684805142555ULL)))))))));
            var_27 = ((/* implicit */unsigned int) arr_10 [i_1] [i_3] [i_3]);
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_16 [i_1] [i_4] = ((/* implicit */short) ((var_1) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) arr_14 [i_1 + 2])) >> (((/* implicit */int) arr_14 [i_1 + 3]))))));
                    arr_17 [i_1] [i_5] = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_28 &= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))));
        var_29 = ((/* implicit */unsigned char) var_7);
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((arr_7 [i_6] [i_6]) < (((/* implicit */int) arr_18 [i_6]))))), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18359024684805142564ULL)) ? (5475465693123831375LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (15516102788074961423ULL)));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (arr_18 [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((arr_13 [i_6] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4)))))));
        arr_20 [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_6]))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 21; i_7 += 4) 
    {
        arr_23 [i_7 - 2] = ((/* implicit */_Bool) (~(arr_22 [i_7 - 3])));
        arr_24 [15U] = ((/* implicit */int) ((18359024684805142564ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188)))));
        arr_25 [i_7] [i_7 + 4] = ((/* implicit */long long int) arr_22 [i_7 - 3]);
    }
    var_32 = ((/* implicit */int) var_16);
    var_33 -= ((/* implicit */unsigned char) (short)-11678);
}
