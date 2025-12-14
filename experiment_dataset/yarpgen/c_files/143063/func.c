/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143063
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
    var_20 = ((/* implicit */unsigned char) max((max(((((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)129))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned char)123)))))) : ((-(((/* implicit */int) var_14))))));
        var_22 = ((/* implicit */int) var_9);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1556085896)) ? (3738674452U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)171)))))));
        arr_3 [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), ((~(1556085889)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned char)113);
                    arr_10 [i_0] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1050935434U)));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_0])), ((unsigned short)43552)))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) (short)-6795)) : (((/* implicit */int) arr_4 [i_0]))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) var_11)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_7))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) var_18)), (max((var_13), (((/* implicit */short) (_Bool)1))))))) ? (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_18)) - (((/* implicit */int) (unsigned char)125)))))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-6))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_12))))))));
}
