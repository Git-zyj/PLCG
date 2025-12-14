/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184327
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
    var_19 = ((/* implicit */unsigned char) min(((+(((-2007070475627584889LL) + (((/* implicit */long long int) 284436475U)))))), (((/* implicit */long long int) ((short) var_8)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) var_2);
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1] [i_2] [i_1 - 2]), (arr_8 [i_0 + 2] [i_1] [(short)1] [i_2])))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_21 &= ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned int) arr_13 [i_3]);
        arr_17 [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_17))));
        var_23 = ((/* implicit */signed char) min((arr_15 [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (_Bool)1))))) + (((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (_Bool)1)), (arr_14 [i_3]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
        var_25 *= ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 4294967295U)))))))));
    }
    var_26 -= ((/* implicit */short) var_3);
}
