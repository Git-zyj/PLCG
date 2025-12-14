/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106777
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((var_7) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))))));
    var_21 = ((/* implicit */unsigned short) (-(((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_22 += ((/* implicit */_Bool) max((((((_Bool) (short)32765)) ? (((/* implicit */int) ((arr_2 [i_0] [i_0 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) : ((+(arr_3 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_17) >= (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_13 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) (unsigned short)6144)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-17426))))))) : (arr_2 [i_2] [i_1])));
                        arr_14 [i_2] [i_3 - 1] = ((/* implicit */_Bool) var_18);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (short)-32755)) & (((/* implicit */int) (short)32767))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_26 [i_7] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_9))))));
                        arr_27 [i_4] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) var_11);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 4; i_8 < 20; i_8 += 3) 
                        {
                            var_24 += ((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */_Bool) 5688664515122163344ULL);
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_24 [i_6] [i_5] [i_6] [i_7] [i_8]))));
                            var_27 = ((/* implicit */unsigned char) ((arr_24 [i_7] [i_5] [i_8 - 4] [i_7] [i_5 - 1]) >> (((((((/* implicit */int) (unsigned char)184)) | (235557546))) - (235557521)))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            arr_32 [i_4] [i_4] [i_5] [i_7] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) 13497968694589665664ULL)) ? (883260213) : (((/* implicit */int) (signed char)29)));
                            var_28 = ((/* implicit */_Bool) arr_16 [i_5]);
                            arr_33 [i_9] [i_5] [i_7] [i_7] [i_9 + 4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-10324)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) 10493360837649160005ULL))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (long long int i_10 = 4; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_10] = ((/* implicit */int) (_Bool)1);
                        arr_39 [i_10] [i_6] [(signed char)20] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_1);
                    }
                    for (long long int i_11 = 4; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) -1100419983))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 4576834488680797118ULL))) ? (max((arr_23 [i_4] [i_11] [i_6] [i_4] [i_5]), (arr_23 [i_4] [i_4] [i_5] [i_6] [i_11 - 2]))) : (((/* implicit */unsigned long long int) ((var_7) ? (arr_20 [i_5 + 1] [i_6]) : (((/* implicit */int) var_0))))))))));
                        var_32 = ((/* implicit */int) arr_19 [i_5] [(_Bool)1]);
                    }
                    arr_43 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((var_17) ^ (((/* implicit */long long int) (-(((var_9) % (((/* implicit */int) (signed char)-117)))))))));
                    arr_44 [i_4] [i_5] [i_6] = ((/* implicit */int) (~(12758079558587388272ULL)));
                }
            } 
        } 
        arr_45 [i_4] |= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) var_2)), (((unsigned short) (signed char)-78)))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */_Bool) max((arr_31 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */int) (!(((/* implicit */_Bool) 235557541)))))));
        arr_49 [(unsigned short)1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_28 [i_12] [i_12] [i_12]))))) - (max((((/* implicit */unsigned long long int) arr_42 [i_12])), (7953383236060391609ULL))))) <= ((+(arr_19 [i_12] [i_12])))));
        /* LoopSeq 2 */
        for (signed char i_13 = 4; i_13 < 10; i_13 += 4) /* same iter space */
        {
            arr_53 [i_12] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (max(((_Bool)1), (arr_28 [i_13 - 2] [i_13 - 4] [i_13 - 3])))));
            var_34 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34394))));
            arr_54 [i_13] [i_12] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((_Bool) -295427173)))))));
        }
        /* vectorizable */
        for (signed char i_14 = 4; i_14 < 10; i_14 += 4) /* same iter space */
        {
            var_35 = ((int) (unsigned short)46057);
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) 31))));
            arr_59 [i_14] [i_12] [i_12] = (~(((/* implicit */int) ((((/* implicit */_Bool) 7364386661932573491ULL)) || (var_8)))));
        }
        var_37 = ((/* implicit */long long int) 7953383236060391604ULL);
    }
}
