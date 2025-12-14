/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15683
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_10 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_13 [(short)13] [i_1 - 1] [i_1] [i_1] [i_1] [8ULL])), (arr_11 [i_4 + 1])))) ? (((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_4 - 1] [i_3] [i_3] [i_1])))) : (((/* implicit */int) (short)-27462)))) > (((/* implicit */int) arr_11 [i_0]))));
                                var_11 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27477))) : (arr_7 [i_1 - 1] [i_3] [i_4 - 1]))), (((/* implicit */unsigned int) max((arr_2 [i_1 + 1]), (var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) max((arr_9 [i_6] [i_5] [i_5] [i_1]), ((short)27481)));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_8))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [(signed char)9] [i_6] [i_6]))))) != (((/* implicit */int) ((-8903694429826210652LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_6]))))))));
                                var_15 -= ((/* implicit */short) arr_1 [i_0]);
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_5] [i_2] [i_2] [i_2] [i_5] [i_0])) && (arr_17 [i_0] [i_1 - 1] [i_0])))), (max((((/* implicit */long long int) (unsigned short)60320)), (arr_14 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)27457)) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_6 + 1] [i_6]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (signed char i_8 = 4; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_1 + 1] [i_1] [i_7]), (arr_10 [i_8] [(_Bool)1] [i_1 + 1] [i_0])))), (max((((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_1] [i_2] [i_7] [i_8]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]))))), (arr_16 [i_1 + 1] [i_1 - 1] [(short)14] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-1), ((short)27462)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (var_6))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_0] [i_0]))))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_22 [i_7] [i_8] [i_2] [i_7] [i_8 - 3]))), (((/* implicit */unsigned int) (short)-27462))))));
                                var_19 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-73))));
                                var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123))))) > (((/* implicit */int) (unsigned char)8)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-27477)))), (((/* implicit */int) (((_Bool)1) || (arr_1 [i_0]))))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-28687))));
                                var_22 = ((/* implicit */long long int) min((((/* implicit */short) arr_3 [i_1] [i_1] [i_10 + 1])), ((short)27477)));
                                var_23 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)54772)) != (((/* implicit */int) (short)27477))))), ((-(((/* implicit */int) ((signed char) arr_11 [i_1 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_12])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_11] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1] [i_0]))))) : (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) arr_5 [i_1])))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_7 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_11] [i_1] [i_2])) || (((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                                var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_21 [i_12 - 1] [i_12 + 1] [i_12] [9LL] [i_12 + 1] [(unsigned short)4])) * (((/* implicit */int) arr_21 [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 1] [i_12] [i_12]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
    {
        for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_27 += ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)243)), ((-(((/* implicit */int) (unsigned char)128)))))))));
                                var_28 ^= ((/* implicit */signed char) arr_39 [i_13] [i_13] [i_13]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (long long int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        {
                            var_29 = max((max((arr_40 [i_19 - 1] [i_18] [i_14]), (((/* implicit */unsigned short) (signed char)123)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_14 - 1] [i_14 + 1])) && (((/* implicit */_Bool) arr_35 [i_14 + 1] [i_14]))))));
                            var_30 = ((/* implicit */unsigned int) ((_Bool) max((((((/* implicit */_Bool) arr_50 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_14]))) : (var_6))), (var_6))));
                            var_31 = ((/* implicit */unsigned short) (+(max((arr_45 [i_13] [i_19 + 1] [(short)21] [i_14 - 1] [i_14 - 1] [i_14]), (arr_45 [i_13] [i_19 + 1] [i_18] [i_14 - 1] [i_19] [i_13])))));
                            var_32 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)62383), (((/* implicit */unsigned short) (_Bool)1))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
