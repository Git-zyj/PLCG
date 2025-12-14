/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127010
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
    var_16 = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-21))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_17 = (-(arr_6 [i_1 - 1] [i_1 - 1]));
                        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11329)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (9223372036854775807LL)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
        arr_10 [11ULL] = ((/* implicit */unsigned long long int) ((short) var_3));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4])))))));
        var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) var_9)) : (arr_13 [i_4]))))));
        var_21 &= ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) (_Bool)1)));
    }
    var_22 = ((/* implicit */signed char) var_1);
}
