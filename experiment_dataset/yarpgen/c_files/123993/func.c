/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123993
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) -305224567)) ? (614828508U) : (614828493U))) : (((/* implicit */unsigned int) 34013516))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(short)23]))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (arr_5 [0ULL] [0ULL] [0ULL] [i_0]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_6))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (max((((/* implicit */long long int) -1307290692)), ((~(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    arr_10 [i_0] [i_1] [i_1] [4ULL] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                    arr_11 [i_0] [(signed char)1] [21U] [i_0] &= ((long long int) 34013516);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_5] [i_4 + 2] [i_5] = ((/* implicit */unsigned int) min((min((min((((/* implicit */long long int) var_1)), (59157414616845512LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [(_Bool)1])) ^ (((/* implicit */int) var_0))))))), (((/* implicit */long long int) 3611780544U))));
                                var_18 = ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_4] [i_5])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [(signed char)17] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (-1769607440560710414LL)))), (var_12))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_16 [i_0] [i_1] [24LL] [i_3] [24LL])))));
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-34013525) == (((/* implicit */int) arr_1 [i_0])))))))) ? (var_1) : (((((/* implicit */int) var_13)) + (1073741823)))));
                            arr_24 [i_0] = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_0] [i_0]);
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) -5782858159448891405LL))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) var_8))))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) (_Bool)1);
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
}
