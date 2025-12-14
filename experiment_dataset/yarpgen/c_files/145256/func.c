/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145256
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
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == ((~(((((/* implicit */int) var_7)) | (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(arr_6 [(short)3] [i_2])))) == (((/* implicit */int) var_11)))) ? (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) + (((((/* implicit */_Bool) 0)) ? (238401464) : (696945270))))) : ((~(max((238401459), (238401464)))))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (unsigned char)181))), (((((/* implicit */int) (signed char)11)) % (((/* implicit */int) var_6))))))) ? (((((/* implicit */int) var_9)) * ((+(((/* implicit */int) (unsigned char)99)))))) : (((/* implicit */int) max(((unsigned short)65531), (((/* implicit */unsigned short) (short)13418)))))));
                    var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(signed char)1]))))) ? ((~((-(-1795857766))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned char)162)) - (((/* implicit */int) (_Bool)1)))) <= (arr_0 [i_1]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-32765))))))) + (((/* implicit */int) var_0))));
}
