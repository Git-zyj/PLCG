/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119055
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max(((((-2147483647 - 1)) | (((/* implicit */int) (short)7)))), (((((/* implicit */_Bool) (short)2032)) ? (2147483647) : (((/* implicit */int) (short)8191))))))) <= (var_4)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned char) (+(((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [4U] [i_0])))))));
        var_13 = ((/* implicit */unsigned int) (signed char)-14);
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((int) var_3));
                arr_8 [10] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-30326)), (8323072ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(3069539493U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1820996733)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (15919916634018496743ULL)))))))) : (((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (8323080ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36095))))) : (((/* implicit */int) var_0))));
}
