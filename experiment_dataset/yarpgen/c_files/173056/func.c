/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173056
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) & (18398516015721763775ULL)));
        var_21 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0 - 1]) ^ (arr_0 [i_0] [i_0 - 1])));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (_Bool)0))) << (((/* implicit */int) var_13))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_3] [14LL] [i_1 + 1] [i_0 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */long long int) var_8);
                            var_24 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) : (arr_4 [i_0] [i_0] [i_0 - 2] [i_0])));
                        }
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_7))));
                            arr_17 [i_5] [i_3] [i_1] [i_1] [0U] = ((/* implicit */_Bool) ((unsigned char) var_7));
                            arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) + (((((/* implicit */_Bool) (short)-9960)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17226))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (((~(arr_12 [i_5] [i_5] [i_2] [i_5] [(signed char)0]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))))));
                            arr_19 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) var_19)))) : ((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_2] [(_Bool)1] [i_0]))))));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_6] [i_1] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2] [i_2] [i_6])) ? (((/* implicit */unsigned long long int) var_17)) : (18446744073709551615ULL)));
                            var_28 |= ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_7] [i_7] [i_0] [i_7]))))) ? (((var_11) / (arr_0 [i_0] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_7] [i_7] [i_7] [i_7])) != (((/* implicit */int) var_16))))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])) * (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3] [i_7]))))) : (((var_17) | (arr_13 [i_0 - 1] [i_0] [i_0] [i_7] [i_7] [4ULL])))));
        }
        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_8] [14] [i_8 + 1] [i_8 - 1] [i_8] [i_8] [14])) ^ (((((/* implicit */int) arr_11 [(unsigned short)18] [i_0] [i_0] [(short)18])) - (((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))))));
            var_32 = ((/* implicit */_Bool) var_11);
        }
    }
    var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))))));
}
