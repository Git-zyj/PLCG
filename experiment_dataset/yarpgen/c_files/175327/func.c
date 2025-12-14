/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175327
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
    var_15 = ((/* implicit */long long int) min((var_15), (((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)78)), ((unsigned char)181))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-4226529846172463506LL))))) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned short) (signed char)6);
                    var_17 = ((/* implicit */unsigned char) (~(var_8)));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((min((arr_0 [i_0]), (arr_0 [i_0]))) / (((((/* implicit */_Bool) 2719291265U)) ? (((((/* implicit */_Bool) (unsigned short)27741)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_3 [i_0])))) : ((-(((/* implicit */int) (short)20318))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            {
                arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1959665138660114786ULL)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_6 [i_3] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) + (2034450762U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - ((+(max((4233565816U), (((/* implicit */unsigned int) (signed char)-118))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_4 - 3]) ^ (arr_1 [i_4 - 3])))) ? (((arr_1 [i_4 + 2]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)108))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-32751))) & (arr_1 [i_4 - 2])))));
            }
        } 
    } 
}
