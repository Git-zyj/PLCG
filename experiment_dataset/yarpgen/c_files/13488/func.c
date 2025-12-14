/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13488
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */long long int) var_10);
                        arr_14 [i_0] = ((/* implicit */_Bool) arr_13 [i_3 - 2] [i_0 - 1] [i_0] [i_0]);
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(arr_11 [i_0 + 1] [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            arr_18 [i_0] [i_1] [(signed char)12] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -16)) ? (-16) : (((/* implicit */int) var_0))))) & (((unsigned int) var_8))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */long long int) 189344776)) : (arr_15 [i_3] [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3 + 1] [(_Bool)1])));
                        }
                    }
                    arr_19 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)90)) && (((/* implicit */_Bool) (unsigned char)188))))) - (((/* implicit */int) var_7)))) == (((((((/* implicit */int) var_0)) >> (((arr_1 [i_0] [i_0]) - (3978739158138011046ULL))))) - (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [(unsigned short)1] [i_1] [i_0] [2LL] [i_2])) != (((/* implicit */int) (unsigned short)24157)))))))));
                    arr_20 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)165))));
                }
            } 
        } 
        arr_21 [i_0] = ((unsigned char) var_7);
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)254)) : (524224)))) || (((/* implicit */_Bool) 607171405U))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_4))));
        arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)148)))))) + (arr_22 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) <= (-3318344333255741056LL)))))) : (var_2)));
    }
    var_15 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */int) var_7))));
}
