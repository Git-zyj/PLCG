/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148181
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_15 -= ((/* implicit */unsigned short) (unsigned char)90);
                                arr_11 [(unsigned char)18] [(_Bool)1] [(_Bool)1] [(unsigned char)1] [(unsigned char)8] [i_2] = ((/* implicit */unsigned char) max((((((((/* implicit */int) var_2)) & (((/* implicit */int) var_12)))) | (((/* implicit */int) ((_Bool) arr_6 [(unsigned short)9] [23ULL] [4ULL] [(unsigned short)14] [(_Bool)1]))))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [i_0 - 2] [i_3 + 1]))))));
                                arr_12 [1ULL] [(unsigned char)6] [(_Bool)1] [13ULL] [i_2] = ((/* implicit */unsigned long long int) var_4);
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                arr_15 [(unsigned char)14] [(short)7] [(unsigned char)8] [i_2] [(unsigned short)6] [(short)15] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) ((_Bool) (unsigned short)54447))), (var_3))))));
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)0)), (14448739796833790977ULL)));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_17 = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)202))))));
                                arr_19 [(unsigned char)10] [(unsigned short)23] [i_2] [(_Bool)1] [12ULL] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_0 - 1] [(unsigned char)0])) ? (0ULL) : (arr_18 [(_Bool)1] [i_3 - 1]))) <= (((arr_18 [i_3 + 2] [i_1]) % (11789413968244497973ULL)))));
                                arr_20 [(unsigned char)11] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(short)18])) ? ((-((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) (short)32767))));
                                arr_21 [12ULL] [16ULL] [i_1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) var_9);
                            }
                            arr_22 [i_0] |= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(unsigned char)20] [(unsigned char)0] [(unsigned char)13])))), (((/* implicit */int) max(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)1))))))) & (((((((/* implicit */int) (unsigned short)38774)) + (((/* implicit */int) (unsigned char)137)))) & (((/* implicit */int) ((_Bool) arr_0 [(unsigned char)1])))))));
                            arr_23 [i_2] [i_2] = ((/* implicit */unsigned short) ((18446744073709551615ULL) / (18446744073709551609ULL)));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)255))))), ((~(max((((/* implicit */unsigned long long int) var_2)), (var_1))))))))));
                        }
                    } 
                } 
                var_19 -= ((unsigned long long int) min((((short) arr_9 [15ULL] [(unsigned char)14] [(unsigned char)2] [(unsigned short)3] [(unsigned short)10] [(_Bool)1])), (((/* implicit */short) (_Bool)1))));
            }
        } 
    } 
    var_20 = var_12;
}
