/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112324
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */long long int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) ((short) max((var_5), (((/* implicit */int) arr_7 [i_0 + 4] [i_0] [i_0])))))) : ((-(((/* implicit */int) (unsigned short)65529)))));
                    var_10 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((var_5) > (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) var_0))))));
                    var_11 = ((/* implicit */int) ((((6040822007311925065ULL) & (((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */int) var_9))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
                    var_12 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_4 [i_0 + 2])) << (((((((/* implicit */_Bool) -760542384024940715LL)) ? (-1771903311) : (16777215))) + (1771903319))))));
                }
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    arr_11 [9] [i_3 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [21U])) || (((/* implicit */_Bool) var_4))))) & ((-(((/* implicit */int) arr_10 [i_0] [1LL] [i_3])))))) & (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 - 1]))) % (-4905560087821814200LL)))))))));
                    var_13 = ((/* implicit */_Bool) max((var_13), (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_7 [i_0 + 3] [i_0] [i_0 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)127)))))))));
                }
                for (long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */int) var_6);
                        var_15 = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((-16777202) ^ (((/* implicit */int) var_8)))))));
                        arr_17 [i_4] = ((/* implicit */unsigned short) max((((long long int) (+(((/* implicit */int) (short)32744))))), (((-5307327938781362463LL) / (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_8)))))))));
                    }
                    var_16 = ((/* implicit */unsigned int) var_4);
                    arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((704320054) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_2)))) : (((int) var_3))))));
                }
                arr_19 [i_1] [(unsigned short)15] [i_1] = ((/* implicit */unsigned char) -16777225);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (((var_3) / (var_3))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_3) > (((/* implicit */unsigned long long int) var_7))))), (var_2)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)104)))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (8391601802201414239ULL)))));
}
