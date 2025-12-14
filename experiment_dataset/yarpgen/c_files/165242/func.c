/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165242
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
    var_11 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] = var_10;
                        var_12 += ((/* implicit */unsigned int) ((-1206763838) < (((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_3 + 3] [14U]))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0])) ? (((/* implicit */int) var_4)) : (arr_2 [i_1 + 1])));
                    }
                    for (short i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)9848)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55687)))))))));
                        arr_12 [i_2] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)64783)) ? (((/* implicit */int) (unsigned short)63215)) : (((/* implicit */int) ((unsigned short) (unsigned short)9849))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (short)3))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_1 [i_0]))))));
                        var_15 = ((/* implicit */unsigned short) var_5);
                        arr_13 [i_1] [14U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(var_1))), (((/* implicit */unsigned int) ((arr_8 [i_0] [(signed char)7] [i_2] [(_Bool)1]) == (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58336)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35947))))))))) : ((~(((((/* implicit */_Bool) (unsigned short)37468)) ? (1156696611U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55687)))))))));
                    }
                    for (short i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (arr_3 [(_Bool)1])));
                        var_17 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned short) ((_Bool) (_Bool)0))), (max(((unsigned short)50572), (((/* implicit */unsigned short) (signed char)62)))))), ((unsigned short)65024)));
                        arr_17 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_3)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0)))), (min(((((_Bool)1) ? (((/* implicit */int) var_3)) : (var_0))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)127)))))))))));
                                arr_24 [i_7] [i_1] [i_6] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((short) ((unsigned short) var_3))), (max((((/* implicit */short) (_Bool)1)), (arr_22 [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 2])))));
                                var_19 = ((/* implicit */short) max((var_19), (min((((/* implicit */short) ((((/* implicit */int) arr_6 [i_1 + 2] [i_6 + 4] [(_Bool)1] [i_6 + 2])) != (((/* implicit */int) arr_6 [i_1 - 1] [i_6 + 1] [(_Bool)1] [i_6 + 2]))))), (arr_22 [i_0] [i_1] [i_0] [(_Bool)0] [i_7] [i_0])))));
                                arr_25 [16U] &= ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) var_2)), (4294967295U))))) ? (arr_11 [10U] [10U] [i_2] [i_1] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)26175)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((unsigned short) ((((/* implicit */int) arr_19 [(unsigned short)8] [(unsigned short)0] [i_1 + 2] [(_Bool)1])) * (var_6))))));
                    arr_26 [i_1] = ((/* implicit */int) ((unsigned short) arr_11 [i_1] [15] [i_1] [i_1] [i_1]));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((_Bool) (~(var_6))));
}
