/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110094
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) var_0))), (var_2)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_9))))) >> (((((/* implicit */int) min((var_2), (arr_1 [i_0])))) - (37672))))) > (((/* implicit */int) min((arr_0 [i_0] [i_0 - 1]), (var_17))))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_9))))) >> (((((((/* implicit */int) min((var_2), (arr_1 [i_0])))) - (37672))) - (59))))) > (((/* implicit */int) min((arr_0 [i_0] [i_0 - 1]), (var_17)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    arr_7 [i_0] [i_0] [i_2 - 1] [i_2] = var_14;
                    var_23 = ((/* implicit */_Bool) min((min(((~(((/* implicit */int) var_19)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)8191))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min(((((+(((/* implicit */int) arr_0 [i_2] [i_2])))) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (!((_Bool)1))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_0] [i_3 - 1] [i_3 - 1] = ((/* implicit */_Bool) arr_3 [i_3 - 1] [i_0] [i_0]);
            var_25 += ((/* implicit */unsigned short) (((-(((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)0)))))) > (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_3 - 1] [i_0])))))));
            arr_12 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0 - 1] [i_0 - 1] [i_0]);
        }
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_5), (var_1))))));
        arr_15 [i_4] [i_4] = var_7;
        arr_16 [i_4] [i_4] = var_15;
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) (((+(((/* implicit */int) min((var_15), (arr_20 [i_6] [i_6])))))) == ((~(((/* implicit */int) arr_4 [i_4 - 1] [i_5]))))));
                    var_28 = ((_Bool) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) (unsigned short)44803);
}
