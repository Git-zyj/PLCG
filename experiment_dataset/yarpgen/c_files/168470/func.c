/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168470
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((~(var_8))) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) var_4))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) arr_1 [i_0]);
        var_12 = max((((/* implicit */unsigned int) (short)-1)), (3268641683U));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1026325612U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108)))))))) ? ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_6))))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) ((unsigned short) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) var_7);
        arr_6 [i_1] = ((var_4) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((int) var_5))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_7), (var_3))) << (((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3]))))) - (488123574U)))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((var_7) - (9044783766857185375LL)))))), (arr_1 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))));
            arr_13 [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) arr_11 [i_2])) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)10] [i_2]))) : (var_3))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_7 [(unsigned short)11] [i_2]))))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_2]) : (var_7)))))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) ((_Bool) var_4))), (((unsigned int) var_4)))), (((/* implicit */unsigned int) ((short) arr_1 [i_3]))))))));
        }
        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_17 [i_4] = ((((_Bool) 3937822550U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)7716)), (1723493909U)))) ? (3268641661U) : (((((/* implicit */_Bool) arr_14 [i_2] [i_4])) ? (877063004U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))))))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (max((((/* implicit */unsigned long long int) arr_19 [i_2] [i_4] [i_2] [i_6])), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_19 [7] [i_4] [(unsigned char)5] [7])))))))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [10ULL])) : (arr_11 [i_6])))))) * (min((((/* implicit */long long int) arr_11 [i_2])), (((long long int) var_4))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_25 [i_2] [i_2] [i_2]))))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)60)), ((unsigned char)148)))) & (((/* implicit */int) (_Bool)1)))))))));
                arr_26 [i_7] = ((/* implicit */unsigned int) (+((~(var_8)))));
                arr_27 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_21 [i_2] [i_2] [i_2] [i_2])), (var_8))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_2] [i_4] [i_7]))))))), (max((((/* implicit */unsigned long long int) var_4)), (var_6)))));
            }
        }
        var_17 = ((((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2])) * ((-(((/* implicit */int) (_Bool)0)))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_1);
}
