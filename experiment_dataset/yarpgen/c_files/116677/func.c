/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116677
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_2] = ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3]);
                                var_17 = ((/* implicit */unsigned short) max(((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 629718770U)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_11 [i_0 - 1] [3U] [(short)2] [i_2 - 1])) - (49942)))))));
                    arr_15 [i_2] = ((/* implicit */unsigned char) (-(((long long int) 11014636601891310829ULL))));
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    arr_16 [i_2] [i_1] [i_2] = ((/* implicit */int) min((-14LL), (((/* implicit */long long int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                arr_23 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 11569152766137001469ULL)) ? (528482304) : (694583141))) + (((/* implicit */int) (_Bool)1))))) + ((-(2095137531U)))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned int i_8 = 4; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_30 [i_5] [i_6] [i_7] [i_8 - 1] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2638930229175375123LL)))) ? (((/* implicit */long long int) (-(521562664)))) : (-1363890931098700538LL))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_20 [i_7 - 1] [i_8 - 2] [i_8 + 1]) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (unsigned short)39015)), (arr_1 [i_5 - 1] [i_9])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_9 + 1] [i_7 - 1] [i_9 + 1] [i_9] [i_7 - 1] [i_6] [i_6]))))) : (((((/* implicit */_Bool) arr_17 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1] [i_5 - 1] [i_7 - 1] [i_9 - 1]))) : (max((arr_6 [i_5] [i_6] [i_7]), (((/* implicit */long long int) (_Bool)1)))))))))));
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8 - 3] [11])) ? ((-(var_16))) : (12ULL)))) ? (((((/* implicit */_Bool) 2199829764U)) ? (9039313215863341348ULL) : (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5 - 1] [i_5 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned short)9])) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_8]))))) : (681999636U))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((695011244), (((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9 - 1] [i_7 + 1]))) >= (9407430857846210262ULL))))) : (min((((/* implicit */unsigned long long int) arr_11 [i_5] [i_7 + 1] [i_5 - 1] [i_8 + 2])), (6877591307572550139ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_37 [i_5] [i_6] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_11] [i_10] [i_5] [i_5]))));
                            var_22 ^= ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
}
