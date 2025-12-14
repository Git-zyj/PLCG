/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172962
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
    var_17 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) (unsigned char)240);
            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)120))));
            var_21 = ((_Bool) ((unsigned short) (_Bool)1));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) % (((/* implicit */int) var_2))));
            var_23 = ((/* implicit */signed char) (!(arr_3 [i_0 + 1])));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [(unsigned short)19] [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0] [(unsigned short)10]))) : (((((/* implicit */_Bool) arr_11 [(short)15] [i_5])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_10))))));
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) var_9);
                            arr_15 [2LL] [(signed char)17] [(_Bool)1] [10LL] [i_6] [i_4] [2LL] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_11)))) > (((((/* implicit */int) (signed char)114)) * (((/* implicit */int) arr_2 [i_2]))))));
                        }
                        var_27 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_3] [i_2]);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_7 = 3; i_7 < 12; i_7 += 4) 
    {
        var_28 = arr_17 [(unsigned short)1];
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8128))))) ? (((/* implicit */int) (unsigned short)29)) : ((+(((/* implicit */int) var_9))))));
            arr_21 [i_7] [i_7] = ((/* implicit */unsigned short) (short)29953);
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_7 + 1]))));
        }
    }
}
