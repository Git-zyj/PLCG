/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133155
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
    var_12 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? (var_2) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    var_13 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3585042927U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] &= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) min((742654346158448873LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) >> (((8466721241750489423ULL) - (8466721241750489418ULL)))))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-15023)), (4636414935294183023ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1 - 1]) <= (arr_1 [i_1 - 1]))))) : (min((9100590751977154262ULL), (9346153321732397353ULL))))))));
        var_15 ^= ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (13492425982481631242ULL))))));
        var_16 = ((/* implicit */signed char) ((_Bool) (-(((((/* implicit */_Bool) (short)-15023)) ? (((/* implicit */int) var_5)) : (var_11))))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                {
                    var_17 |= ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)18448)))) ? (2030898511) : ((-(((/* implicit */int) (short)19771))))))) <= (arr_6 [i_2 + 3]));
                    var_18 += ((/* implicit */_Bool) (~(min((min((2333026437U), (3003601876U))), (((/* implicit */unsigned int) (unsigned short)65532))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1291365420U)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned char)98))))) == (((unsigned int) arr_10 [i_4 + 1] [i_4] [i_4])))))));
                }
            } 
        } 
    } 
}
