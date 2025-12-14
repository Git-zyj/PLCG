/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102694
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
    var_10 -= (-(((/* implicit */int) var_2)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > ((~(((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)5] [(short)11]))) : (10747465452050366666ULL)))))));
                    arr_11 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)64))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        var_11 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))))), (max((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [(unsigned char)9] [i_1] [i_2] [i_2])))))))));
                        var_12 -= ((/* implicit */unsigned char) arr_8 [i_0] [i_1 - 1]);
                    }
                    var_13 -= ((/* implicit */unsigned int) max(((+(((7100019937790585406LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [7LL] [7LL]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((((/* implicit */int) var_5)) / (var_3))) : (((((/* implicit */int) (signed char)66)) / (((/* implicit */int) (signed char)3)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 2094082777)) && (((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1])))))));
                            var_15 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [(unsigned char)10] [(short)7]))))));
                        }
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) -927602581)) ? (var_3) : (((/* implicit */int) arr_17 [(signed char)6] [i_2] [i_2] [i_6]))))));
                            var_17 = ((/* implicit */long long int) ((signed char) arr_18 [i_0] [i_0] [10ULL] [10U] [i_6 + 2]));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_17 [i_1] [i_1 - 1] [i_1] [7]))));
                            var_19 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_19 [i_0] [i_7])))));
                            arr_25 [(short)3] [(short)3] [(_Bool)1] [3] [i_7] = ((/* implicit */int) (!(((1832417379) > (var_3)))));
                        }
                        for (signed char i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) 2147483647);
                            var_21 = ((/* implicit */unsigned int) 7100019937790585406LL);
                        }
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0] [i_0]))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_1 + 1])) ? (arr_21 [i_1 + 1]) : (arr_21 [i_1 - 1])));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) max(((((-2147483647 - 1)) & (2147483647))), (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))))) ? (min((arr_31 [i_9] [i_9]), (((/* implicit */unsigned int) var_2)))) : (((unsigned int) (-2147483647 - 1))))))));
        arr_32 [i_9] = ((/* implicit */long long int) (+(min((arr_31 [i_9 - 1] [i_9 - 1]), (((/* implicit */unsigned int) var_1))))));
    }
}
