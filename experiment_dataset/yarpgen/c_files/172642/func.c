/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172642
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((2585089172766147249ULL) + (15861654900943404366ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_8)))))) != (2585089172766147274ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_1 + 2] [i_3 - 3]) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19639))) : (4004280823340818338ULL)))))) ? (((int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), (var_4))))));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1]);
                    }
                } 
            } 
        } 
    }
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */long long int) max((var_12), (6602046574277729129LL)));
    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (((min((var_5), (var_4))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (var_1) : (-6602046574277729129LL)))))));
}
