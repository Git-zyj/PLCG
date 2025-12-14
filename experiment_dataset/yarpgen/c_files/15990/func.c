/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15990
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
    var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) ((((/* implicit */int) var_10)) <= (var_0)))))))));
    var_17 = var_12;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_12 [12ULL] [i_2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) var_11)) - (var_9))) >= (((/* implicit */int) var_15))))) % ((-(var_9)))));
                        arr_13 [i_0] [i_2] = ((/* implicit */_Bool) (-(((((var_9) >> (((var_9) - (1671800609))))) * (((/* implicit */int) var_14))))));
                        var_18 = var_9;
                        var_19 -= ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */_Bool) var_11);
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) == (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) >= (((/* implicit */int) (unsigned char)147)))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 += ((/* implicit */short) (-(((((/* implicit */int) var_1)) * (((/* implicit */int) var_3))))));
        var_23 &= ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
        var_24 = ((/* implicit */short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_26 = ((var_6) != (((/* implicit */long long int) ((((/* implicit */int) var_1)) % (var_9)))));
                        var_27 &= ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)34038)));
                    }
                    var_28 = ((/* implicit */unsigned char) ((((999727898) & (((/* implicit */int) (short)-7688)))) & ((+(((/* implicit */int) var_14))))));
                }
            } 
        } 
    }
}
