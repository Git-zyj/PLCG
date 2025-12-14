/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120249
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
    var_13 |= ((/* implicit */_Bool) var_1);
    var_14 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) & (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((((var_10) ? ((~(((/* implicit */int) arr_2 [i_1])))) : (((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_3 - 1] [(unsigned short)7] [i_1] [i_0])) : (((/* implicit */int) arr_7 [(unsigned short)14] [i_1] [(unsigned short)14])))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3 - 1] [i_2] [(_Bool)1])) >> (((/* implicit */int) var_0)))))))));
                        var_16 = arr_7 [i_0] [i_0] [i_0];
                        var_17 = ((/* implicit */unsigned short) (+(((arr_1 [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1]))))));
                        arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min(((~(((/* implicit */int) max((arr_4 [i_1] [i_1] [i_1]), (arr_0 [i_0])))))), (((((/* implicit */_Bool) ((arr_0 [i_3]) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3] [i_1] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3 - 1]))))) : (((/* implicit */int) var_8))))));
                    }
                } 
            } 
            arr_11 [i_1] [i_0] [i_1] = arr_4 [i_0] [i_0] [i_0];
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */int) (!((!(var_0)))))), (((min((var_10), (arr_8 [i_0]))) ? (((arr_13 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)6])))) : (((/* implicit */int) (!(arr_13 [i_0]))))))));
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) max((arr_12 [i_0]), (((/* implicit */unsigned short) (_Bool)0))))))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */_Bool) min((min(((unsigned short)21925), (((/* implicit */unsigned short) (_Bool)1)))), (max(((unsigned short)21925), (((/* implicit */unsigned short) (_Bool)1))))));
                            arr_29 [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) min((arr_23 [i_0]), (((((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) >= (((/* implicit */int) arr_7 [i_0] [i_4] [i_6])))))));
                        }
                    } 
                } 
            } 
        }
        var_19 *= arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_12)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_28 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) min((((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1])) != (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))));
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_8)))))))))));
}
