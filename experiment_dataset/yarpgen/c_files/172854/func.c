/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172854
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0])))) + (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((unsigned char) var_4))))) | (((/* implicit */int) ((((arr_0 [i_0]) / (arr_0 [i_0]))) != (((/* implicit */unsigned int) var_1)))))));
        var_11 = min((((/* implicit */int) var_5)), (min((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_9))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_0 [i_1])))) ? (min((max((arr_0 [i_1]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((unsigned short) arr_0 [i_1]))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_1] [i_1])) / (((/* implicit */int) arr_5 [i_1])))), (min((((/* implicit */int) arr_2 [i_1])), (var_1))))))));
        var_13 *= ((/* implicit */_Bool) (signed char)-110);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6367))) <= (arr_16 [i_5 + 1] [i_4 + 2] [i_3 - 1]))))) == (max((arr_16 [i_5 + 1] [i_4 - 3] [i_3 - 1]), (((/* implicit */unsigned int) (unsigned char)1))))));
                                arr_17 [i_4] = ((/* implicit */signed char) min((((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_3 - 1])))), (((int) arr_4 [i_5 - 1]))));
                                arr_18 [9U] [i_4 + 1] [i_4] [i_4] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_1)))));
                                var_15 -= ((/* implicit */int) min((((arr_16 [i_4 + 3] [(signed char)7] [i_4 + 3]) + (arr_16 [i_4 + 2] [i_5 + 1] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_4 - 1] [i_5 - 2])) && (((/* implicit */_Bool) arr_7 [i_3 + 1] [i_4 + 3] [i_5 - 1])))))));
                            }
                        } 
                    } 
                    arr_19 [i_3 - 1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_1] [(unsigned char)9] [i_1] [i_1] [i_1] [(unsigned char)9] [(unsigned short)8])) == (((/* implicit */int) var_4))))) >> (((min((((/* implicit */int) arr_13 [i_1] [0LL] [(_Bool)0])), (var_1))) - (91)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [(unsigned char)2] [i_3]))) < (var_8))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) % (var_1)));
}
