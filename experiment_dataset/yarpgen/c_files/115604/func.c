/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115604
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
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), ((-(var_10)))))) || (((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 2002298535U)) : (6124814487660612561ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_13 = ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0]);
                    arr_8 [i_2] [i_1] [i_1] [i_1] = ((((/* implicit */int) var_8)) >> (((var_10) - (2467907690U))));
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_14 = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_3] [i_1] [i_0]));
                    var_15 = ((/* implicit */unsigned long long int) ((min((3437852682U), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (arr_7 [i_0] [i_0 - 1] [i_3])))))) << (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)126)), (arr_2 [i_0 - 1])))) - (106)))));
                    arr_12 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_5);
                }
                /* LoopSeq 3 */
                for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_4 + 1]))))))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) / (var_9)))) < (min((6124814487660612561ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0])))))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((arr_10 [i_0 - 1] [i_5 + 4] [i_5 + 4]) % (((unsigned long long int) var_3))));
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)1))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5] [i_0 - 1])) % (((/* implicit */int) arr_13 [i_1] [i_0 - 1])))))));
                }
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_25 [i_1] [i_7] [i_6 + 1] [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned short) arr_17 [i_0] [i_6 - 2] [i_7])), (var_2))));
                                var_21 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)62))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_18 [i_0 - 1] [i_6 - 1] [i_6 + 2] [i_6]))));
                                var_23 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_13 [i_7] [i_7])) && (var_8)))));
                                var_24 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)-3)), ((unsigned short)32752)));
                }
            }
        } 
    } 
}
