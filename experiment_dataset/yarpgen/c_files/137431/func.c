/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137431
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((short) 18078781428332749411ULL)))))) && (((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17833))) != (var_0)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~((-(max((367962645376802191ULL), (arr_5 [i_1 - 1]))))))))));
        var_20 = ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_12 [(unsigned short)18] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_16)) != ((-(((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) ((arr_1 [17U] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) && (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47684)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) 4197537988301817231ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)24265)))))))));
        arr_13 [i_2 - 1] [17LL] = ((/* implicit */short) ((((arr_6 [i_2 - 3] [i_2 - 2]) * (arr_6 [i_2 - 1] [i_2 + 1]))) % ((~(arr_6 [i_2 - 3] [i_2 - 2])))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (-(var_6))))))))));
                    var_22 = ((/* implicit */short) ((((var_11) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) != (max((((unsigned long long int) (unsigned short)54424)), (((/* implicit */unsigned long long int) ((short) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_23 [i_4] [i_5] [i_4 + 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14249206085407734390ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)))))));
                                var_23 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_3] [i_3 + 1] = min((((var_7) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_2] [i_3])) & (((/* implicit */int) var_4))))))), ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1360009885U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28287)))))) : (arr_20 [i_3 - 3] [i_3 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 2]))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_7 [i_4] [i_3]), (((/* implicit */unsigned short) (short)9561))))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_11) : ((-((+(var_0)))))));
}
