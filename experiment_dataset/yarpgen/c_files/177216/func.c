/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177216
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)47171)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), ((+((+(1109298214)))))));
    var_19 = ((/* implicit */unsigned short) var_14);
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */int) min(((unsigned short)26132), ((unsigned short)18365)))) + (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */int) (unsigned char)255))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)1)))) : ((-(((/* implicit */int) (unsigned short)54313)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (var_4)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) max((((/* implicit */int) (unsigned short)6066)), (var_14))))) < (((/* implicit */int) var_10))));
                    var_22 = ((/* implicit */unsigned char) var_2);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36962)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)63649))))) ? (var_3) : (((/* implicit */unsigned int) (~(var_4))))));
                }
            } 
        } 
        var_24 = var_3;
    }
}
