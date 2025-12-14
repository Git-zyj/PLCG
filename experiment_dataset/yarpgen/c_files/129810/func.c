/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129810
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)49932)) && (((/* implicit */_Bool) (unsigned short)49932))))))) & (((/* implicit */int) ((signed char) ((unsigned long long int) var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_9))), (min((var_10), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)15605);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((int) ((unsigned char) (unsigned short)57438))))));
                        var_19 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15604))))));
                        arr_11 [i_0] [i_1] [i_0] [(signed char)6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_2] [i_0] [i_0]), ((unsigned short)49924)))) ? (arr_8 [(short)1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15619)) ? (var_13) : (var_12)))))))));
                        var_20 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0]) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned short)49931)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [13] [i_2] [5U])) == (((/* implicit */int) (unsigned short)15583)))))))));
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)5577)) >> (((((((/* implicit */_Bool) var_8)) ? (var_12) : (((((/* implicit */int) (unsigned short)15604)) << (((((/* implicit */int) (unsigned short)15604)) - (15589))))))) - (2101731144)))));
                    var_21 += (+(4294967295U));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [2] [4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(262128))))))) : (((/* implicit */int) var_8)))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) arr_8 [i_4 + 2] [i_0] [i_4 - 1]));
                    arr_15 [(unsigned short)8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49928)) ? (((/* implicit */int) (unsigned short)15605)) : (((/* implicit */int) (unsigned short)15596))));
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                }
            }
        } 
    } 
}
