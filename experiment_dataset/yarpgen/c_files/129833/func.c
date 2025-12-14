/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129833
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_16 += ((/* implicit */unsigned short) (+((+(max((var_8), (var_2)))))));
            var_17 = ((unsigned int) var_8);
        }
        var_18 += ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49596))) + (266896811U))), (((/* implicit */unsigned int) (unsigned short)30825)))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_19 *= (unsigned short)5543;
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_4)), (var_15))))) != (((/* implicit */int) ((unsigned short) min((3847855741U), (3778577117U)))))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_2] [i_2] [i_2]);
                        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)41473)), (1564898658U)))) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_2] [i_4])) : (((/* implicit */int) (unsigned short)40821)))))));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_8)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_6 = 3; i_6 < 15; i_6 += 4) 
    {
        var_24 = (+((-(((unsigned int) arr_1 [i_6] [i_6])))));
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)30838));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) var_6);
        var_26 = ((/* implicit */unsigned short) (~(((unsigned int) ((((/* implicit */_Bool) arr_21 [(unsigned short)1])) ? (var_12) : (var_12))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 4) 
        {
            var_27 = ((unsigned int) arr_22 [i_8]);
            var_28 = ((unsigned int) 1728651417U);
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_28 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48158))) ^ (3428072799U))))));
            var_29 &= ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21199))) / (4294967295U))), (((/* implicit */unsigned int) (unsigned short)15940))));
        }
    }
}
