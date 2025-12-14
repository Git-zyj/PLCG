/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170625
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
    var_10 = ((/* implicit */unsigned int) var_1);
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-5193)) && (((/* implicit */_Bool) (signed char)-49)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (min((var_1), (((/* implicit */unsigned long long int) 3615360055739733752LL)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 |= ((/* implicit */_Bool) (signed char)(-127 - 1));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(arr_4 [i_0 - 1] [i_0 - 1])));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) ((long long int) 1193451933U));
        arr_12 [i_0 + 1] = ((/* implicit */int) (+(var_3)));
        arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) << ((+(((/* implicit */int) var_7))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        arr_16 [(unsigned short)8] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) (signed char)(-127 - 1)))) + (2147483647))) >> (((min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (4294967295U))) - (4294967161U)))))) ? (((/* implicit */int) min((min(((unsigned char)76), ((unsigned char)221))), ((unsigned char)84)))) : (((/* implicit */int) (signed char)50))));
        arr_17 [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */int) min(((short)-16994), (((/* implicit */short) (signed char)50))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6653922387756428813LL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        arr_22 [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) arr_20 [i_5])) - (113)))))) ? (((/* implicit */int) ((_Bool) var_5))) : (((((/* implicit */int) (unsigned short)22805)) >> (((/* implicit */int) (signed char)15))))));
        var_14 *= ((/* implicit */unsigned long long int) ((short) arr_19 [i_5]));
    }
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6])) ? (min((arr_5 [i_6] [i_6] [i_6]), (((/* implicit */int) var_7)))) : (arr_5 [i_6] [i_6] [i_6])));
        arr_28 [i_6] [i_6] = ((/* implicit */_Bool) var_4);
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_15 = ((/* implicit */signed char) var_3);
        arr_31 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(unsigned short)2] [(signed char)9])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -207582654)) && (((/* implicit */_Bool) 66060288U))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_0))));
        var_17 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) ^ (arr_25 [i_7] [i_7])));
    }
}
