/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109126
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_8))))))) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) ((_Bool) ((unsigned char) var_13))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((185329236) < (-185329236)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(arr_3 [i_1] [i_1 - 1] [i_1])));
            var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)28985))))) || (((467951724) == (-185329237)))))));
            var_21 = ((/* implicit */short) var_9);
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-116))))) || (((/* implicit */_Bool) var_2))));
                        arr_12 [i_2] [i_1 - 1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_1 - 1]))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((arr_13 [i_4] [i_4] [i_4 - 1]) ? (((((/* implicit */int) arr_1 [13])) * (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_8 [(short)12])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) < (var_1))))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_5 - 1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (unsigned char i_7 = 3; i_7 < 14; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -1316536059)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned int) -467951724)) : (478158245U))))));
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_8 - 1] [i_7] [i_8 - 1]))));
                            arr_26 [(unsigned char)2] [i_5] [9] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0])) || (((/* implicit */_Bool) arr_18 [i_0])))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_7] [i_7] = ((/* implicit */int) ((-185329237) < (((/* implicit */int) (unsigned char)116))));
                    }
                } 
            } 
            arr_28 [i_5] [(signed char)10] [i_5 - 1] = ((signed char) arr_4 [i_5 - 1] [i_5 - 1]);
            var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
        }
    }
}
