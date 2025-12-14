/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115723
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0 + 4])), (var_17)))) - (max((446016648), (-446016639)))));
                            arr_14 [i_3] [21] [21] [i_3 - 1] = ((/* implicit */unsigned int) ((((arr_12 [i_0 - 4] [i_0 - 4] [i_0] [i_3 - 2]) + (((/* implicit */long long int) arr_11 [i_0] [(unsigned short)14] [(unsigned short)6] [i_0 - 1] [i_3 + 1])))) & (((/* implicit */long long int) (~(-446016650))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) var_12));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    arr_18 [i_0 + 3] [i_0] [(signed char)4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 446016649)) : (arr_3 [i_0 + 4] [i_4 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1023)) ? (arr_3 [i_0 - 3] [i_4 + 1]) : (arr_3 [i_0 - 2] [i_4 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 3) 
                    {
                        arr_21 [i_0] &= ((/* implicit */signed char) arr_1 [(signed char)22]);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_0] = ((/* implicit */signed char) -446016677);
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -446016622))))), (((unsigned long long int) var_8))));
                            arr_28 [i_6] [i_4 - 1] [(unsigned short)4] [0ULL] = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
                            arr_29 [i_5] [i_1] [i_4 + 1] [(_Bool)1] = ((/* implicit */_Bool) var_14);
                            arr_30 [i_5] [i_1] [i_4 - 1] [i_5] [i_6] = ((/* implicit */unsigned char) -446016622);
                        }
                    }
                    for (short i_7 = 3; i_7 < 23; i_7 += 4) 
                    {
                        arr_35 [i_1] [i_4] [i_0 - 1] = ((/* implicit */unsigned int) (-(max((446016660), (((/* implicit */int) (unsigned short)40936))))));
                        arr_36 [i_7 + 1] [(short)13] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)65535)), (max((min((-446016622), (((/* implicit */int) (unsigned short)65535)))), ((~(var_18)))))));
                        arr_37 [i_0] [(short)17] [i_4 - 1] = ((/* implicit */unsigned int) arr_25 [i_0] [i_0 - 2] [i_0 + 3] [i_0 + 3] [(signed char)20]);
                        arr_38 [i_0 + 3] [i_0 + 3] [i_4 - 1] [14U] [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_16)) + (2147483647))) << ((((~(var_14))) - (13409456688774366729ULL))))) == ((+(((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1])))))));
                    }
                    arr_39 [i_0] = ((/* implicit */unsigned long long int) var_13);
                }
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_42 [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), ((+(17815049025131140782ULL))))), (((/* implicit */unsigned long long int) ((max((0), (((/* implicit */int) var_3)))) / (min((((/* implicit */int) var_1)), (var_13))))))));
                    arr_43 [i_8] [i_8] [i_8] [(signed char)18] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) 2862094676U)))));
                    arr_44 [i_0 - 1] [i_1] [(unsigned short)11] = ((/* implicit */unsigned short) ((int) arr_12 [i_1] [i_1] [1U] [i_1]));
                }
            }
        } 
    } 
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))));
    var_21 = ((/* implicit */unsigned short) -446016648);
}
