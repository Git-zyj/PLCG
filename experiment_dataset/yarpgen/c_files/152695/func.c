/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152695
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_18)) | (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6329)) ? (-1618395529) : (((/* implicit */int) (unsigned short)59233))))) ? (((((/* implicit */_Bool) (unsigned short)6329)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_2])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_1] [i_0]))))) : (((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_6 [i_0] [(unsigned short)2] [i_2] [(unsigned short)2]))))) | (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_13))))))));
                    arr_8 [i_0] [i_0 - 1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) max((var_10), (arr_2 [i_0] [i_1 - 1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (_Bool)1);
    var_22 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_13 [i_3] [i_4] = ((_Bool) var_18);
                arr_14 [i_4] = ((unsigned char) ((((_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((int) (unsigned short)32640))));
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)59192));
                arr_16 [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)32664)) == (((/* implicit */int) (unsigned short)32904))))), (((((/* implicit */_Bool) min(((unsigned short)6321), (arr_9 [i_4])))) ? (max((-124815753), (((/* implicit */int) (unsigned short)32632)))) : (((((/* implicit */int) (unsigned short)32874)) + (var_0)))))));
            }
        } 
    } 
}
