/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175091
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)0)), (arr_1 [i_0])))), (arr_0 [(unsigned short)8]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [(signed char)12])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        var_18 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */short) (+(((/* implicit */int) (short)5218))));
                        var_20 = ((/* implicit */signed char) (_Bool)0);
                        arr_14 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_1 - 1])))) ? (arr_0 [i_1 - 1]) : (min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % ((+(((/* implicit */int) var_5))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) (+(max(((~(((/* implicit */int) arr_10 [(unsigned short)10] [(unsigned char)2] [i_1] [i_1])))), (((((/* implicit */int) arr_12 [i_1 + 1] [i_1])) / (((/* implicit */int) var_8))))))));
    }
    var_23 = ((/* implicit */signed char) min((var_2), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned char)119))))))))));
}
