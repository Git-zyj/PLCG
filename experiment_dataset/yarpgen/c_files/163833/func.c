/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163833
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)49152)) >= (arr_1 [i_0])))))) - ((((~(((/* implicit */int) (short)-26742)))) | ((~(((/* implicit */int) var_9))))))));
        arr_4 [i_0 - 1] [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)0))))) && (((((/* implicit */_Bool) (unsigned short)1008)) && (((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 1])))))))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 8; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_11 [i_1 + 3] = ((/* implicit */_Bool) (+((+(257653146)))));
                    arr_12 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (signed char)-2)))))))));
                    var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3712056428U)) || (((/* implicit */_Bool) arr_2 [i_3] [i_1 - 1])))))) / ((~(67108832U))))) << ((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)22121)) <= (16380))))))));
                    var_16 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 243981569)))))))));
                    var_17 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440))) < (2898633915U)))) << (((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_1 - 1]))))) / ((~(((/* implicit */int) var_6)))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */int) (!((((~(134213632))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        var_18 = ((/* implicit */unsigned int) (~((-((+(((/* implicit */int) (unsigned char)1))))))));
        var_19 = ((/* implicit */signed char) (+((~((+(((/* implicit */int) arr_8 [i_1 + 2] [i_1]))))))));
    }
    var_20 = (!(((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-60)) ^ (((/* implicit */int) (_Bool)1))))))));
}
