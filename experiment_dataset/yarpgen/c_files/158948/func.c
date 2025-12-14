/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158948
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
    var_16 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) & (((((/* implicit */int) var_12)) | (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) var_12))))))));
    var_18 *= ((/* implicit */unsigned short) (((~(var_7))) | ((~((~(((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [12] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1824345339)) ? (((/* implicit */int) (unsigned short)14352)) : (((/* implicit */int) (short)8792))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) : (14388833818813706257ULL))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((unsigned short) arr_0 [i_1]));
                        arr_13 [i_0] [(_Bool)1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_2] [i_3]) : (var_7)));
                        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [16ULL])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (arr_4 [i_0] [i_1] [i_2])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((unsigned short) 183552555748309513ULL));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned char) arr_20 [i_5 + 1] [i_5 - 1] [i_5 - 1]));
                    arr_23 [i_4] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_22 [i_4] [i_5] [4ULL] [i_6])))) || (((/* implicit */_Bool) arr_22 [i_5 + 1] [i_5 - 1] [i_5] [i_6]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_7 + 2])) : (((/* implicit */int) (_Bool)1))))));
        arr_26 [i_7] = ((/* implicit */long long int) ((int) min((arr_6 [i_7 + 2] [i_7 + 2]), (var_1))));
    }
}
