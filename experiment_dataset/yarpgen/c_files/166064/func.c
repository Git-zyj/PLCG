/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166064
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
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned long long int) var_6)))))))) % (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) max(((short)-25443), ((short)(-32767 - 1))))) : (((/* implicit */int) (signed char)-22))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_7 [(unsigned short)13] [(unsigned short)13] [i_2] [i_0])), (max((arr_6 [13ULL] [i_2]), (((/* implicit */unsigned char) arr_7 [i_0] [i_0 - 4] [i_1] [(_Bool)1]))))))) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_1])) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2 - 1]))))))) : ((~(((/* implicit */int) max((var_10), (((/* implicit */short) var_4)))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_0 - 2])) <= (var_2)))) >> ((((~(((((/* implicit */int) arr_7 [i_0 - 3] [i_1 - 2] [i_2 + 1] [i_2 - 1])) + (((/* implicit */int) var_14)))))) - (5498)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */short) arr_6 [i_2] [11U]);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) var_9)))) <= (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) != (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 1] [i_2] [(unsigned short)2]) - (1108341405U))))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)183)))))))));
                        var_22 = ((/* implicit */signed char) ((unsigned char) max((arr_8 [i_0 - 4] [i_0] [i_1 + 2] [i_2 + 1] [(unsigned short)0] [i_3]), (((/* implicit */unsigned int) (+(arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_3])))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                        arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (~(11608949844799604667ULL)));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_14 [i_4] [i_1] [i_1] [i_0] = ((arr_0 [i_2 - 1] [i_0 + 1]) % (arr_0 [i_2 - 1] [i_0 + 1]));
                        var_24 = ((/* implicit */unsigned long long int) ((int) (-9223372036854775807LL - 1LL)));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (arr_0 [i_0] [i_1 + 2])))) / (arr_9 [i_0] [i_1] [i_1] [i_4])));
                    }
                }
            } 
        } 
    } 
}
