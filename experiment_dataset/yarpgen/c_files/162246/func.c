/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162246
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
    var_17 = ((/* implicit */short) var_15);
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_1] [i_2] [i_3])) ? (3136404894U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_1] [i_2] [i_3])))))) ? (((/* implicit */int) ((signed char) arr_8 [i_0] [i_3] [i_2] [i_3] [i_2]))) : ((-(((/* implicit */int) (short)27))))));
                            arr_9 [i_0] [i_3] [i_0] [i_2] [(signed char)20] = ((/* implicit */short) min(((signed char)-121), ((signed char)127)));
                            /* LoopSeq 3 */
                            for (short i_4 = 1; i_4 < 21; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_8 [i_0] [i_3] [i_4 - 1] [i_3] [i_3])), (((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_4 - 1] [i_3] [i_3])))))));
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_6 [i_3] [i_4] [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 2]))), ((+(((/* implicit */int) var_10))))));
                            }
                            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                            {
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((unsigned short)6144), (((/* implicit */unsigned short) arr_10 [i_2]))))), (max((var_9), (((/* implicit */unsigned int) (signed char)68))))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5])) ? (min((var_15), (((/* implicit */long long int) (signed char)14)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)9] [(unsigned short)9] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2])))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (signed char)12))));
                            }
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                            {
                                arr_17 [i_6] [i_1] [i_3] [i_3] [i_6] |= ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-26)))), (((/* implicit */int) ((var_16) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))))))));
                                var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_8))))) ? (min((var_7), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) var_12))))));
                            }
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((short)32740), (((/* implicit */short) (unsigned char)106))))) && ((_Bool)1))) ? (((/* implicit */int) ((var_15) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_9 + 4] [i_7] [i_1] [i_0])) : (((/* implicit */int) (signed char)-103))))) ? (arr_5 [i_1] [i_8 + 1] [i_9 + 2]) : (((2025547004U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_7] [i_0]))))))))));
                                var_25 |= ((/* implicit */signed char) (short)32735);
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)31750)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)-32765))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) var_6);
                            var_27 = ((/* implicit */signed char) ((unsigned int) min((((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))), (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_9))))));
                            arr_33 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_1] [i_10] [i_11])), (((4503599627370495ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31739)))))));
                            /* LoopSeq 1 */
                            for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                            {
                                var_28 -= ((/* implicit */short) arr_6 [(signed char)0] [i_1] [i_10] [i_10] [i_11] [i_12]);
                                arr_36 [i_0] [i_1] [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
