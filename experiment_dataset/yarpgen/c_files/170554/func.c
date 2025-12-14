/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170554
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) var_7);
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)28274)), (2985613941905388243LL)));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_6)))))));
                var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_5 [i_1])))));
            }
        } 
    } 
    var_16 = ((((/* implicit */int) var_0)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */long long int) 2147483630)) : (2522300384899506169LL)))) ? (((/* implicit */int) var_10)) : (var_14))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) min((2522300384899506166LL), (((/* implicit */long long int) min((((/* implicit */short) arr_1 [i_2 - 1])), (var_13))))));
                arr_16 [i_2] = (!(((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) min((((/* implicit */int) var_2)), (var_14))))))));
                arr_17 [i_2] [i_3] [i_3] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) < (arr_11 [i_2 + 4] [i_3]))) ? ((~(arr_12 [i_2] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2] [i_3]))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((-2147483644) > (((/* implicit */int) arr_13 [i_2] [i_2]))))) == ((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_2] [i_3])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(-6998160902373385966LL)));
}
