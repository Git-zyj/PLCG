/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186030
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50342)) ? (((/* implicit */int) (short)-11316)) : (((/* implicit */int) (short)14846))))) ? (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned short)7292)) : (((/* implicit */int) (unsigned short)23372)))) : (((/* implicit */int) (unsigned short)12810))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)27592)) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)27579))) ? (((/* implicit */int) (unsigned short)17004)) : (((/* implicit */int) max(((short)14846), ((short)29620))))))));
        arr_4 [i_0] = ((unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)65523))) - ((-(((/* implicit */int) (unsigned short)27542))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((short) var_11)))))) ? (((/* implicit */int) ((short) ((short) var_6)))) : (((/* implicit */int) (short)14637))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (max(((unsigned short)50359), (((/* implicit */unsigned short) (short)-14858))))));
                            arr_17 [i_0] [(unsigned short)10] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned short) min((((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_14)))) << (((((((/* implicit */_Bool) (unsigned short)48061)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)15175)))) - (49128))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_16)) | (((/* implicit */int) (unsigned short)63)))) : ((~(((/* implicit */int) var_8))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = var_5;
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7)))))));
                            var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) (unsigned short)51988)) : (((/* implicit */int) (unsigned short)51988))))));
                            var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)15)))));
                            var_25 = ((/* implicit */short) var_11);
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (var_1)));
                            arr_23 [i_0] [(unsigned short)3] [i_2] [i_0] [i_6] = ((/* implicit */short) max((min((((/* implicit */unsigned short) (short)-14476)), ((unsigned short)27572))), (var_19)));
                            var_27 = ((/* implicit */unsigned short) min((var_27), ((unsigned short)48090)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)41697))));
                            arr_27 [i_0] [i_1] [i_0] [i_3] [i_7] = ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)22839)))));
                            var_29 = ((/* implicit */unsigned short) max((((short) (!(((/* implicit */_Bool) (short)11316))))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)12382)) && (((/* implicit */_Bool) (short)-11317)))))));
                        }
                        arr_28 [(unsigned short)9] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) ((((/* implicit */int) var_18)) | (((/* implicit */int) (unsigned short)13580)))))), (min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned short)37994))))));
                        arr_29 [i_0] [i_1] [i_1] [i_3] = ((unsigned short) min((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (short)15363))))), (((((/* implicit */_Bool) (short)11316)) ? (((/* implicit */int) (unsigned short)32990)) : (((/* implicit */int) (unsigned short)46696))))));
                        arr_30 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_17))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50342)) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned short)55239))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned short)15)))))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) (short)-964)) && (((/* implicit */_Bool) (short)7936))))))), ((-(((/* implicit */int) (unsigned short)8310))))));
    var_32 = ((/* implicit */unsigned short) var_17);
}
