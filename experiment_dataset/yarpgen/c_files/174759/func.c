/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174759
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
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65533))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)2));
    }
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            {
                arr_12 [i_1 + 1] = ((/* implicit */unsigned int) (unsigned short)8);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2)) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65533)) || (((/* implicit */_Bool) (unsigned short)65533)))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) ((((((/* implicit */int) (signed char)-40)) * (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (unsigned char)163)))))));
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (arr_11 [i_1] [i_2] [i_2])))) > (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_2 [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) arr_16 [i_3]);
                var_22 = ((unsigned int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned short)65524))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)116)) : (-1603506748))))) && (((/* implicit */_Bool) arr_14 [i_3] [i_3]))));
            }
        } 
    } 
}
