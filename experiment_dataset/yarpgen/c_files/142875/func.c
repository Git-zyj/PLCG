/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142875
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
    var_11 -= ((/* implicit */unsigned char) ((short) -3502430137101980938LL));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)64)))), (((unsigned int) var_5))))), (max((min((((/* implicit */long long int) var_10)), (var_8))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1535)) >> (((((/* implicit */int) var_7)) + (5257)))))))))))));
        var_14 *= ((/* implicit */long long int) var_2);
        var_15 -= ((/* implicit */_Bool) min((arr_0 [20]), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)18]))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (short)(-32767 - 1));
        var_16 ^= ((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_0 [2]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [(unsigned short)16]))))))));
        var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1 - 3] [i_1])))), (((/* implicit */int) arr_3 [i_1 - 2] [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_11 [0ULL] |= ((/* implicit */long long int) var_2);
                    var_18 = ((((/* implicit */int) (signed char)-106)) != (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    }
    var_19 = var_9;
}
