/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112508
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
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15)))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55786))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (_Bool)1))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_23 &= ((/* implicit */unsigned char) arr_3 [8] [8]);
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) > (((9223372036854775807LL) >> (((((-9223372036854775797LL) - (-9223372036854775772LL))) + (76LL))))))))) & (((((/* implicit */long long int) ((/* implicit */int) var_0))) / ((-9223372036854775807LL - 1LL))))));
                    var_24 -= ((/* implicit */unsigned short) (!(((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                }
            } 
        } 
        var_25 *= ((/* implicit */short) var_7);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) < (((((/* implicit */int) arr_9 [(unsigned char)2] [(unsigned char)2])) | (((/* implicit */int) var_4))))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (int i_7 = 3; i_7 < 10; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            arr_25 [i_2] [i_5] [i_2] [i_6] [i_2] |= ((/* implicit */_Bool) var_15);
                            var_27 = ((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) arr_15 [i_2] [i_2] [3]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (9223372036854775807LL)));
                            var_29 = ((/* implicit */unsigned short) ((long long int) var_6));
                            arr_26 [i_2] [i_7] [(_Bool)1] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? ((~(((/* implicit */int) (unsigned short)54273)))) : (((arr_12 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */long long int) ((arr_15 [i_2] [i_2] [(short)4]) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_2])))));
            var_31 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)4))));
            var_32 = ((/* implicit */unsigned char) var_17);
        }
        for (long long int i_9 = 3; i_9 < 8; i_9 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) arr_23 [i_9] [i_9] [i_11] [i_12]);
                            arr_37 [i_2] [i_9] [i_9 + 2] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
            } 
            var_35 -= ((/* implicit */_Bool) var_11);
            var_36 |= ((/* implicit */unsigned char) var_4);
        }
        for (long long int i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
        {
            arr_40 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-28)))), (max((((/* implicit */int) var_10)), (((2147483647) % (((/* implicit */int) var_0))))))));
            arr_41 [i_13] [i_2] = ((/* implicit */long long int) ((var_16) == (((long long int) min((var_16), (var_17))))));
            arr_42 [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (8434461630265883963LL)))))));
            var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_7) : (((/* implicit */unsigned long long int) -1651652341))));
        }
        arr_43 [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((arr_20 [i_2] [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) var_15))))), (var_13)));
    }
}
