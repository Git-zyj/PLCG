/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138465
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)30))))))) | ((-(((((/* implicit */_Bool) (unsigned short)6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)384)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_0))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)6)))) > (((/* implicit */int) min(((unsigned short)65529), ((unsigned short)60821))))))))))));
        var_15 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (arr_4 [i_1] [i_1])))), (var_0))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_2]))));
            var_17 = ((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1])) | (arr_9 [i_1] [i_2] [i_2]));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))));
                arr_12 [i_1] [i_1] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (arr_8 [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2])))));
            }
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_1] [i_2]))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_17 [i_1] [i_4] [i_1] = ((((/* implicit */int) arr_4 [i_4] [i_1])) > (((/* implicit */int) arr_4 [i_1] [i_4])));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                arr_20 [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) ((long long int) (unsigned short)53967));
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]);
                    arr_23 [i_6] [i_5] [i_5] [i_4] [i_5] [i_1] = ((/* implicit */unsigned int) ((long long int) 2840925336U));
                }
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */int) ((16881076838490228563ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11474)) ^ (((/* implicit */int) (signed char)-73)))))));
                    arr_28 [i_7] [(short)7] [i_5] [i_5] [i_1] [i_4] = ((/* implicit */unsigned short) (-(arr_8 [i_7] [i_1])));
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    arr_32 [i_1] [i_4] [i_5] [i_5] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)11))));
                    arr_33 [i_1] [i_1] [8ULL] [i_8] &= ((/* implicit */signed char) ((((var_8) >> (((var_10) + (1986572650343050874LL))))) - (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) - (31293)))))));
                }
            }
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                arr_36 [i_9] [i_9] [i_4] [i_1] = ((/* implicit */short) ((_Bool) var_12));
                arr_37 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_35 [i_1] [i_9] [i_1] [i_9])) : (((/* implicit */int) arr_35 [(signed char)4] [i_4] [i_9] [i_9]))));
                arr_38 [i_4] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_1] [i_4]))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                arr_41 [i_1] = ((/* implicit */int) (-(((((-1LL) + (9223372036854775807LL))) << (((/* implicit */int) var_9))))));
                var_22 -= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-127))))) % (arr_10 [i_10] [i_1])));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            arr_48 [i_1] [i_12] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5914589863222765032ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)2)) ? (188149344222590818ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45530))))) | (((/* implicit */unsigned long long int) var_5))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    arr_51 [i_13] [i_13] [i_13] [i_10] [i_4] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) / (((/* implicit */int) arr_19 [i_13] [i_1] [i_4]))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1])) >> (((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (unsigned char)129))));
                    var_27 = (~(((((/* implicit */_Bool) (signed char)70)) ? (-1884164232) : (var_5))));
                }
                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) + (-4607373785649945435LL))) / (((/* implicit */long long int) (-(var_5))))));
            }
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_4] [i_4]))))));
            var_30 = ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_1] [i_4] [i_4]))));
        }
    }
    var_31 = ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) var_5)) | (var_1))), ((~(var_1))))), (((/* implicit */unsigned long long int) 2097151LL))));
}
