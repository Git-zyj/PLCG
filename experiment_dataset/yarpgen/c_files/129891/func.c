/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129891
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)1))))));
                        var_12 = ((/* implicit */unsigned short) (+(arr_8 [i_1 - 1] [i_1] [i_1] [i_1 - 3])));
                        arr_13 [i_1] = ((/* implicit */_Bool) (-(15588948024019409274ULL)));
                    }
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1])))))));
                            var_13 -= ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) (_Bool)0)))));
                        }
                        for (short i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            var_14 = (~((+(((/* implicit */int) arr_18 [i_6 + 3] [i_4] [i_0])))));
                            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((291717074) < (((/* implicit */int) var_2)))))));
                        }
                        var_16 -= (~(3610596758U));
                        var_17 += ((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */int) var_3)) : (8388607));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned char) ((unsigned int) -8388608))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_9);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1])) ? (((/* implicit */unsigned int) arr_1 [i_1 - 3])) : (arr_21 [i_0] [i_2])));
                        }
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))) : (var_1)))));
        var_22 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))));
        arr_27 [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_23 [i_0] [i_0]) == (((/* implicit */int) var_10)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) var_0))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((unsigned int) (-(1245063847)))))))));
}
