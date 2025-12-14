/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163148
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
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (~((-(((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */unsigned long long int) (signed char)-123);
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-109))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    arr_10 [i_0 - 1] [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_0]))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((((/* implicit */int) arr_6 [i_0] [i_0])) & (-1562941206))))))));
                    arr_11 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */int) arr_3 [i_1 - 3] [i_0 - 4]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_13 [i_0] [i_0] [i_1 + 1] [i_2] [i_2 - 1] [i_4]))));
                    arr_14 [i_0 - 2] [i_1 + 1] [(_Bool)1] [i_1] = ((/* implicit */short) (signed char)69);
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2786802094997536398ULL))));
                    arr_15 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)22041))));
                    arr_16 [i_0 + 1] [i_0] [i_1] [i_0] = ((/* implicit */int) 10722495766985829697ULL);
                }
                for (unsigned int i_5 = 4; i_5 < 17; i_5 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))));
                    arr_20 [i_5 - 1] [i_1] [i_1] [i_1] [7] = ((/* implicit */short) arr_19 [i_1]);
                    arr_21 [i_0] [i_1] [i_0] [3U] = ((/* implicit */unsigned short) (signed char)22);
                }
            }
            for (int i_6 = 4; i_6 < 16; i_6 += 3) /* same iter space */
            {
                var_20 = -1267336359;
                var_21 ^= ((/* implicit */_Bool) arr_23 [i_6] [i_0 + 1]);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62197)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 30)) ? (-1923886354) : (((/* implicit */int) (unsigned short)65524))))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        {
                            arr_32 [i_0 - 1] [i_1] [i_1] [i_8 + 3] = ((/* implicit */unsigned int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                            arr_33 [i_1] [i_1] = ((/* implicit */unsigned int) 1301358720);
                            var_23 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_1 - 1] [i_6] [i_7] [2]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) (~((~(18446744073709551615ULL)))));
            }
            for (int i_9 = 4; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 16383U))));
                arr_36 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_1 - 3]);
            }
            var_26 = ((/* implicit */unsigned long long int) (~(arr_24 [i_1])));
            arr_37 [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1 - 3] [i_0 - 2]))));
        }
        for (short i_10 = 1; i_10 < 16; i_10 += 2) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0])))))));
            var_28 = (+(18446744073709551615ULL));
        }
        for (unsigned int i_11 = 4; i_11 < 17; i_11 += 2) 
        {
            arr_44 [i_0] [i_0] [i_11] = ((/* implicit */signed char) ((((((-1267336369) ^ (((/* implicit */int) (signed char)22)))) + (2147483647))) >> (((/* implicit */int) ((arr_12 [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 2] [i_11] [i_11]) > (((/* implicit */unsigned int) 599401788)))))));
            var_29 ^= ((/* implicit */unsigned int) (unsigned short)11);
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                arr_48 [(unsigned short)14] [i_11 - 4] [(unsigned short)17] = ((/* implicit */unsigned short) arr_42 [i_11 - 3] [i_11 - 2]);
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) arr_6 [i_11 - 3] [i_11 + 1])) : (((/* implicit */int) arr_6 [i_11 + 1] [i_11 + 1]))));
            }
            var_31 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_24 [i_11])) * (6692377302841019311ULL)));
        }
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        arr_51 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)0), (arr_23 [i_13] [i_13 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)30525))))) : (((/* implicit */int) arr_23 [i_13] [i_13 - 1]))));
        arr_52 [i_13] [i_13] = ((/* implicit */long long int) -1179569898);
    }
}
