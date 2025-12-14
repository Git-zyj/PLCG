/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186494
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)240))) - (8646911284551352320ULL)));
        var_17 = ((/* implicit */signed char) (+(2147483647)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((-2147483615) + (2147483647))) << (((2147483614) - (2147483614)))));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2147483601))));
                        arr_14 [i_1] [i_1 - 2] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)15249))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_8)))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned long long int) arr_15 [i_4 + 3])))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 18; i_5 += 4) 
    {
        var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) 133955584LL)))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_18 [i_5]))))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)4]))))))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((long long int) var_11)))));
    }
    for (long long int i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) (+(min((-2147483602), (((/* implicit */int) (signed char)96))))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) max(((signed char)96), (var_16)))), (min((((/* implicit */unsigned int) (short)31792)), (3812461103U))))))))));
    }
    var_27 = ((/* implicit */unsigned char) max((4109468518U), (((/* implicit */unsigned int) (unsigned char)89))));
}
