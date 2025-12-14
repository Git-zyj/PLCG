/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171332
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_4 [(_Bool)1] = ((/* implicit */signed char) 1616064499);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (((((+((-(((/* implicit */int) var_8)))))) + (2147483647))) << ((((((-((~(var_7))))) + (1979041772))) - (27)))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1])))));
        var_16 &= arr_1 [i_1];
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_13 [i_3 + 1]);
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (165801250U))))))));
                                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)51335)) : (2147483642)));
                                arr_22 [(short)4] [i_2] [i_3] [i_3] [i_3] [i_4] [i_5] = ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_3 + 1] [i_3] [2] [i_4] [i_4 + 1])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) (_Bool)1)))));
                    arr_23 [i_3] [i_2 - 1] [i_3] [i_3] = ((/* implicit */int) arr_9 [i_2 + 1] [i_3]);
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14195))) : (arr_6 [i_1 + 1])));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
    {
        arr_28 [i_6] [i_6] = (+(((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 1])));
        var_21 += ((unsigned short) arr_27 [i_6 + 2]);
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */int) (unsigned short)14202)) >= (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)32)), ((unsigned short)46463)))))))));
    var_23 *= ((/* implicit */unsigned int) (((((((!(var_2))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_5), (var_0)))))) + (2147483647))) << (((((/* implicit */int) (unsigned short)19058)) - (19058)))));
}
