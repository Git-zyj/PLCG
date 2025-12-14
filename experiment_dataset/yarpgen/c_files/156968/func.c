/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156968
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max(((unsigned char)142), (((/* implicit */unsigned char) (signed char)-117))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) - ((+(max((var_16), (var_6)))))));
                                arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((549755813887ULL) | (var_13)))))) != (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | (var_8))))))))));
                    var_22 *= ((((/* implicit */_Bool) min((var_17), ((unsigned short)189)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65346))) : (((((/* implicit */_Bool) min((849194510U), (((/* implicit */unsigned int) (unsigned char)21))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) (signed char)117)))))) : (arr_2 [i_2]))));
                    var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((((/* implicit */int) var_17)) << (((((/* implicit */int) (unsigned char)218)) - (202)))))))), (var_11)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max(((+(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)65346))))))) : (((var_14) << (((((/* implicit */int) var_7)) - (33220)))))));
}
