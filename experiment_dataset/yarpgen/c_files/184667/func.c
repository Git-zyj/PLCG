/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184667
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)213);
        arr_4 [i_0] = ((unsigned int) (unsigned char)255);
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_1 - 4] [i_2] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) & (((/* implicit */int) (unsigned char)245)))))))) : (((/* implicit */int) var_18))));
                            var_20 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)9)), (((unsigned int) 520093696U))));
                            arr_18 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (520093696U)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_19))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)251))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) : (3774873599U))))))))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] [i_0] [i_0] |= var_1;
                            var_22 -= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (signed char)110)))));
                            var_23 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) : (var_17)))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                        }
                        var_24 = ((/* implicit */unsigned int) (signed char)-114);
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned char) (~((-((-(((/* implicit */int) (_Bool)1))))))));
        arr_25 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)240))))) ? (var_10) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))));
    }
    var_25 = ((/* implicit */_Bool) (unsigned char)141);
}
