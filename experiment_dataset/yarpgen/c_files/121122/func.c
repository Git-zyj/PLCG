/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121122
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (+(var_10))))));
    var_13 = ((/* implicit */signed char) 35184372088704LL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) arr_9 [i_0] [i_2] [i_1 - 3] [i_0] [i_0] [(unsigned char)10]);
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [1]))))) ? (arr_7 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])));
                    }
                    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) 
                    {
                        var_15 = 5116610300904661721LL;
                        arr_15 [i_0] [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned short)37512)), (var_10))), (((/* implicit */int) ((_Bool) arr_10 [i_0])))));
                        var_16 = max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (var_10) : (max((arr_8 [i_0]), (arr_14 [9U] [i_1] [i_0] [i_4])))))));
                        arr_16 [i_4] [i_2] [13] = ((/* implicit */int) (+(max((-5116610300904661726LL), (min((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_2] [i_0])), (-5116610300904661726LL)))))));
                    }
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_20 [i_5] = ((/* implicit */unsigned char) 9223372036854775807LL);
                        arr_21 [i_1] [i_2] |= ((/* implicit */signed char) (((~(((((/* implicit */long long int) 3932160)) % (var_2))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_17 [i_1] [i_0] [i_1 + 3]) : ((+(var_5))))))));
                        arr_22 [i_1] [i_5] = ((/* implicit */short) ((-5116610300904661720LL) - (-5116610300904661726LL)));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((var_4), (((/* implicit */long long int) var_3)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_6] [9LL] = arr_9 [i_0] [i_0] [i_2] [i_2] [i_0] [i_6];
                        var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_8)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_19 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)27))))));
                            arr_30 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */long long int) ((arr_14 [i_0] [i_1] [i_1 + 3] [i_6]) <= (arr_13 [i_1 - 2] [i_2])));
                        }
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) var_2);
                            arr_34 [i_0] [i_1 + 1] [i_2] [14] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) -5116610300904661739LL))) == (((((-461751235) + (2147483647))) << (((((/* implicit */int) (short)5927)) - (5927)))))));
                            arr_35 [i_8] [i_0] [i_2] [i_2] [10] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_1] [i_1 - 1] [i_1 + 3]))));
                        }
                    }
                    arr_36 [i_1] [i_1] = min(((~((+(((/* implicit */int) var_1)))))), ((~(arr_32 [i_1 + 3] [i_1 + 3] [4] [i_1 + 1] [10LL] [i_1 - 2] [i_1]))));
                    var_20 &= ((/* implicit */unsigned int) ((arr_17 [i_0] [i_0] [i_2]) << (((((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) var_11)) : (arr_17 [i_0] [i_0] [6]))) + (106))) - (16)))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) (+(min((((/* implicit */long long int) var_10)), ((+(var_4)))))));
    }
    var_22 = ((/* implicit */int) ((-5116610300904661722LL) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((var_5) == (((/* implicit */int) var_9))))), (var_7)))))));
}
