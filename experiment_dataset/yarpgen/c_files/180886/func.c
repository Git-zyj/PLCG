/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180886
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
    var_13 = ((/* implicit */_Bool) 302678913);
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */short) var_0)), (((short) -22213319))))))))));
    var_15 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)125)), ((short)27298))))))));
    var_16 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
        var_17 -= ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_3 - 1] [1U] [(signed char)13] [i_3] [i_3]))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            arr_15 [i_0] [(unsigned short)5] [i_0] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28812)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) var_8))));
                            arr_16 [i_0] [(_Bool)1] [i_3] [(_Bool)1] = var_3;
                        }
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)115)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(var_0)))))))));
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)0] [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                        }
                        arr_19 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) (-(((((/* implicit */int) arr_3 [i_0])) << (((((((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0])) + (28417))) - (21)))))))) : (((/* implicit */signed char) (-(((((/* implicit */int) arr_3 [i_0])) << (((((((((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0])) + (28417))) - (21))) - (35502))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 - 2]))));
        }
        var_23 = ((/* implicit */int) (short)-25122);
    }
}
