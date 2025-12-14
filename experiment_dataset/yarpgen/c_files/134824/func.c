/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134824
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
    var_15 = ((/* implicit */short) ((long long int) max((var_11), (((/* implicit */unsigned short) var_12)))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1 - 4] [i_0] [i_3 + 1] [i_0] [i_3 + 2] = ((/* implicit */long long int) (-(((arr_11 [i_0] [i_3 + 1] [i_0] [i_3]) / (arr_11 [i_0] [i_3 - 1] [i_2] [i_2])))));
                        var_17 = ((/* implicit */long long int) arr_3 [i_0]);
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)41626);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (short i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) 35184372088831LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)27586)))), (((/* implicit */int) var_11)))) * (((/* implicit */int) ((unsigned short) (unsigned short)8411)))));
                        var_19 = ((/* implicit */_Bool) var_13);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_0] [(unsigned short)0] [7LL])))))));
        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 428029265U)) ? (((/* implicit */int) (short)27586)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max(((short)6206), ((short)-6198)))) : (((/* implicit */int) var_9))));
    }
}
