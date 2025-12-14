/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139561
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_7 [i_0] [i_0 + 1] [i_0 + 3] [(_Bool)1]), (((/* implicit */long long int) var_5)))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0] [(unsigned char)5] [i_0] [i_3] [i_4]), (arr_2 [i_0 + 2] [4LL] [i_4])))) : (((/* implicit */int) arr_2 [i_0 - 1] [1] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_21 *= ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_11 [i_0] [(short)4] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_11 [0LL] [0LL] [i_0] [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_17 [i_0] [2LL] [(unsigned char)8] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)9] [i_0] [i_0 - 1] [i_0] [(_Bool)1] [i_0 + 1] [i_0 - 1]))) : (arr_7 [3LL] [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
                            arr_18 [(unsigned char)0] [i_1] [(unsigned char)0] [i_1] = ((/* implicit */signed char) (_Bool)1);
                            arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_16)), (arr_15 [i_0 - 1] [i_1] [i_6] [(unsigned short)8]))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [6LL] [6LL] [(unsigned char)8] [i_6])) ? (var_14) : (-8387673451074957235LL)))) ? (min((((/* implicit */long long int) var_17)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [1])))))));
                            arr_20 [(_Bool)1] [(short)10] [i_1] [i_5] [6U] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) % (arr_7 [(signed char)4] [i_0 + 1] [10] [(signed char)4])))) ? ((-(arr_7 [i_0] [i_0 + 3] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_7 [6LL] [i_0 + 3] [i_6] [(_Bool)1])) ? (arr_7 [i_0] [i_0 + 2] [i_0] [(short)10]) : (arr_7 [(_Bool)1] [i_0 + 3] [i_1] [(_Bool)1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 += (!(((/* implicit */_Bool) min((((unsigned char) var_15)), (((/* implicit */unsigned char) var_1))))));
    var_23 = min(((-(max((((/* implicit */unsigned long long int) var_1)), (var_3))))), (16235077875263676040ULL));
}
