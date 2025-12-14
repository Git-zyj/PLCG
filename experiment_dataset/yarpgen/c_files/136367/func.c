/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136367
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
    var_19 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-9))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_6), (var_17)))) : (((((/* implicit */int) var_11)) + (((/* implicit */int) var_15))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) << (((/* implicit */int) (short)9))))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)14045), (arr_3 [i_0])))) ? ((+(((/* implicit */int) (short)13919)))) : (((((/* implicit */int) (short)0)) << (((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) - (239)))))));
        var_22 += ((/* implicit */short) ((((((/* implicit */int) (short)20937)) < (((/* implicit */int) (short)0)))) && (((/* implicit */_Bool) (((-(((/* implicit */int) (short)-16161)))) / (((/* implicit */int) (unsigned char)249)))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned char)169))) / (min((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) (short)1136))))))));
                        var_23 = ((/* implicit */unsigned char) (short)20937);
                        var_24 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) (unsigned char)88))))) < (((/* implicit */int) min(((short)-14065), (((/* implicit */short) arr_11 [i_1] [i_0])))))))) + (((/* implicit */int) ((short) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) min((((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2])) | (((/* implicit */int) var_4)))), ((-(((/* implicit */int) (short)29494))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (short i_5 = 3; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_27 [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */int) arr_1 [i_7] [i_7])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_5 - 3] [i_5 - 3] [i_5 - 1])) : (((/* implicit */int) arr_4 [i_5 - 3] [i_5 - 2] [i_5 + 2]))))));
                        arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) (short)-32062))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (short i_8 = 2; i_8 < 12; i_8 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((short)-25855), ((short)-16146)))))))));
            var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((short) (short)-29352))))) ? (((/* implicit */int) (short)-29328)) : (((/* implicit */int) ((short) arr_20 [i_8 + 2] [i_8 + 2] [i_8 + 2])))));
        }
        for (short i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
        {
            var_28 &= var_18;
            arr_35 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (short)-5906))) ? (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_2 [i_4])))) : (((/* implicit */int) min((var_2), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4]))))))))));
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            arr_38 [i_4] = ((/* implicit */unsigned char) (short)-16150);
            var_29 = ((/* implicit */short) ((((((/* implicit */int) min(((short)-10257), (arr_25 [i_4] [i_4] [i_4] [i_4])))) + (2147483647))) << ((((+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))) - (31985)))));
        }
        /* vectorizable */
        for (short i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (unsigned char)110))));
            arr_42 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) arr_9 [i_11] [i_11 + 1] [i_11] [i_4])) : (((/* implicit */int) var_3))));
        }
    }
}
