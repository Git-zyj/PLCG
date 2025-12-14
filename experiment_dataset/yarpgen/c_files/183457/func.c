/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183457
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(_Bool)1])))))))));
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_3])))))) ? (((/* implicit */int) max(((short)32751), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), (var_9))), (((/* implicit */unsigned short) ((signed char) (_Bool)1))))))));
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */short) 1023U);
                        var_23 *= ((/* implicit */unsigned short) (_Bool)1);
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_3 - 2] [i_2 + 2])), (max((((((/* implicit */_Bool) (unsigned char)181)) ? (4294967295U) : (4294967295U))), (((/* implicit */unsigned int) arr_1 [i_1])))))))));
                        var_25 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 740736609U)))) < (min((4294967295U), (arr_11 [i_3] [i_3] [i_3] [i_5] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (min((((/* implicit */unsigned int) 220206074)), (max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), (1023U)))))));
                        var_28 = ((/* implicit */short) (unsigned short)21710);
                    }
                    for (signed char i_6 = 1; i_6 < 7; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) (_Bool)1);
                        var_30 = (-(min((675857253U), (((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_11 [i_2 + 1] [i_2] [i_3 + 1] [i_2 + 1] [i_6]))))));
                    }
                    var_31 = ((/* implicit */unsigned int) min(((unsigned short)43826), ((unsigned short)18314)));
                }
            } 
        } 
    } 
}
