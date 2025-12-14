/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139284
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_1 [(unsigned short)10] [i_0]))));
        arr_2 [(short)10] |= ((/* implicit */int) 96667780U);
        var_12 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_13 = ((/* implicit */int) max((var_13), ((-(((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */short) arr_5 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) / (((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (arr_4 [i_2 + 3])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_16 [10U] [i_4] [i_4] [i_2] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_7 [i_1] [i_3] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (arr_14 [3] [i_2] [3] [4] [i_5 - 1]) : (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [13LL])))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))), (min((arr_12 [(signed char)16] [8ULL] [i_3] [i_4 - 1] [8ULL]), (arr_8 [i_1] [0LL] [i_1] [i_3])))))) || (((/* implicit */_Bool) var_9)))))));
                                arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) (unsigned char)220));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 3544818100941519290ULL))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_1 [i_3] [i_2 + 3])), (((((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_2] [i_2] [i_3])) ^ (arr_5 [(unsigned short)5])))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) var_3);
}
