/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163081
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((_Bool) (unsigned char)14))) : ((-2147483647 - 1))))) && (((/* implicit */_Bool) (signed char)-1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) >= (((/* implicit */int) (unsigned char)216))));
                                var_22 = ((/* implicit */int) ((((((/* implicit */int) arr_6 [i_3 - 3] [i_4] [i_3 - 3] [i_4 + 1] [i_4 + 1])) | ((~(((/* implicit */int) (unsigned char)52)))))) > (((((/* implicit */_Bool) max(((unsigned char)231), (((/* implicit */unsigned char) (signed char)-3))))) ? (((((/* implicit */_Bool) (unsigned short)54184)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)11363)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 + 2]))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)208))))) ? (((unsigned long long int) (+(arr_0 [i_0] [i_0 + 2])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 18797029972821647ULL))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 307629399)) && (((/* implicit */_Bool) var_18))))), (((((/* implicit */_Bool) ((unsigned short) (unsigned char)248))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) ^ (var_14)))))));
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((var_1) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)18))))))))))));
}
