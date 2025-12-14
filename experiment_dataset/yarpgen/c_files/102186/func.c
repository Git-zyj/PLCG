/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102186
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (short)9672)) : (((/* implicit */int) (short)9656)))), (var_2))) | (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)9672)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9656))) : (3270271581U)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned char) arr_3 [i_1 + 2] [i_2] [i_2 - 2])))));
                        var_14 = ((/* implicit */_Bool) ((signed char) 1024695714U));
                        var_15 = var_4;
                        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3270271581U)) || (((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_0])))) ? (((/* implicit */int) ((unsigned short) var_5))) : ((~(arr_0 [1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 1024695714U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)0]))) : (3270271569U))))));
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 2] [i_0] [(unsigned short)7] [i_4])) ? (3270271569U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9673)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1024695717U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3270271569U))))));
                        arr_16 [i_0] [i_0] [(_Bool)1] [i_1] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) ((_Bool) var_5));
                    }
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */signed char) ((unsigned short) var_11));
    var_20 = ((/* implicit */unsigned short) ((signed char) (short)9656));
    var_21 = ((/* implicit */signed char) max(((-((+(((/* implicit */int) (short)-9665)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 1024695727U))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (var_9)))))))));
    var_22 = ((/* implicit */signed char) var_2);
}
