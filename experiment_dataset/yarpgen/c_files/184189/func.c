/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184189
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) < ((-(9223372036854775807LL)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_0 [i_1] [i_2])) >= (((3789868591366126688LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44048)))))));
                    var_12 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_6)))) >= ((-(((/* implicit */int) (signed char)55))))));
                    var_13 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                }
            } 
        } 
    }
    var_14 &= ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    /* LoopSeq 4 */
    for (short i_3 = 4; i_3 < 16; i_3 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned int) var_5);
        arr_10 [i_3 - 4] [9ULL] = arr_6 [i_3 - 1];
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_4] [i_5] |= var_6;
            arr_18 [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_5]))) / (((long long int) (~(((/* implicit */int) arr_16 [i_5])))))));
            arr_19 [13LL] [13LL] = ((/* implicit */unsigned short) -2);
            arr_20 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_5])))))) >= (937225277U)));
        }
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-16032)) < (((((/* implicit */int) arr_11 [i_4])) * (((/* implicit */int) arr_11 [i_4]))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    arr_27 [i_4] [i_6] [i_4] = ((signed char) (-(((/* implicit */int) arr_26 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]))));
                    arr_28 [i_4] [i_7] = ((/* implicit */long long int) max((min((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-7478))))))), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_4] [i_6])) : (((/* implicit */int) arr_16 [i_4])))) >= (((/* implicit */int) (unsigned short)12706)))))));
                }
            } 
        } 
        arr_29 [i_4] = ((/* implicit */short) arr_11 [i_4]);
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (unsigned char)200);
        arr_33 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_30 [i_8]) ? (((/* implicit */int) arr_14 [i_8] [8] [i_8])) : (((/* implicit */int) arr_14 [i_8] [i_8] [i_8])))))));
        arr_34 [i_8] [i_8] = ((/* implicit */int) ((arr_23 [i_8] [i_8] [i_8]) < (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_18 -= ((/* implicit */_Bool) 1638838821U);
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_8]))));
        }
        arr_38 [i_8] [i_8] = (-(((/* implicit */int) var_6)));
    }
    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (unsigned char)201);
        var_20 = max((((/* implicit */int) var_6)), ((~(((/* implicit */int) arr_32 [i_10])))));
    }
}
