/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130404
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
    var_11 = ((/* implicit */short) var_7);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) & (max((((((/* implicit */_Bool) 2253595779U)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0] [i_0]))), ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0] [i_0])))))));
        var_13 = ((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */int) (unsigned short)41841))))) == (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (short)16612))))) | (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)20931)) || (((/* implicit */_Bool) (short)-1))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) min(((short)-16612), (arr_1 [i_0]))))))) ? (((/* implicit */int) (_Bool)1)) : (min((min((arr_4 [i_0] [i_1] [i_0]), (arr_0 [i_0] [i_1]))), (((((/* implicit */int) (unsigned short)41841)) | (arr_4 [i_0] [i_1] [i_0])))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_1] [i_1] [i_0]))))))), (min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) ((arr_4 [i_0] [i_1] [i_0]) != (((/* implicit */int) arr_1 [i_1])))))))));
        }
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_2])) == (((/* implicit */int) arr_1 [i_2])))))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) / ((-(((/* implicit */int) arr_8 [i_2])))))))));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_2] [i_2])) - (((/* implicit */int) arr_3 [i_2] [i_2])))) - (((/* implicit */int) min((arr_3 [i_2] [i_2]), (arr_3 [i_2] [i_2]))))));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1987909047U)) || (((/* implicit */_Bool) -1272442898))));
        var_17 = ((/* implicit */short) (_Bool)1);
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_7 [i_3]) | (((/* implicit */int) arr_8 [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)57344))))) : (((1497966069U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3]))))))));
    }
    var_18 -= ((/* implicit */short) (-(((/* implicit */int) min((((((/* implicit */_Bool) (signed char)114)) || (((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)29)))))))));
    var_19 = ((/* implicit */short) ((((((/* implicit */int) ((var_2) >= (((/* implicit */int) var_9))))) * (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5))))))) % (((/* implicit */int) (unsigned char)29))));
}
