/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152559
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (min((arr_3 [(_Bool)1] [i_0] [i_1]), (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (6)))))) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) arr_2 [(short)18])))))))))));
            arr_6 [i_0] = ((/* implicit */signed char) (_Bool)1);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((signed char) var_13))) : ((~(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */signed char) arr_9 [i_0])))))))));
        }
        arr_11 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) var_11))), (((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((_Bool) arr_8 [i_0])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((short) arr_8 [i_3]))) ? (((/* implicit */int) min(((short)3009), (arr_4 [i_3] [i_3] [i_3])))) : (((/* implicit */int) ((_Bool) arr_5 [i_3] [i_3]))))), (((/* implicit */int) arr_1 [(short)16]))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_3]))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6ULL] [i_3] [i_3])) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) arr_1 [4U])))) : (var_9))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_23 [i_3] [i_5] [i_5] [10ULL] = ((/* implicit */short) min((var_9), (min((((arr_5 [i_3] [i_5]) ? (((/* implicit */int) arr_15 [i_3] [i_5])) : (((/* implicit */int) arr_5 [i_4] [i_3])))), (((/* implicit */int) arr_12 [i_3]))))));
                        arr_24 [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_6] [i_4])) * (((/* implicit */int) arr_17 [i_4] [i_5])))) <= (((((/* implicit */int) arr_16 [i_3] [i_3])) & (((/* implicit */int) arr_17 [i_3] [i_6]))))));
                        var_19 = arr_5 [i_4] [i_5];
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3013)) ? (1279705438) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)3032))))) ? (((/* implicit */int) ((var_4) > (var_13)))) : (((arr_18 [i_3]) ? (((/* implicit */int) (short)3009)) : (((/* implicit */int) (short)-12348))))))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8] [(_Bool)1] [i_9]))) : (((((/* implicit */_Bool) arr_31 [i_8])) ? (arr_31 [i_8]) : (arr_31 [i_8])))));
                    var_22 ^= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)21598))));
    }
    var_24 = var_1;
    var_25 = ((/* implicit */signed char) var_11);
}
