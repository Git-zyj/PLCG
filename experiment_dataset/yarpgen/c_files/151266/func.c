/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151266
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
    var_10 &= ((/* implicit */_Bool) var_1);
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)448))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)56334)) / (((/* implicit */int) (unsigned short)56334))))));
        var_12 = (!((!(((/* implicit */_Bool) arr_0 [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */signed char) (unsigned short)56334);
            arr_7 [i_0] = ((/* implicit */unsigned short) (~(((arr_6 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))));
            var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63936)))) ^ (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */signed char) max((max(((_Bool)1), ((_Bool)1))), ((_Bool)1)));
                        var_16 = ((unsigned short) max(((unsigned short)9202), (((/* implicit */unsigned short) arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_3] [i_4] [i_0] [i_2 - 1])) / (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1)))))) / (((((/* implicit */int) (unsigned short)56334)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_18 = (!(max((arr_13 [i_0] [i_0] [i_2 - 1] [i_4]), (arr_13 [i_0] [i_0] [i_2 - 1] [i_3]))));
                        arr_16 [i_0] [i_0] = var_2;
                    }
                } 
            } 
            var_19 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)60515)) ^ (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_0))))))) / ((-((-(((/* implicit */int) var_4))))))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
            var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)56333)) ? (((/* implicit */int) (unsigned short)32719)) : (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (_Bool)1))))))));
        }
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)56333)))))));
        arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) / (max((((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0]), (var_0)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)5021))))))));
    }
}
