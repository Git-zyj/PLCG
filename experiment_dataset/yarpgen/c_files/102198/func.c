/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102198
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)-105)))), (((/* implicit */int) var_2))))) ? ((-(((((/* implicit */int) var_10)) + (((/* implicit */int) (signed char)-1)))))) : (((/* implicit */int) var_1))));
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) max((((int) (signed char)126)), (((/* implicit */int) ((short) (+(((/* implicit */int) var_13))))))));
            arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (503316480U) : (((unsigned int) (~(-491693038))))));
        }
        var_16 = ((/* implicit */int) ((unsigned int) ((unsigned int) arr_4 [i_0] [i_0] [i_0])));
        var_17 = ((/* implicit */short) (-(1117103813820416ULL)));
        arr_8 [i_0] = ((short) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0] [i_0] [i_0])));
        arr_9 [i_0] = arr_1 [i_0];
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_18 ^= ((/* implicit */_Bool) arr_11 [i_2]);
                        var_19 *= ((short) (signed char)-18);
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(((arr_10 [i_2] [i_2]) - (((/* implicit */int) var_8))))));
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) var_0);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2990120991387372565ULL)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)28672)))))) | (((arr_11 [i_3]) / (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_4] [4U] [(short)4] [i_7]))))))));
                            arr_27 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_2] [i_3] [16U]))) ? (((/* implicit */int) ((_Bool) arr_5 [i_4] [i_4] [i_7]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-2611)))))))) > (var_12)));
                        }
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) (short)-7483)))))));
                        var_23 = ((/* implicit */short) min((var_23), (((short) ((signed char) (signed char)-101)))));
                        var_24 = max((((unsigned long long int) arr_0 [i_2])), (((/* implicit */unsigned long long int) 1354591044)));
                    }
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_2] [i_3] [i_4])) < (((((/* implicit */_Bool) ((signed char) arr_0 [i_2]))) ? (((/* implicit */int) (short)28687)) : (((/* implicit */int) ((((/* implicit */int) arr_12 [14ULL] [i_3] [i_2])) == (((/* implicit */int) var_2))))))))))));
                    var_26 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) arr_3 [i_2] [(signed char)5] [i_4])) ? (arr_18 [i_2] [i_2] [i_3] [i_3] [i_4] [i_4]) : (((/* implicit */unsigned int) arr_23 [i_2]))))))), (((106398414523066097ULL) | (((/* implicit */unsigned long long int) 901507709U))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_25 [i_2]))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))) | (6703318417262559554ULL))), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 2147483638)))))));
        arr_28 [i_2] [i_2] = ((/* implicit */_Bool) ((short) (~(arr_11 [i_2]))));
    }
}
