/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147382
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
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((short) ((unsigned short) ((unsigned short) (unsigned short)8241))));
                        var_17 = ((/* implicit */short) arr_4 [i_0 + 2] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned short) max((((short) min((((/* implicit */unsigned short) (short)22958)), ((unsigned short)1857)))), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) || (((/* implicit */_Bool) min(((unsigned short)25), ((unsigned short)63679)))))))));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)23062)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) var_4))));
                        var_20 += ((/* implicit */short) ((unsigned short) (unsigned short)1866));
                        var_21 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_11))))) >= (((/* implicit */int) max(((unsigned short)37104), (((/* implicit */unsigned short) arr_3 [i_0])))))))), ((+(((/* implicit */int) var_1))))));
                    }
                    arr_10 [i_0] [i_2] [i_0] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8494)) && (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)54288)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))) >= (((/* implicit */int) var_0)))))));
    var_23 = ((short) var_11);
}
