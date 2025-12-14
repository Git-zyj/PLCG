/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161559
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_19)))), (var_14)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((+(var_16)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (_Bool)1);
        arr_4 [(_Bool)1] [2U] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [5U] [i_0])))))) >= (max((4160749568U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)158)) <= (1290396400))))))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((426075185U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (min((((/* implicit */unsigned int) (_Bool)0)), (3868892111U)))))) || (((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [6U] [i_1] = (unsigned char)71;
                                arr_17 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) (~(arr_10 [i_1] [i_2 - 3] [i_1] [i_1])))) + (arr_6 [i_2 - 3] [i_1] [i_2 + 1]));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_2 - 3] = ((/* implicit */unsigned char) arr_12 [(unsigned char)23] [i_1] [i_2] [0] [i_2]);
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)52)), (-285716689)));
                    var_23 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) 1290396398)) + (var_18))) * (426075165U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 1] [i_0] [i_2])) != (((/* implicit */int) arr_3 [i_0]))))))));
                    var_24 = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) var_13))))))));
                }
            } 
        } 
        arr_20 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned int) max((arr_9 [6] [i_0] [i_0] [i_0] [i_0]), (var_0))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) max(((_Bool)0), (var_0)))))) : ((~(((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    var_25 = ((/* implicit */_Bool) (~(-1823441258)));
}
