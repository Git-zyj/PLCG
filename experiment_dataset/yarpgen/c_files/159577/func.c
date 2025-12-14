/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159577
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
    var_16 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_13))))), (((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_14)) - (207))))))), (((/* implicit */int) min((var_8), (min((var_6), (((/* implicit */short) var_4)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [(unsigned char)8] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) ((max((-1149663086818272453LL), (((/* implicit */long long int) (_Bool)1)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(var_4)))))))));
                    arr_10 [i_0] = ((/* implicit */long long int) arr_6 [i_2] [i_0] [i_2 + 1]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    {
                        arr_21 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)-30792)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)250)))))))) ? (((/* implicit */long long int) (((((~(((/* implicit */int) arr_11 [i_3] [i_3])))) + (2147483647))) >> (((((((/* implicit */_Bool) 1149663086818272434LL)) ? (3793589952743684470LL) : (1149663086818272445LL))) - (3793589952743684449LL)))))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (max((((/* implicit */long long int) (unsigned char)239)), (1149663086818272452LL))) : ((-9223372036854775807LL - 1LL))))));
                        arr_22 [i_0] [(_Bool)1] [(_Bool)1] [1LL] [i_0] [1LL] = (~(4611686018427387903LL));
                        arr_23 [i_0] [(short)6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_0] [(_Bool)1])))), ((+(((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_4] [i_5 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) -579633254682966578LL))));
        arr_27 [i_6] = var_4;
        arr_28 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6])) - (((((/* implicit */_Bool) -1149663086818272427LL)) ? (((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6]))))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_33 [i_6] [i_6] [i_8] [i_8] = arr_5 [i_7] [i_8];
                    arr_34 [i_6] [i_8] = ((/* implicit */short) arr_24 [(unsigned char)0] [(_Bool)1]);
                }
            } 
        } 
    }
}
