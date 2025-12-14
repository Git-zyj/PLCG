/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134067
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
    var_18 = ((/* implicit */long long int) ((unsigned short) (~(var_16))));
    var_19 = ((/* implicit */unsigned int) ((8203064185506978697ULL) + (8203064185506978694ULL)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 += ((/* implicit */_Bool) ((unsigned short) min((arr_1 [i_0]), (((/* implicit */unsigned int) var_10)))));
        var_21 = ((/* implicit */long long int) var_14);
        arr_2 [9LL] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_10 [i_1] = ((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_1 + 1]));
                        arr_11 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (10243679888202572918ULL) : (((/* implicit */unsigned long long int) 994004092U))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                            arr_14 [i_1] [i_1] [5LL] [i_1] [(unsigned char)2] [i_1] = -9223372036854775798LL;
                            arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 1])))) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_5] [i_3] [i_1] [i_1] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) var_9);
                            arr_21 [(unsigned short)4] [i_1] [i_1] [(unsigned short)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (var_7))), (arr_9 [i_5])))) ? (min(((+(var_13))), (((/* implicit */unsigned long long int) max((-2991051081851305555LL), (((/* implicit */long long int) -1846231951))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((arr_8 [i_1 - 1] [i_1] [(unsigned short)13] [i_1 + 2] [i_1]) + (1952742106))))))));
                            arr_22 [i_0] [i_0] [7LL] [i_3] [17] [i_1] = ((/* implicit */_Bool) var_6);
                            arr_23 [i_0] [i_1] [6] [i_1] [i_5] |= ((/* implicit */unsigned int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5]))))) | (var_7)))));
                        }
                    }
                    arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (10635333871526703197ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned char)8] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [11LL])))))) ? (((8203064185506978698ULL) ^ (((/* implicit */unsigned long long int) -2072012201678619703LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (arr_6 [i_1] [8ULL]))))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1]) - (arr_3 [i_1] [i_1]))))));
                    arr_25 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 15816982489650417320ULL)) ? (-9223372036854775790LL) : (((/* implicit */long long int) 1846231951))));
                    var_23 = ((/* implicit */long long int) arr_13 [i_0] [9U] [9U] [i_1] [i_1]);
                }
            } 
        } 
    }
}
