/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173296
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [4LL] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_16)))));
                    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-23371)))))));
                    var_19 = ((/* implicit */long long int) ((unsigned long long int) var_7));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned short)3447))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_2)))) ? (max((((/* implicit */unsigned int) (unsigned short)3450)), (8160U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)6144)))) * (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)4991)), (-615322237)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned short)16384))))) : ((~(406122660)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                arr_13 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 8855068976848979273LL))));
                arr_14 [i_4] [i_4] = (~(var_5));
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 9223372036854775807LL)))));
                arr_15 [i_3] [i_4] = min((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 8602907025266310951LL)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)62086))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-2332)) || (((/* implicit */_Bool) 9223372036854775807ULL))))))));
                arr_16 [i_4] = ((/* implicit */int) min((max((var_5), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)29374)), ((unsigned short)62089))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (~((+(1579174858U)))));
}
