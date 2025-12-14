/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165519
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned char) var_0)))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (short)13996)) < (((/* implicit */int) var_8))))) < ((+(var_17))))) ? (var_17) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (min((((/* implicit */int) var_0)), (503316480))))))))));
    var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (arr_0 [i_0 + 2])));
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41116)))) : ((-(((/* implicit */int) var_0))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((var_15) < (((/* implicit */int) ((signed char) arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((4294443008U), (((/* implicit */unsigned int) (+(arr_4 [i_1]))))))) ? (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)235)))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (arr_5 [i_1] [0]))))))) : (max((((((/* implicit */_Bool) (unsigned short)896)) ? (arr_4 [i_1]) : (var_3))), (((/* implicit */int) ((arr_4 [i_1]) < (((/* implicit */int) (_Bool)1)))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((unsigned long long int) (!(var_0)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) < (((/* implicit */int) ((((/* implicit */int) var_4)) < (arr_4 [i_1])))))))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (unsigned short)33462))));
            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (arr_9 [i_1])))))))), ((unsigned short)33450)));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min(((unsigned short)62787), (((/* implicit */unsigned short) (signed char)75)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_16)))))))) ? (((/* implicit */unsigned int) ((int) 2138940169170203985ULL))) : (arr_7 [(signed char)0] [(signed char)0] [i_1]))))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 14; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)53688)), (((long long int) ((((/* implicit */int) arr_12 [i_1] [i_5])) < (((/* implicit */int) var_8))))))))));
                        var_29 = ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_15)) : (arr_11 [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-77)))))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_4 - 1])), (max((((/* implicit */unsigned long long int) (signed char)61)), (arr_16 [i_1] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */short) var_10)), (var_11)))))));
                        var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), ((~(arr_18 [i_1] [i_1] [i_1] [i_1] [i_5])))))), (0U)));
                        arr_19 [i_1] [i_3] [i_4] [i_1] [i_5] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) var_11)), (2770075337U)))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((2705365132U) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (min((arr_12 [i_1] [i_3]), (arr_12 [i_1] [i_3])))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_32 = ((/* implicit */long long int) ((signed char) arr_11 [i_6]));
        var_33 += ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_14)));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (-(arr_11 [i_6]))))));
    }
}
