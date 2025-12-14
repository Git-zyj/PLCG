/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104502
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [5U] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) (signed char)64)), (var_11))))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) (!((_Bool)1)))))))));
        var_14 += ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_6))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [11ULL]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (min((max((((/* implicit */int) (unsigned short)15538)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)67)))))), (((((/* implicit */int) arr_5 [i_1 + 1] [i_2 + 1])) % (((/* implicit */int) (unsigned char)98))))))));
                    var_16 = ((/* implicit */unsigned short) (signed char)-65);
                    var_17 *= ((/* implicit */unsigned int) (unsigned short)32768);
                    arr_11 [i_0] [(unsigned char)10] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (((var_13) << (((((((/* implicit */unsigned long long int) var_7)) & (var_11))) - (11385417394051637257ULL)))))));
    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) -358685395)) / (68717379584LL)));
}
