/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15768
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
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_17))));
    var_20 = ((_Bool) (-((+(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) (+(var_0)));
                var_22 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_2] [(_Bool)1] = ((/* implicit */long long int) arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */short) arr_6 [i_3 - 1]);
                                var_24 = ((((((unsigned int) arr_4 [i_0] [i_1] [i_3 + 1])) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [(unsigned char)11] [(unsigned char)11] [i_2 + 1] [(unsigned char)1] [i_2 - 1])) != (((/* implicit */int) var_3)))))))) != (((((arr_3 [i_1] [(short)0] [i_1]) & (var_15))) | (((/* implicit */unsigned int) arr_4 [i_2] [i_2] [4ULL])))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((short) (((+(((/* implicit */int) arr_0 [(signed char)14])))) - ((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3 - 1] [i_4]))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) && (((_Bool) arr_0 [i_5 - 1]))));
                    var_27 *= (!(((/* implicit */_Bool) (-(arr_5 [(signed char)12])))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_1))));
                    var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [7U])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_30 += ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_16 [i_7] [i_8])))) <= ((+(((/* implicit */int) var_11))))));
                                arr_24 [i_8] [i_7] [i_6] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) var_15));
                                arr_25 [i_0] [i_7] [(short)8] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_3 [i_1] [i_6 - 1] [i_8]));
                                var_31 = ((/* implicit */signed char) arr_23 [i_0] [i_1] [i_6 - 1] [i_7] [i_7] [i_8] [i_8]);
                                var_32 = arr_12 [i_0] [i_1] [i_6 + 1] [i_7] [i_0];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
