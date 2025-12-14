/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150096
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
    var_16 = ((/* implicit */long long int) 888064977);
    var_17 = ((/* implicit */short) var_7);
    var_18 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_15)), (var_3)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((max((((int) arr_1 [i_0] [i_0])), (max((arr_0 [7U] [i_0]), (-888064978))))) * (((/* implicit */int) (!(arr_1 [6LL] [i_0]))))));
        var_19 += ((/* implicit */short) (((((((+((-2147483647 - 1)))) + (2147483647))) + (2147483647))) << (((max((((/* implicit */int) (!(((/* implicit */_Bool) 888064977))))), (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))) - (32627)))));
        arr_3 [4] |= ((/* implicit */short) ((((int) (+(arr_0 [i_0] [8])))) << (((((((/* implicit */int) var_10)) + (51))) - (18)))));
        var_20 = ((/* implicit */long long int) var_12);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) var_9);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (2644732673U)))) && (((/* implicit */_Bool) 12ULL)))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) arr_8 [i_1]);
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_1])), (((((arr_4 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [3]))))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1] [9LL])))))))));
                        var_24 = var_14;
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */int) ((((arr_4 [i_1]) > (((/* implicit */unsigned long long int) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])))))) : (max((((/* implicit */long long int) (_Bool)1)), (-8903943555771892987LL)))));
        var_25 = ((/* implicit */int) (_Bool)1);
    }
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(var_13))))));
}
