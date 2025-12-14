/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124974
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
    var_20 ^= ((/* implicit */signed char) ((unsigned char) min((((int) (unsigned char)66)), (((/* implicit */int) (unsigned short)65526)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_3 [i_0]))));
                var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 2] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_15))));
            }
            arr_7 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)8128)))))));
            var_23 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 - 1])))));
        }
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                            var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_5] [i_3 + 1] [i_3 - 1] [i_5])) : (((/* implicit */int) ((unsigned char) var_13)))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-10)))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30863)) ? (-4959747193660994670LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9))))))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!((_Bool)1))))));
        }
        arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((var_17) - (15381210534359926783ULL)))));
    }
    for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned int) (((-(((/* implicit */int) ((_Bool) arr_16 [(signed char)8] [(short)10] [i_7] [i_7]))))) != (-2147483629)));
        arr_20 [i_7] = ((/* implicit */unsigned char) arr_0 [i_7]);
        var_30 = ((/* implicit */short) arr_6 [4LL]);
        var_31 += ((/* implicit */unsigned char) max((1540698793U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_7 - 3])))))));
    }
    var_32 = ((/* implicit */_Bool) (~(var_7)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_8 = 3; i_8 < 17; i_8 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) var_2);
        var_34 -= ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned char)175)) : (-24988692));
        arr_23 [i_8] |= ((/* implicit */_Bool) (signed char)127);
    }
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        arr_27 [12LL] |= min((5606814510362684573LL), (((/* implicit */long long int) (unsigned char)66)));
        var_35 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) var_9)), (arr_25 [i_9])))));
    }
}
