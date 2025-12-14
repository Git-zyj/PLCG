/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138570
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))));
                    var_19 -= ((/* implicit */long long int) (+(((arr_2 [2U]) % (((arr_7 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) var_7)) + (32134)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)11980))))));
                        var_21 += ((/* implicit */_Bool) max((((long long int) arr_3 [i_2 + 2] [i_0 + 1])), (((/* implicit */long long int) (~(((/* implicit */int) (short)-4317)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_6 [(signed char)3] [i_0])), (arr_5 [i_3] [9U])))) < (((/* implicit */int) arr_8 [i_3] [i_3 - 1] [15U] [i_3] [15U] [i_3]))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 2] [i_2 - 1])) >= (((/* implicit */int) arr_6 [i_0 + 1] [i_2 + 1])))))) & (((-4511119841837579249LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_0);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1])) << (((((/* implicit */int) arr_3 [i_1] [i_1])) - (18246)))));
                    }
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_18 [i_5] [i_1] [i_1] = ((/* implicit */short) (((~(arr_7 [(_Bool)1] [i_1] [16ULL]))) >= (((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (4511307852296085721ULL)))));
                    var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) (((-2147483647 - 1)) != (31)))) : (((arr_14 [i_0] [i_0] [i_1] [i_5]) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_6 [(_Bool)1] [i_1]))))));
                }
                for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
                    var_28 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0]);
                }
                var_29 = arr_16 [4LL] [i_0];
                var_30 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (signed char)98))));
                var_31 = ((/* implicit */unsigned int) ((signed char) arr_21 [(unsigned char)6] [i_1] [i_1]));
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) + (((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) 9185645986441239917LL)) ? (((/* implicit */long long int) 0U)) : (var_1)))))));
    var_33 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~((+(-4511119841837579237LL)))))) ^ (var_9)));
}
