/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123137
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((15727411736504083693ULL) << (((4294967265U) - (4294967249U))))) <= (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_0] [i_2]))) : (arr_9 [i_0] [i_3] [i_2] [i_1] [i_1])))))) - (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */long long int) arr_3 [i_0])) : (min((var_7), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]))))))));
                        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((arr_3 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) -726831160)))))) ? (((arr_0 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) ((1443401225U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))))))))) : (((/* implicit */long long int) ((int) arr_1 [i_2] [i_3]))))))));
                        var_12 ^= ((/* implicit */signed char) ((((((/* implicit */int) ((short) 520192U))) + (2147483647))) << (((((arr_1 [i_3] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (((arr_0 [i_1]) << (((1185565750U) - (1185565749U))))))) - (6531082340310139742LL)))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_13 = ((/* implicit */unsigned long long int) arr_4 [i_0] [(_Bool)1]);
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned short) var_4)), (var_5))));
        var_15 = ((((/* implicit */_Bool) ((2567940779U) - (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)252), (((/* implicit */unsigned char) var_3))))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_4] [i_4]))))) / (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_4] [i_4]) : (arr_0 [(short)18]))))) : (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (unsigned char)252)), (2567940779U))) << (((((long long int) var_4)) - (168LL)))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (unsigned char)4))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)90))))) : (((-88281512082239945LL) / (((/* implicit */long long int) var_9))))))) ? (((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_6 [i_4] [20U] [(signed char)18] [3ULL]), (arr_6 [i_4] [i_4] [i_4] [i_4]))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_16 [i_5] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(var_7))))))));
            var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)9] [i_5] [23] [i_4]))) : (arr_11 [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)19), (((/* implicit */unsigned char) (_Bool)1)))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) arr_6 [i_4] [i_5] [i_5] [i_5])))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_0) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_5] [i_4])))))) ? (((/* implicit */unsigned long long int) max((var_6), (2077643671U)))) : (arr_9 [i_4] [i_4] [22U] [(unsigned char)10] [i_4]))), (((/* implicit */unsigned long long int) min((arr_7 [i_5] [i_6]), (((/* implicit */long long int) (signed char)63)))))));
                        var_20 = ((/* implicit */int) var_5);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_21 -= ((unsigned long long int) (!(((/* implicit */_Bool) 2079756861))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_0)), (arr_11 [i_7]))), (((/* implicit */unsigned long long int) arr_17 [i_8 - 1] [i_5]))))) ? (16777215U) : (((((/* implicit */_Bool) arr_9 [i_8 - 1] [i_7] [1ULL] [1ULL] [23])) ? (max((269037603U), (((/* implicit */unsigned int) var_3)))) : (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_4]) : (arr_3 [i_4]))))))))));
                        }
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19059)) << (((/* implicit */int) (!(((/* implicit */_Bool) 4398046511103ULL)))))))))))));
    var_24 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))));
}
