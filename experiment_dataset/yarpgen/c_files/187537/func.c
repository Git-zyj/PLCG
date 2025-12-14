/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187537
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
    var_12 = ((min((((var_1) & (((/* implicit */int) (_Bool)1)))), (min((var_10), (((/* implicit */int) (signed char)16)))))) < (((((_Bool) var_4)) ? (var_10) : ((+(1139776777))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min(((-(var_9))), ((+(var_11))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
                    arr_8 [i_0] [i_1] [i_0] |= ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1 + 2] [i_2])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((int) arr_5 [i_0] [i_0] [i_2])));
                    arr_9 [i_0] = ((/* implicit */signed char) ((int) (_Bool)1));
                }
            } 
        } 
        arr_10 [(unsigned char)16] = ((/* implicit */_Bool) arr_3 [i_0]);
        arr_11 [i_0] [i_0] = ((/* implicit */short) (~(((int) (_Bool)1))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) (unsigned short)58408);
        arr_14 [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [i_3])) * (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */signed char) ((unsigned char) arr_15 [i_4]));
        arr_20 [i_4] = ((/* implicit */_Bool) (~(min(((-(((/* implicit */int) (short)8439)))), (((((-1139776781) + (2147483647))) >> (((((/* implicit */int) (short)5706)) - (5705)))))))));
        var_16 = (!((_Bool)0));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (short)8439);
        arr_24 [i_5] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8417)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)53275), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((min((var_4), (var_3))) | (((((/* implicit */int) (_Bool)1)) << (((var_9) + (1268186968)))))))));
}
