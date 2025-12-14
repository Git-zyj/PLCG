/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150407
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
    var_19 = ((/* implicit */int) min(((-(var_14))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) - (((/* implicit */int) (unsigned short)61120)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_1] [i_2] = ((/* implicit */unsigned char) ((short) 2147483637));
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (unsigned short)57620);
                        arr_11 [i_0] [i_0 - 4] [i_1] [i_2] [(unsigned char)15] = ((/* implicit */unsigned short) min(((+(((((/* implicit */int) (unsigned short)57618)) + (((/* implicit */int) (unsigned char)87)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_16)))) != (((((/* implicit */_Bool) var_17)) ? (1424140151U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) var_11);
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) != (2436800828U)))) != (((/* implicit */int) (unsigned short)57618))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [20])) != (((/* implicit */int) arr_6 [i_4] [(_Bool)0] [6U] [i_4]))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_5 [i_4] [i_4] [i_4] [i_4]) : (((int) var_2)))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)32))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) - (var_7)))))));
        arr_14 [(signed char)6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_16))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((((/* implicit */unsigned int) min((1589967750), (((/* implicit */int) (_Bool)1))))) - (var_14))), (((/* implicit */unsigned int) 2038784171)))))));
}
