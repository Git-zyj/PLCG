/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189486
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    var_15 = ((/* implicit */long long int) arr_4 [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [0U] [i_2 - 2] [i_0] [(_Bool)0] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15644)) << (((/* implicit */int) (_Bool)1))));
                                var_16 = arr_1 [i_0];
                                var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_0] [19ULL])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [(_Bool)1] = ((/* implicit */short) max(((!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))))), (min((((((/* implicit */int) arr_8 [i_2])) < (((/* implicit */int) arr_8 [(_Bool)1])))), ((!(((/* implicit */_Bool) (short)8297))))))));
                    arr_14 [i_0] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((-553188964) < (885491720)))), (((arr_8 [i_0 + 1]) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_8 [i_0 - 1]))))));
                }
                for (short i_5 = 1; i_5 < 24; i_5 += 4) 
                {
                    arr_17 [i_0 - 1] [i_0] [(unsigned short)24] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((9511880880709370259ULL) << (((arr_15 [i_0] [i_1] [i_1] [21U]) - (1347582720924318072LL))))) < (((/* implicit */unsigned long long int) arr_15 [i_0] [0] [i_1] [i_1 + 1]))))) : (((/* implicit */short) ((((9511880880709370259ULL) << (((((arr_15 [i_0] [i_1] [i_1] [21U]) - (1347582720924318072LL))) + (471931107212059977LL))))) < (((/* implicit */unsigned long long int) arr_15 [i_0] [0] [i_1] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24; i_6 += 4) 
                    {
                        for (int i_7 = 2; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [(unsigned short)16] [i_7 + 1] [(unsigned short)16] [i_0] [i_7] [i_7])) ? ((~(((/* implicit */int) arr_20 [(unsigned short)6] [i_7 - 1] [i_5] [i_0] [i_7] [i_0 - 1])))) : (((/* implicit */int) (short)22761))));
                                arr_24 [i_0 + 1] [(_Bool)1] [i_0] [i_0 + 1] [(_Bool)1] = ((/* implicit */_Bool) arr_19 [i_5 - 1] [i_1]);
                                var_19 = var_9;
                                arr_25 [i_7 + 1] [i_6 - 2] [(short)20] [i_0 + 1] [(short)20] [i_1] [i_0 + 1] |= ((/* implicit */long long int) var_4);
                                var_20 &= min((((/* implicit */unsigned int) (unsigned char)169)), (4294967295U));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                }
                arr_27 [(signed char)18] |= ((/* implicit */signed char) min(((~(((/* implicit */int) var_1)))), ((~(((133692779) & (((/* implicit */int) var_13))))))));
                var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))))), ((~(((/* implicit */int) arr_6 [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_2)))), (var_12)));
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -133692780)), (-3324142489183114718LL))))));
}
