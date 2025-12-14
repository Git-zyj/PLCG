/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134862
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
    var_20 = ((/* implicit */short) ((int) min(((+(var_0))), ((-(var_16))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_21 = arr_1 [6] [i_0];
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) (+((-(arr_2 [i_1] [i_1])))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)84))))))) ? (((arr_3 [i_1]) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_13)))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (8009))))) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        arr_4 [i_1] [(unsigned char)0] &= ((/* implicit */_Bool) 1ULL);
        var_25 -= ((/* implicit */_Bool) ((var_9) & ((~(((((/* implicit */int) arr_3 [i_1])) >> (((var_7) + (1073307104)))))))));
    }
    for (int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        var_26 = ((/* implicit */_Bool) var_18);
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                for (unsigned short i_5 = 4; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6))));
                        arr_15 [i_2] [i_3] [i_2] = min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 - 1]))))), (arr_14 [i_3] [i_3] [3U]));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_18 [16LL] = ((/* implicit */unsigned short) max((max((arr_16 [i_6]), (arr_16 [i_6]))), (((/* implicit */short) (_Bool)0))));
        arr_19 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248)))))));
        arr_20 [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 9841047421167325026ULL)) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (arr_17 [i_6] [i_6]) : (((/* implicit */unsigned long long int) -7254636623993862305LL)))) : (arr_17 [9] [i_6]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))))));
    }
}
