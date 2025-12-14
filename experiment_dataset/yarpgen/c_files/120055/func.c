/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120055
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
    var_12 = ((/* implicit */unsigned short) (+((((~(((/* implicit */int) var_4)))) ^ ((-(((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((+((-(((/* implicit */int) var_3)))))) : ((-(((/* implicit */int) (short)7936))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_10)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6))), ((~(18446744073709551615ULL))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) / (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))))));
    }
    var_14 += ((/* implicit */unsigned short) (~(var_7)));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_2)) >> (((/* implicit */int) var_5)))))) : (((((/* implicit */int) min((((/* implicit */short) var_2)), (var_11)))) * ((~(((/* implicit */int) var_9))))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(var_5))))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) (+(18446744073709551605ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)235))))));
            }
        } 
    } 
}
