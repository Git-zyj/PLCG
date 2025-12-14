/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158583
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
    var_19 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((int) (short)17994))) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((short) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (arr_3 [i_0] [i_0]))));
                    arr_8 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_1 [(unsigned char)14]))))));
                    arr_9 [i_0] = ((/* implicit */int) (short)11648);
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned int) ((_Bool) 1086404560));
                    arr_13 [i_0] [i_1] [i_3] [(unsigned char)6] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    arr_14 [(unsigned short)6] = ((/* implicit */int) var_0);
                    arr_15 [i_0] = ((/* implicit */int) (short)11645);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 3] [(signed char)1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1 + 3] [i_0] [i_5]))) : (3327245542817750181ULL)))));
                                arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((var_4), (((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_6])), ((-2147483647 - 1))))) ? (((((/* implicit */int) arr_17 [i_6] [i_6] [i_4])) & (((/* implicit */int) var_10)))) : (((/* implicit */int) min((arr_5 [i_0] [i_4] [i_5] [i_6]), ((unsigned short)59654))))))));
                                arr_25 [i_5] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((int) (short)-3847)), (arr_10 [i_4] [i_1 + 3] [i_1 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [6U] [i_5] [i_4]))))) != ((~(((/* implicit */int) arr_6 [i_5] [i_5] [i_6]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) -1)))))));
                            }
                            arr_26 [i_0] [i_5] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_8))) == (((/* implicit */int) arr_19 [i_1 + 3] [i_1 + 3] [i_1])))))) : ((+(((((/* implicit */_Bool) -408287076)) ? (864008991U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_5])))))))));
                        }
                    } 
                } 
                arr_27 [i_0] = ((/* implicit */short) max((((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (2147483647) : (arr_10 [i_0] [i_1 + 3] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (-1717269297) : (1736483618))))));
                arr_28 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */int) var_5)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) (short)10494))))))), (max((((/* implicit */int) ((arr_16 [i_0]) >= (arr_21 [i_0] [i_0] [i_0] [i_0])))), ((~(0)))))));
                arr_29 [6] = ((/* implicit */unsigned int) ((int) max((((((/* implicit */_Bool) (short)6491)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned short)5881)))), (arr_16 [(short)12]))));
            }
        } 
    } 
}
