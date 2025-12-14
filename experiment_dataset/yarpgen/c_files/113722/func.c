/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113722
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
    var_16 = ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) 0U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) var_14);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1759782501) ^ (((/* implicit */int) (short)-16811))))) ? ((-(((/* implicit */int) arr_1 [14ULL] [14ULL])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16805))) <= (arr_5 [i_0] [i_0] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [6] [6] [(unsigned char)5] [i_3 - 2])))) != (((/* implicit */int) (unsigned char)244)))))) : (arr_5 [i_0] [i_0] [i_2])));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) ((((/* implicit */int) (short)21206)) >= (((/* implicit */int) (short)-21207))))) / (((/* implicit */int) max((max((((/* implicit */short) arr_13 [(unsigned char)0] [i_2] [(unsigned char)0] [i_2] [i_0] [(unsigned char)0])), ((short)21202))), ((short)-16797))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [8U] [(short)10] [0ULL] &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)21220)) ? (((/* implicit */int) (short)-16796)) : (arr_9 [i_0] [i_1] [4U] [i_2]))) >= (((/* implicit */int) ((arr_0 [i_2] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78)))))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1)))))));
                            }
                            for (short i_5 = 2; i_5 < 12; i_5 += 2) 
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3229519610U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)4095)))) : (arr_4 [(signed char)13])));
                                arr_18 [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */int) min(((short)-16811), (var_6)))), (706576527))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_16 [i_1] [(short)13])) != (((/* implicit */int) arr_7 [i_3] [i_1] [(signed char)5] [i_0]))))))));
                                var_21 = ((/* implicit */unsigned char) arr_9 [(unsigned char)8] [9U] [(unsigned short)11] [i_5]);
                                var_22 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))) : (arr_4 [i_0]))) ^ ((~(arr_4 [i_2])))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned char)4] [i_5] [i_5] [i_5] [i_1] [12U])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) != (arr_5 [i_0] [i_2] [i_0])))) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_3 + 2] [i_5 + 2])), (var_15)))) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-21218))))));
                            }
                            arr_19 [i_0] |= ((/* implicit */unsigned char) ((arr_6 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [(short)3])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (short)-32748))));
                            var_25 = arr_15 [i_0] [5] [i_6] [i_7 - 1] [i_7] [i_1];
                            arr_25 [i_0] [i_1] [i_1] = ((/* implicit */int) var_5);
                            var_26 = (((-2147483647 - 1)) + (((/* implicit */int) (_Bool)1)));
                            var_27 = (short)16831;
                        }
                    } 
                } 
            }
        } 
    } 
}
