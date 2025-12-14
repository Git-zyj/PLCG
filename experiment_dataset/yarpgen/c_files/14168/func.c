/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14168
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
    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_11)))), (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) | (((((/* implicit */int) (unsigned short)252)) << (((((/* implicit */int) var_14)) - (55874)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) (unsigned short)6))))), (((((/* implicit */int) (unsigned short)19168)) / ((-(((/* implicit */int) (unsigned short)58757))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_0)))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)42907)));
                    arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))));
                }
                for (unsigned short i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((-((+(((/* implicit */int) (unsigned short)19168)))))) : (((/* implicit */int) min((min((arr_14 [i_0] [i_1] [i_2] [i_4]), (arr_1 [i_4]))), (var_2))))));
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_0]))));
                    arr_15 [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */int) arr_1 [i_4 - 3])) : (((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_4 + 2])) : (((/* implicit */int) arr_1 [i_4 + 1]))))));
                }
                var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)55850)))) < (((/* implicit */int) min((arr_1 [i_2]), (var_6))))));
            }
            var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)9685)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_2)))) ^ ((~(((/* implicit */int) var_4)))))) < (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) var_12)))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            arr_18 [i_5] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) & (((((/* implicit */_Bool) (unsigned short)48877)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (unsigned short)15637))))))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        arr_20 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_16 [i_0] [i_0]))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((unsigned short) var_8))));
    }
    for (unsigned short i_6 = 3; i_6 < 12; i_6 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_23 [i_6 + 3])))));
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_15))) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : ((+(((((/* implicit */_Bool) (unsigned short)16667)) ? (((/* implicit */int) (unsigned short)16640)) : (((/* implicit */int) (unsigned short)0))))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48805)) ? (((/* implicit */int) (unsigned short)31352)) : (((/* implicit */int) (unsigned short)41972))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) (unsigned short)0)))))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) min((arr_22 [(unsigned short)10]), ((unsigned short)0)))))))))));
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)65535))) | (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)59549))))))));
    }
}
