/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143046
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 1] [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (arr_10 [i_3] [i_1] [i_0])));
                            arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((((((((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2 - 1])) + (2147483647))) << (((((/* implicit */int) arr_0 [(signed char)7] [(signed char)7])) - (60))))) << (((max((((/* implicit */unsigned long long int) (_Bool)1)), (12870985412555879548ULL))) - (12870985412555879548ULL))))) : (((/* implicit */int) max((((/* implicit */short) ((arr_6 [i_0] [i_1 + 1] [i_2] [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [10U] [i_1])))))), (((short) var_2)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) + (12870985412555879548ULL))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_13), (arr_20 [i_4] [i_5] [i_6]))))))), ((((~(arr_20 [i_4] [i_4] [i_4]))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((32505856), (((/* implicit */int) (unsigned char)50))));
                                arr_28 [i_4] [i_5] [i_5] [i_4] [i_4] [16] = ((/* implicit */_Bool) arr_26 [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)47011)))) > (((/* implicit */int) ((_Bool) (unsigned short)22935)))))), ((~(min((((/* implicit */unsigned long long int) var_16)), (12870985412555879575ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) var_12);
}
