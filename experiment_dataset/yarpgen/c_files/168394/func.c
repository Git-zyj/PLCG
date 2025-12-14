/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168394
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = min((((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])), ((-(((/* implicit */int) arr_5 [i_0])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [(unsigned short)17] [(short)7] = ((/* implicit */unsigned char) ((short) arr_5 [i_0]));
                    var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (16021708759186813148ULL)));
                }
                for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)20] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned int) var_5)) : (arr_10 [i_0] [i_0] [i_0] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-115)) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])))))) : (var_2)));
                    var_12 &= ((/* implicit */int) ((-4399986149348893278LL) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)15] [(unsigned char)15] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) : (var_2)))), (arr_1 [i_1] [i_1])))));
                }
                var_13 = ((/* implicit */int) ((max((arr_0 [i_0]), (arr_0 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))));
                var_14 = var_1;
            }
        } 
    } 
    var_15 = (~(((((/* implicit */int) min((var_7), (var_7)))) % (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))));
    var_16 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned char)255))))))) ? (min((((/* implicit */unsigned int) (signed char)80)), ((~(var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_4))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_9))))))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
}
