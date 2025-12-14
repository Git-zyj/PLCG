/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140315
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */int) var_1);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] [(unsigned short)6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [(signed char)11] [i_1] [(signed char)11] [(_Bool)1] [i_1]))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4225)) ? ((-(((/* implicit */int) (unsigned short)56888)))) : (((/* implicit */int) arr_7 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)4224)) / (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) > (arr_1 [i_1 + 1] [i_1 - 1]))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [5LL] [5LL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))), (max((arr_3 [0LL] [7U]), (((/* implicit */unsigned int) (unsigned char)221))))))));
                        arr_16 [(short)11] [i_5] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max(((+(max((((/* implicit */int) (signed char)63)), (2140375245))))), (((/* implicit */int) (short)3363))));
                        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_1 - 2])) ? (arr_2 [i_0] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-4239)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((long long int) ((arr_5 [i_0] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((2147996526U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_6] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)4224)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : (2051386705U)))) | (3508958131623964410LL)));
                            var_19 -= ((/* implicit */signed char) min((((/* implicit */int) (signed char)16)), (((((/* implicit */_Bool) max((1394951822U), (((/* implicit */unsigned int) var_13))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) max((var_6), (var_6))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((_Bool) var_5)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [(_Bool)1]))))) == (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [5ULL] [i_1] [6U] [i_1])) == (((/* implicit */int) (short)-8192))))), ((unsigned short)7462))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_9))));
                            var_22 ^= ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ ((~(2370330470U))))), (((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1 - 1])))))));
                        }
                        arr_24 [9LL] [i_2] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) max(((signed char)15), (((/* implicit */signed char) arr_23 [i_1 - 2] [i_1 - 1] [8ULL] [(signed char)10] [i_1 - 1] [i_1 - 1])))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) arr_8 [i_1] [(unsigned short)10] [10LL] [i_1]);
                        arr_28 [(signed char)0] [i_1] [i_1] [(_Bool)0] = ((unsigned int) max((min((((/* implicit */unsigned int) arr_7 [i_0])), (arr_27 [2U] [i_1] [(short)10] [(unsigned short)5]))), (((/* implicit */unsigned int) ((short) 1236233780190904808LL)))));
                        var_25 -= ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_10))))))));
                    }
                    var_26 = ((((/* implicit */int) arr_6 [i_0] [(signed char)7] [10U])) < (var_12));
                    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)4224), (((/* implicit */short) (unsigned char)95))))) ? (((((/* implicit */int) arr_9 [i_2] [i_1 - 1] [i_2])) ^ (((/* implicit */int) arr_9 [(short)6] [i_1 + 1] [(unsigned char)3])))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_28 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)88)) ? (var_9) : (((/* implicit */unsigned int) var_12))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) : (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
}
