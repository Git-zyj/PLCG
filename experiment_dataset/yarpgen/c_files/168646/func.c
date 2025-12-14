/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168646
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [1LL] [i_0] [9LL]))))) % (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_3 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)29228))) : (-4002462158563730507LL))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3] [i_0] [(unsigned short)12] [i_0]))));
                                var_15 = ((/* implicit */long long int) (unsigned short)31019);
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */unsigned short) (~(arr_10 [i_2 - 3] [i_2] [(signed char)0] [i_1] [i_1] [(signed char)0] [i_0])));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) * ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned short)4] [i_1] [i_0])) ? (((unsigned int) (unsigned short)16424)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_6])))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((/* implicit */int) ((7934958682788416673LL) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [(short)18] [(short)12] [(short)18] [i_6])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((long long int) (unsigned short)16424)), (((/* implicit */long long int) min((arr_5 [i_0]), (((/* implicit */unsigned short) arr_1 [i_2])))))))) ? ((~(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_2 - 3] [i_7] [i_2 - 3] [i_8]))))));
                                var_20 -= ((long long int) min((((((/* implicit */_Bool) (unsigned short)49119)) ? (17454353521315011693ULL) : (((/* implicit */unsigned long long int) 622993202)))), (((/* implicit */unsigned long long int) (unsigned short)46876))));
                                var_21 = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_8]);
                                var_22 ^= ((((((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_7] [i_1] [i_0] [i_7 - 3])) <= (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_7 - 4])))) ? (((long long int) arr_16 [i_0] [i_1] [i_2] [18U] [18U] [i_2] [i_7 + 2])) : (((long long int) arr_16 [i_8] [i_1] [i_8] [12ULL] [22U] [12ULL] [i_7 - 4])));
                                arr_23 [i_0] [i_0] [i_2] [i_0] [3ULL] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [(short)21] [i_2] [i_7] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((int) (unsigned short)13104));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8660860830903604214LL)) ? (-1213797709) : (((((/* implicit */int) min(((unsigned short)16424), (((/* implicit */unsigned short) var_5))))) | (((/* implicit */int) (_Bool)1)))))))));
}
