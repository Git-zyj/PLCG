/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133704
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [2U] = ((((/* implicit */int) (short)28424)) < (var_1));
                var_13 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_2)))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_1] [8ULL]) : (arr_2 [(unsigned char)4] [i_1]))) : (min((83235325), (((/* implicit */int) (unsigned char)201))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (min((10027307902609674339ULL), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)201)), (arr_4 [i_1])))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    var_16 += ((/* implicit */short) max(((unsigned char)61), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) (unsigned char)127)))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) ((signed char) (unsigned char)251))) : (var_1)))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), ((-(var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [(signed char)5])) ? (var_0) : (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) arr_9 [i_2] [i_4])))) : (((/* implicit */int) ((unsigned char) var_6))))))));
                    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)110))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -2038210441)) : (4071374100251264963ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_3] [i_4])), (4294967295U))))));
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((_Bool) (~(arr_7 [(short)9] [(short)9]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)230)) / ((-2147483647 - 1))))) : (131072U)))) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */int) (signed char)127)) / (2147483647)))));
    var_20 += ((/* implicit */unsigned int) (~(816600228)));
}
