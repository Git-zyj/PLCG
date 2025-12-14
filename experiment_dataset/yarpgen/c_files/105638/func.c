/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105638
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) (-(((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) var_0))))))))))))));
    var_11 += ((/* implicit */_Bool) min((var_5), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), ((~(var_5)))))));
    var_12 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_6)) / (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)224))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned short) ((unsigned int) arr_9 [i_2] [i_0 + 2]));
                        var_15 += ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (var_4)));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        var_16 *= ((/* implicit */unsigned long long int) (~((((!((_Bool)1))) ? (((/* implicit */int) max((var_1), (var_6)))) : ((~(((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_10 [i_4]) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_10 [i_4])))) : ((-(((/* implicit */int) var_3))))))), (((min((((/* implicit */long long int) var_4)), (var_2))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_4])))))))))));
    }
}
