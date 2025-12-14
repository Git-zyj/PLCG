/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104352
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
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (min((((/* implicit */int) (unsigned short)0)), (max((((/* implicit */int) (!(((/* implicit */_Bool) 134216704))))), (((((/* implicit */_Bool) (unsigned short)36393)) ? (((/* implicit */int) (unsigned short)0)) : (840335707)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((max((-134216693), (-134216679))), (-134216704))) - (134216706)));
                arr_6 [(unsigned short)10] [i_1] [2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned short)19160)) - (19160)))))) ? (max((((((/* implicit */_Bool) (unsigned short)9552)) ? (1345521773) : (-541914563))), (664463622))) : (((max((1048560), (((/* implicit */int) (unsigned short)34676)))) + (-491835450)))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) 4064)) ? (-491835450) : (-664463625))) >= ((-(((/* implicit */int) (unsigned short)2386))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39535)) ? (491835449) : (268160524)))) ? (max((1048573), (((/* implicit */int) (unsigned short)35048)))) : (((((/* implicit */_Bool) -1048574)) ? (((/* implicit */int) (unsigned short)60834)) : (((/* implicit */int) (unsigned short)16456))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(-134216704))), (((((/* implicit */_Bool) 2)) ? (664463621) : (1048560)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34779))))) : (((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)65521)))) ? ((+(0))) : (((1792005632) | (1048575)))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 6; i_3 += 1) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) min(((+(max((((/* implicit */int) (unsigned short)2047)), (2147483647))))), ((+(((((/* implicit */int) (unsigned short)60836)) + ((-2147483647 - 1))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11088))))) ? (((-1) | (((/* implicit */int) (unsigned short)49421)))) : ((+(1048575)))))) && (((/* implicit */_Bool) (-(max((2147483647), (491835450))))))));
                arr_12 [i_2] [(unsigned short)4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)22240))));
            }
        } 
    } 
}
