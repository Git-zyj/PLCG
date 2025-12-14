/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142211
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned short)17795)))))))));
    var_17 = ((/* implicit */signed char) (unsigned short)127);
    var_18 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)47758)))))) * (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)47758)) / (((/* implicit */int) (unsigned short)17791))))))));
            arr_8 [i_0] [(unsigned char)6] [i_1] = ((/* implicit */_Bool) (unsigned short)17819);
        }
        for (unsigned char i_2 = 4; i_2 < 10; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_2])) - (((/* implicit */int) max((((/* implicit */signed char) arr_10 [i_2 - 3] [i_2 - 1] [i_2 - 2])), (var_11))))));
            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)47725)) >> (((arr_1 [i_0] [7U]) - (2553992018178212957LL))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2330)) | (((/* implicit */int) (unsigned short)17783))))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) arr_10 [i_0] [(unsigned char)0] [i_0])), (arr_9 [i_2])))))));
        }
        for (unsigned char i_3 = 4; i_3 < 10; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */int) max((((/* implicit */long long int) max(((unsigned short)47756), ((unsigned short)47763)))), (min((((((/* implicit */long long int) ((/* implicit */int) var_14))) + (arr_1 [i_0] [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1464)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))))))));
            var_21 = ((/* implicit */long long int) var_13);
            var_22 = ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (unsigned short)17790)) : (((/* implicit */int) (unsigned char)7)));
        }
        /* vectorizable */
        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 2])) : ((-(((/* implicit */int) var_12))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0] [i_5] [i_4 - 3])) - (((/* implicit */int) var_0))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_4] [i_4] [(unsigned char)9])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)66)))))));
                        }
                    } 
                } 
            } 
            arr_25 [i_0] [i_4] = ((/* implicit */unsigned int) (-(arr_24 [i_0] [(short)4] [i_4] [i_4 + 1] [i_4 - 1] [i_4] [(unsigned short)8])));
        }
        arr_26 [i_0] [9] = ((/* implicit */unsigned char) ((long long int) var_13));
        var_26 |= ((/* implicit */unsigned char) arr_14 [i_0] [i_0]);
    }
}
