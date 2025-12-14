/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117135
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
    var_12 = ((/* implicit */short) min((var_9), (((((((/* implicit */_Bool) (short)22252)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) / (((/* implicit */int) max(((unsigned short)55798), (((/* implicit */unsigned short) (short)0)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((short) (short)12)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) (short)-1);
                        var_15 &= max((((/* implicit */int) ((unsigned char) ((unsigned short) arr_6 [i_0 + 2] [i_0] [i_0 - 2])))), ((+(((((/* implicit */_Bool) arr_5 [(short)15] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-5)))))));
                        var_16 = ((/* implicit */signed char) var_7);
                        var_17 &= ((/* implicit */short) var_6);
                        arr_11 [i_0] [i_0] [i_2] [i_3] &= var_9;
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) 1024000846U);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_4]))))) ? (((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_4] [i_4] [i_0]))))) : (min((arr_6 [i_0 + 3] [i_0 - 1] [i_4]), (((/* implicit */unsigned int) (short)-5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_0] [i_4] [i_0])))))))));
            var_20 = ((var_1) % (max((((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-5))))), (((unsigned int) var_10)))));
        }
    }
    var_21 &= var_9;
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (short)5))));
    var_23 = ((/* implicit */unsigned short) 4031571512U);
}
