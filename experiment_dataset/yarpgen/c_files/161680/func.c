/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161680
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
    var_19 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (+(742530706U)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) (short)0)), (-3143178402109394169LL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((min((((/* implicit */int) (short)17927)), (-1422845072))) / ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_0])) : ((-2147483647 - 1)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) ? (((/* implicit */int) (!((_Bool)1)))) : (((-15) ^ (((/* implicit */int) arr_2 [i_1]))))))));
                    arr_9 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) -3143178402109394168LL);
                    arr_10 [3ULL] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(arr_6 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1U)) ? (67108856) : (16383)))))))));
                    arr_11 [i_0] [i_1 - 2] [(signed char)6] = ((/* implicit */int) ((signed char) (-((((_Bool)0) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16959))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1 - 3] [i_0] [3] [i_1 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [i_2 - 2] [i_3] [(_Bool)1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225)))))) : (min((14841851731670707121ULL), (((/* implicit */unsigned long long int) (unsigned char)15))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_1] [i_3] [i_2 + 1] [i_1] [i_0]))))) : (arr_14 [i_0] [i_1] [(unsigned char)4] [i_3 - 1] [i_4])));
                                arr_19 [i_0] [i_1 - 2] [i_2] [i_2] [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-19), (arr_12 [i_2] [i_3] [i_3] [i_3 - 1] [i_4] [i_4])))) >> (((((((/* implicit */int) arr_12 [(short)11] [i_1] [i_1] [i_3 + 1] [i_3 - 2] [1ULL])) << (((((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])) - (38))))) - (14680041)))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [5U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 13159813058393137593ULL)) ? (15075277334525945820ULL) : (((/* implicit */unsigned long long int) 41)))) * (((/* implicit */unsigned long long int) ((int) 1935334111454989071LL))))))));
                                arr_21 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (short)20729)) != (arr_4 [i_0] [i_0] [i_0]))) ? (arr_4 [6U] [i_1 - 2] [i_0]) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_18) : (((/* implicit */int) var_13))))))));
                                arr_22 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_4 [i_1 + 1] [i_1 - 2] [i_3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
