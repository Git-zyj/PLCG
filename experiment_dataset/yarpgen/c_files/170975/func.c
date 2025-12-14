/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170975
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 33554431))));
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) 134287441);
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_18 = ((/* implicit */int) (_Bool)1);
        arr_7 [i_1] [4U] = ((/* implicit */unsigned int) arr_5 [i_1]);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((arr_3 [i_1 - 1]), ((-(arr_3 [i_1 + 1]))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) (unsigned char)242);
                    arr_14 [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((3612080087732678539LL), (((/* implicit */long long int) 269799155)))))))));
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                    var_21 = 262144;
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (unsigned char)242)), (0LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
    }
    var_23 = ((/* implicit */unsigned short) (unsigned char)250);
    var_24 = ((/* implicit */short) ((((long long int) (unsigned char)173)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7ULL))))))));
}
