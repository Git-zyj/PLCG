/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147937
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
    var_13 = (-(((var_11) ? ((-(((/* implicit */int) (unsigned short)55909)))) : (((/* implicit */int) ((var_0) != (var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (unsigned short)9626);
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 18446744073709551608ULL)))))) : (3501522833U)));
                            arr_10 [(_Bool)1] [i_1] |= ((/* implicit */signed char) ((((min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65504)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), ((-(((/* implicit */int) (unsigned short)9627)))))) + (2147483647))) << ((((-(arr_9 [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 1]))) - (276456438)))));
                            var_15 = ((/* implicit */unsigned int) (((!(((_Bool) (short)-30548)))) ? (((/* implicit */int) (!(((arr_7 [(signed char)18] [i_1] [i_0]) || (((/* implicit */_Bool) -2301527700153642517LL))))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [i_3])) ? (arr_9 [i_0] [i_1] [i_2 - 2] [i_3]) : (((/* implicit */int) (unsigned short)9627))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((signed char) var_9));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((9223372036854775802LL) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (var_3) : ((~(9223372036854775807LL)))))) ? ((+(max((var_3), (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
