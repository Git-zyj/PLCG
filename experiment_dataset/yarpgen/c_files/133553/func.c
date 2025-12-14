/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133553
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((min(((+(((/* implicit */int) arr_1 [i_2])))), ((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))), (((/* implicit */int) ((0) == (var_6))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) max((var_10), (((/* implicit */unsigned short) arr_0 [i_2])))))) ? (((/* implicit */int) (unsigned short)20692)) : (((/* implicit */int) min(((unsigned short)51318), (((/* implicit */unsigned short) arr_7 [i_0])))))));
                    arr_10 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((var_3) > (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2048) : (-2049)))) ? (((-7201237812751597433LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) (unsigned short)16792)), (-7201237812751597433LL))))) | (((/* implicit */long long int) -279956288)));
                }
            } 
        } 
    } 
    var_15 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */long long int) -279956276)) : (-9LL)))) ? (((/* implicit */int) (unsigned char)224)) : (-2)))) ? ((+((+(2147483647))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2385502935U)) ? (-2049) : (((/* implicit */int) (unsigned char)248)))))))));
    var_16 += ((/* implicit */signed char) 1268860067U);
    var_17 ^= ((/* implicit */int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (unsigned char)176))))) ? (max((((/* implicit */long long int) 2698065835U)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */long long int) (+(((/* implicit */int) (short)31108)))))));
}
