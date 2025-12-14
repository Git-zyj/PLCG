/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126516
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 += ((((/* implicit */_Bool) max((((short) arr_0 [(_Bool)1])), (((/* implicit */short) arr_0 [i_1 + 2]))))) ? ((~(((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)16])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (var_12)))) : (((var_19) ? (arr_3 [i_1 + 2] [i_1 + 2]) : (var_13)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [0LL] [i_2] [i_2 + 1] [i_1])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_1]))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max(((signed char)67), (((/* implicit */signed char) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)));
    var_24 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (var_3))));
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_12)), (arr_2 [i_4]))), (((/* implicit */unsigned int) ((int) arr_2 [i_4])))));
        arr_12 [i_4] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (unsigned char)253)))))) - ((+((+(((/* implicit */int) var_9))))))));
        var_26 = ((/* implicit */short) var_0);
    }
    var_27 = ((/* implicit */unsigned short) var_10);
}
