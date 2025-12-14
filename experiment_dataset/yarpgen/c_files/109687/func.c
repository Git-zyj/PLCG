/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109687
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
    var_19 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (var_2))) == (((unsigned long long int) 3398094992981082114ULL)))))) : (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) 1800048762U))))))));
                    var_21 = (~(15048649080728469502ULL));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(2494918534U)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_3] [i_3]))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned char) (((-((~(((/* implicit */int) arr_8 [i_3 - 4] [6ULL] [i_5])))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                        arr_20 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((arr_19 [i_3] [i_3] [i_3] [i_3 - 3]) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)0));
        var_24 = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    var_25 *= ((/* implicit */signed char) (+(var_13)));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)22584))));
                }
            } 
        } 
    }
}
