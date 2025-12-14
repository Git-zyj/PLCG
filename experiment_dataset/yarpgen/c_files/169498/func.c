/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169498
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
    var_17 = ((unsigned int) ((unsigned short) (~(((/* implicit */int) (unsigned short)65522)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned int) ((unsigned short) var_5))))));
                        arr_11 [i_1] = ((/* implicit */_Bool) ((unsigned int) (~(((unsigned int) 1653330167U)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-(arr_7 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)26)))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((_Bool) var_12))) : (((int) 0U))))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((var_15) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_4]))) : (((int) 4294967291U))));
        var_20 = ((/* implicit */int) (~((+(4294967295U)))));
    }
    var_21 = (+(((int) 529838307U)));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_3)))) ? (((unsigned int) (-(((/* implicit */int) (unsigned short)3198))))) : (((unsigned int) (unsigned short)3198))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65522)))))));
}
