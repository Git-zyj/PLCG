/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164549
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
    var_10 = ((/* implicit */int) (unsigned short)8064);
    var_11 *= ((/* implicit */_Bool) var_8);
    var_12 += ((/* implicit */int) ((_Bool) var_8));
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8064)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -2258025044895691055LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_0 - 1])), (var_2)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((((int) (_Bool)1)) >= (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [8] [6] [8]))) : (var_0)));
                        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7780253302100672503ULL), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0] [(unsigned char)2]))))) ? (((/* implicit */unsigned int) 1416220688)) : ((-(16U)))));
                    }
                } 
            } 
        } 
        var_18 = ((int) (+(var_9)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) 1089217466U)) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_6] [i_0 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_7] [i_7] [i_0 - 1] [0LL]))))));
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8054)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6236802009976343004LL)));
                            var_21 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5 + 3]))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */unsigned int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_4] [i_5 + 1] [i_0 - 1])))));
            }
            var_23 = ((/* implicit */int) ((arr_17 [i_0 - 1] [i_0 - 1]) % (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))));
            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)54077))));
        }
    }
}
