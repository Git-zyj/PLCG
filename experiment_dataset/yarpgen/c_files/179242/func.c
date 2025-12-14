/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179242
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned char) max(((+(arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (-(var_5))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)255);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) ((short) var_3)))))));
        arr_10 [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_9 [i_2 + 1])) : (((/* implicit */int) ((short) (unsigned char)255)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) var_1));
        arr_12 [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_1))));
        arr_13 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_20 |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 1]))) / (((((/* implicit */_Bool) (-(536870911U)))) ? (arr_14 [i_3 - 1]) : (((((/* implicit */_Bool) var_15)) ? (var_5) : (arr_14 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_30 [i_3] [i_4] [i_5] [i_4] [i_7] |= ((min((((/* implicit */int) arr_24 [i_3] [(unsigned short)16] [i_3] [i_7])), (arr_19 [i_7] [i_4] [i_3]))) >= ((~((+(((/* implicit */int) (unsigned short)511)))))));
                                arr_31 [i_5] = (signed char)127;
                                arr_32 [i_3] [(unsigned short)2] [(short)8] [i_4] [(short)8] |= ((/* implicit */unsigned short) (_Bool)0);
                                arr_33 [i_7] [i_6] [i_6] [i_5] [i_4] [(short)2] [i_3] = ((long long int) (+(((/* implicit */int) var_16))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned char) max(((unsigned short)511), (((/* implicit */unsigned short) ((signed char) (-(18446744073709551615ULL)))))));
                                arr_41 [i_8] |= ((/* implicit */signed char) (~(max((((/* implicit */int) ((short) arr_20 [i_8] [i_4] [i_4]))), ((~(((/* implicit */int) (signed char)-127))))))));
                                var_22 = ((/* implicit */unsigned char) max((min((arr_35 [i_3 - 1]), (((/* implicit */unsigned long long int) 536870911U)))), (((arr_35 [i_3 - 1]) >> (((arr_35 [i_3 - 1]) - (8812736849639958414ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_3 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)-16)), ((-(arr_25 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned char) arr_45 [i_3] [i_10] [i_11])))));
                    arr_49 [i_11] [i_10] [(_Bool)1] [i_10] = (short)-16;
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        arr_54 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) arr_28 [i_11] [i_11]);
                        arr_55 [i_12] [i_11] [i_10] = ((/* implicit */int) arr_51 [i_3] [i_3] [i_3] [i_11] [i_12]);
                        arr_56 [i_12] [i_11] [i_3 - 1] = ((/* implicit */int) arr_39 [i_12] [i_10] [i_3]);
                    }
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((min((max(((-2147483647 - 1)), (((/* implicit */int) (short)28672)))), (2147483647))) | (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((4611123068473966592ULL), (((/* implicit */unsigned long long int) (signed char)127))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_15)))))))));
    var_26 = ((/* implicit */unsigned char) var_2);
}
