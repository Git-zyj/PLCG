/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112312
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(_Bool)1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) 3755721939U)) ? (539245357U) : (3755721959U))) : ((~((~(var_1)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_1] [i_1] [(short)11] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) 461312000)) : (var_15))) : (arr_1 [i_1])))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((644395238U) == (arr_7 [i_0] [i_0] [(unsigned char)10] [i_2])))))))));
                    arr_9 [i_1] [i_1] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3755721933U)) ? (arr_6 [(unsigned short)2] [i_1] [i_1] [i_0]) : (3755721939U)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_0] [i_1] [i_0]) : (arr_6 [3] [3] [i_1] [i_0]))) : (((arr_6 [(unsigned short)14] [i_1] [i_1] [10]) << (((var_6) - (1999279565U)))))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 22879203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : (15U)))) ? ((~(arr_6 [(unsigned char)12] [i_1] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [10U] [i_1] [i_1] [i_1]))))))))));
                    arr_11 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12347)) ? (var_15) : (arr_7 [i_2] [i_1] [i_0] [i_0]))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_0);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) var_1))))) > (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)53189)) : (var_0))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
    var_19 = ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)2))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4160749568U))))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (4294967280U))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_0))));
}
