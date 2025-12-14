/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182550
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0 - 2] [i_2 - 1]))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7324))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_9 [(unsigned short)8])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0)))))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0]))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))) ? (((arr_4 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_3] [i_3])) >= (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_10)) ? (567807884U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0])))))));
                                var_20 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (max((arr_12 [i_5] [i_5] [i_3 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) var_1)))) : ((~(((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) 3727159404U)) : (var_14)))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) : (arr_14 [i_0 - 3] [i_0 - 1] [i_0] [i_0] [i_0 - 2]))))))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1] [i_0 - 1])) : (((/* implicit */int) arr_15 [i_0 - 2] [i_1] [(unsigned char)14] [i_0 + 1] [i_1]))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5))))), (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned long long int) 3727159428U)) : (8821597114530765029ULL))))) : (arr_3 [i_0 + 1] [i_0 - 2] [i_0])));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(arr_9 [(_Bool)1]))))));
            }
        } 
    } 
    var_24 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4822223209950346062ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)3)))), (((/* implicit */int) ((unsigned char) var_11)))))), (max((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5193))) : (13624520863759205553ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
}
