/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160581
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
    var_18 = min((((/* implicit */int) (unsigned short)43756)), (max((((((/* implicit */_Bool) (unsigned short)21767)) ? (((/* implicit */int) (unsigned short)30930)) : (((/* implicit */int) (signed char)-34)))), (((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                            {
                                arr_12 [i_0] [(signed char)18] [i_0] = ((/* implicit */int) arr_7 [i_1]);
                                arr_13 [i_0] [(unsigned short)10] [i_3] [i_2] [(unsigned short)10] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [(unsigned short)14] [i_3] [i_0])) ? (arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0]) : (arr_5 [i_3 - 3] [i_3 - 1] [i_3] [i_0]))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), ((unsigned short)43765)))) && (((/* implicit */_Bool) (short)8))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)22232)))) & (2113929216U)));
                            }
                            arr_16 [i_0] [i_1] [(short)3] [i_3] = ((/* implicit */unsigned short) arr_6 [i_0]);
                            var_21 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1] [11] [(unsigned short)15]);
                            var_22 = ((/* implicit */unsigned short) min((((((var_12) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) arr_6 [i_3 - 3])) : (arr_4 [i_0] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) var_4);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((signed char) (short)25586));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((3447592006U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8187))))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43757)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned short)0)))))));
                            var_26 ^= ((/* implicit */short) var_5);
                            arr_29 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8 - 2] [i_8 - 2])) ? (((/* implicit */int) var_11)) : (32767)));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)21793)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21767))) : (2181038068U)));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 3; i_10 < 17; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) ((int) 693689946274069591LL));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6 - 3] [i_6 - 1] [i_6 - 1] [i_0] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19569))) : (arr_14 [i_6 + 1] [i_9] [i_0] [i_10 - 2] [i_10])));
                        }
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            arr_36 [i_11] [10LL] [i_6 - 2] [i_1] [10LL] [(signed char)10] &= ((/* implicit */unsigned short) ((signed char) arr_25 [(signed char)2] [i_1] [(signed char)2] [i_1] [i_1] [i_1] [i_1]));
                            arr_37 [i_0] = ((/* implicit */int) ((51999284U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                        }
                    }
                    var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 847375284U)) ? (((/* implicit */int) (short)25586)) : (((/* implicit */int) arr_21 [i_6]))))));
                }
                for (unsigned short i_12 = 3; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) max(((signed char)50), (min(((signed char)-50), ((signed char)-51)))));
                    arr_40 [i_0] [i_0] [i_12] = ((/* implicit */long long int) (short)-5615);
                }
                for (unsigned short i_13 = 3; i_13 < 18; i_13 += 3) /* same iter space */
                {
                    arr_44 [i_0] = ((/* implicit */long long int) arr_21 [i_13]);
                    arr_45 [i_0] [i_1] [12] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)48)) | (((/* implicit */int) min(((short)-25586), (((/* implicit */short) (_Bool)1))))))));
                }
                for (unsigned char i_14 = 3; i_14 < 18; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 19; i_16 += 3) 
                        {
                            {
                                arr_56 [i_0] [i_1] [i_14 - 2] [i_0] [i_14 - 2] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */int) (signed char)-52)) * ((-(((/* implicit */int) (short)5076))))));
                                var_32 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (short)27429))))), (((8881565010553843080LL) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))))));
                            }
                        } 
                    } 
                    arr_57 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) (short)25580)), ((unsigned short)12775)));
                }
                var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) : (max((arr_7 [3LL]), (((/* implicit */unsigned int) arr_25 [4] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (3447592033U)))) ? (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) -846882782))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [12U]))) : (142908748563006796LL)))))));
            }
        } 
    } 
    var_34 = var_16;
}
