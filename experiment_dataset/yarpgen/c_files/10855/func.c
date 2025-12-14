/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10855
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] = arr_1 [i_2];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) (unsigned char)203))))));
                                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_4 + 2] [i_1]))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_4 - 2] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_4 - 2] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_4 - 2] [i_1])))) : ((+(((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))));
                                arr_12 [i_1] = ((/* implicit */short) min(((-((+(((/* implicit */int) var_3)))))), ((~(((/* implicit */int) (signed char)1))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_1])) ? (arr_5 [i_1] [i_1 + 2] [i_1]) : (arr_5 [i_1] [i_1 - 2] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)1))));
                                arr_20 [i_0] [i_5] [(_Bool)1] [i_2] [i_1 - 2] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (unsigned short)53558);
                                arr_21 [16LL] [(unsigned char)8] [i_1] [i_1] [i_0] [i_5] [i_6] |= (+(min((min((arr_18 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)8)))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */signed char) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            {
                arr_28 [i_7] [i_8] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((short) 4ULL))) ? (((/* implicit */int) min((arr_8 [i_8] [i_8 - 2] [i_8]), ((unsigned short)20857)))) : (((/* implicit */int) max((arr_17 [i_7] [i_7] [i_8]), ((unsigned short)11978))))))));
                arr_29 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_4 [i_8] [i_7]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_35 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned short)11978), (((/* implicit */unsigned short) arr_30 [i_9]))))), ((+(((/* implicit */int) arr_30 [(_Bool)1]))))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (~((~(((/* implicit */int) (signed char)-70)))))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            arr_42 [8LL] [i_9] [i_9] [2] [i_11] [i_12] = ((/* implicit */unsigned char) ((unsigned int) max(((~(4ULL))), (((/* implicit */unsigned long long int) min(((signed char)21), (var_2)))))));
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((18446744073709551592ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_7)), (min(((unsigned short)1233), (arr_38 [i_9] [i_10] [16U] [i_11])))))))))));
                        }
                    } 
                } 
                arr_43 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_39 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned char) min((((/* implicit */signed char) arr_32 [i_9])), (var_6)))))))));
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 22; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (short)27264)), ((~(((/* implicit */int) (unsigned short)24752))))))));
                            arr_49 [i_14] = ((/* implicit */unsigned long long int) arr_47 [i_9] [20ULL] [i_9]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 11; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            arr_61 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) max((((unsigned int) var_1)), (((/* implicit */unsigned int) min(((short)10862), (((/* implicit */short) arr_58 [i_17 - 1] [i_16 - 1])))))));
                            arr_62 [(unsigned short)7] [i_15] [i_17] [i_18] = ((/* implicit */unsigned long long int) arr_30 [i_17 + 1]);
                        }
                    } 
                } 
                arr_63 [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_24 [i_16 - 1]))))));
                /* LoopNest 3 */
                for (signed char i_19 = 2; i_19 < 10; i_19 += 1) 
                {
                    for (unsigned int i_20 = 2; i_20 < 11; i_20 += 3) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            {
                                arr_71 [i_15] [i_15] [i_15] [i_19] [i_20 + 1] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)11947))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)110)))))))));
                                arr_72 [i_15] [i_15] [(short)9] [i_20] [i_21] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)53558))))), ((~(arr_31 [i_20 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
