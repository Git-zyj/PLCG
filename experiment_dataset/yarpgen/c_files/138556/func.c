/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138556
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
    var_14 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_12)) - (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) (_Bool)1)))))));
    var_15 = ((/* implicit */unsigned short) (signed char)92);
    var_16 = ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 = max((min((((((/* implicit */long long int) 81395327)) | (var_0))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))))), (min((((/* implicit */long long int) max((((/* implicit */int) (signed char)0)), (81395327)))), (((((/* implicit */_Bool) arr_7 [i_2 - 1] [(unsigned short)8] [i_2 - 1])) ? (((/* implicit */long long int) 255U)) : (var_4))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_3 + 1] [i_4 - 1] [i_2 - 1]), (arr_6 [i_3 - 1] [i_4 + 1] [i_2 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 1] [i_4 + 3] [i_2 - 1])) < (((/* implicit */int) arr_6 [i_3 - 1] [i_4 - 2] [i_2 + 1]))))) : (((int) var_4))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_14 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [11ULL]) / (((((/* implicit */_Bool) (signed char)0)) ? (arr_14 [i_0] [i_1 + 1] [16LL] [16LL] [i_4 + 1] [i_0] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(signed char)6] [i_0])))))))) ? ((~(max((((/* implicit */long long int) (signed char)7)), (arr_4 [i_1] [13LL] [i_4 + 3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_4 - 2] [i_4 - 1] [(unsigned short)4] [i_4 + 1])) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (arr_6 [(short)9] [i_1 + 1] [i_3])))) ? (((unsigned long long int) arr_14 [i_1 - 1] [i_1 + 1] [i_2 - 1] [i_2] [i_2] [i_3 - 1] [i_4 - 2])) : (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0] [i_0] [i_4 - 2])))));
                                var_21 += ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) (short)-13722)) + (13723))))) & ((-(((/* implicit */int) (unsigned char)4)))))) >= (((((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_4])) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
