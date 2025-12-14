/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103493
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
    var_10 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)30))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_0] [i_0]), ((!(((/* implicit */_Bool) (signed char)-30))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(886768506970602539LL))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */int) var_2);
                    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 827863744)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (signed char)-3)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (signed char)50)))));
        arr_15 [i_3] = ((/* implicit */short) max((((unsigned int) max((((/* implicit */long long int) arr_13 [i_3])), (arr_12 [i_3])))), (((/* implicit */unsigned int) ((_Bool) max((var_2), (((/* implicit */unsigned int) var_9))))))));
        arr_16 [i_3] [9] = ((/* implicit */short) ((unsigned char) arr_11 [i_3]));
        arr_17 [i_3] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (unsigned short)59508)) : (((/* implicit */int) min((((/* implicit */short) (signed char)82)), (arr_11 [i_3]))))))), (arr_12 [(_Bool)1])));
    }
    var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5720684661895172713LL))))) : ((-(((/* implicit */int) var_9)))))));
    var_14 &= ((/* implicit */unsigned short) (+(max((var_4), (((/* implicit */unsigned long long int) var_1))))));
    var_15 = ((/* implicit */unsigned char) var_5);
}
