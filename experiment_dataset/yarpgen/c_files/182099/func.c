/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182099
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_1))))));
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((short) (~(((/* implicit */int) var_4))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)59))) % (5105822309449744651LL))) >= (min((arr_4 [16LL] [i_1]), (((/* implicit */long long int) (signed char)-59)))))))) - (max((((/* implicit */long long int) (unsigned short)34297)), (arr_4 [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) var_11);
                        var_20 *= ((/* implicit */signed char) ((long long int) 7498266993663073555ULL));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 17150998411472724254ULL);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((10127015720043316579ULL) | (arr_6 [i_0] [i_1]))))));
                        var_22 = ((long long int) 26ULL);
                    }
                }
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_23 += ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4]);
                        arr_18 [i_0] [15U] [i_4] [5ULL] = ((/* implicit */signed char) (((-(arr_1 [i_1] [i_1]))) * (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0])))));
                        var_24 = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_5]);
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_1] [i_4] [i_6] = ((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) 3206449330285617215LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [2ULL] [2ULL] [i_4] [i_6])) ? (((/* implicit */int) (short)-2975)) : (((/* implicit */int) var_7))))))) ? (min((4223182773516116931LL), (((/* implicit */long long int) (unsigned char)10)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-3206449330285617215LL) + (arr_4 [i_4] [i_6])))) ? (max((((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)2974))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15269122559905958782ULL)))))))))));
                        arr_23 [i_0] [i_1] [i_4] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */int) ((short) var_9))) + (((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0)))))), (((int) max((((/* implicit */long long int) (_Bool)1)), (var_9))))));
                    }
                    arr_24 [i_0] [i_1] [(short)10] [i_4] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) ^ (15269122559905958774ULL))), (((/* implicit */unsigned long long int) ((arr_20 [(_Bool)1] [(short)7] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))))))));
                    var_26 ^= ((/* implicit */_Bool) arr_15 [i_4] [i_1] [i_0]);
                    var_27 = ((/* implicit */int) max((3206449330285617215LL), (((long long int) max((((/* implicit */long long int) (short)32767)), (-3206449330285617216LL))))));
                }
                var_28 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))));
            }
        } 
    } 
}
