/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139176
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
    var_12 = ((/* implicit */signed char) (+(max((max((72057594037927935LL), (var_11))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_8 [i_2] [i_2] [i_0] [i_3] [i_2] [3LL] &= ((/* implicit */signed char) max((576460752303422464LL), (((/* implicit */long long int) max(((signed char)120), ((signed char)0))))));
                            var_13 *= ((/* implicit */signed char) (-(max((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_3]))))), ((~(arr_3 [i_0] [i_2] [i_3])))))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
                            {
                                var_14 = arr_10 [i_1] [i_2] [i_3];
                                var_15 = (~(arr_2 [i_0]));
                            }
                            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                            {
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)-8), ((signed char)82))))));
                                arr_14 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (~(72057594037927935LL)));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) max((max((min(((signed char)18), ((signed char)7))), (min((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_3] [(signed char)6]))))), (arr_6 [i_1] [i_3])));
                            }
                            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                arr_20 [i_6] [i_3] [i_2] [i_1] [i_0] = min((576460752303422464LL), (((/* implicit */long long int) (signed char)-120)));
                                var_17 = ((/* implicit */signed char) (-(max((((/* implicit */int) min((arr_12 [i_0] [i_0] [i_2] [i_3] [i_6]), (arr_0 [i_0] [i_3])))), ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(signed char)9] [i_0]))))))));
                            }
                            /* LoopSeq 3 */
                            for (signed char i_7 = 3; i_7 < 14; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */long long int) max(((-((-(((/* implicit */int) arr_1 [i_0])))))), (max(((-(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) min(((signed char)0), ((signed char)105))))))));
                                var_19 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [(signed char)5] [i_7])), ((-(((/* implicit */int) arr_6 [(signed char)8] [(signed char)8]))))));
                                arr_24 [i_3] [i_1] [i_2] [i_3] [i_3] [i_2] = arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_7] [i_7] [i_3];
                                arr_25 [i_0] [i_0] [i_2] [i_3] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)28))));
                            }
                            for (long long int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                            {
                                var_20 &= max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (max((max((arr_0 [i_0] [i_1]), (arr_21 [i_0] [i_1] [9LL] [i_3 - 1] [(signed char)11]))), (max((arr_0 [i_0] [i_1]), (arr_9 [i_8]))))));
                                arr_28 [i_0] [(signed char)16] [(signed char)10] [i_0] [i_8] [i_1] [(signed char)16] = ((/* implicit */signed char) (-(72057594037927935LL)));
                            }
                            for (long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                            {
                                var_21 ^= ((/* implicit */signed char) max(((+(((/* implicit */int) min((arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3 + 1] [i_1]), (arr_18 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1])))))), (max(((+(((/* implicit */int) arr_1 [17LL])))), (((/* implicit */int) arr_7 [i_0] [(signed char)4] [i_0] [i_3] [i_9]))))));
                                arr_31 [i_0] = ((/* implicit */long long int) arr_4 [i_2] [(signed char)16] [i_2]);
                            }
                            /* LoopSeq 3 */
                            for (signed char i_10 = 4; i_10 < 14; i_10 += 4) 
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */int) max((arr_23 [(signed char)6] [i_2] [i_3] [i_10]), (arr_23 [(signed char)15] [i_2] [i_1] [i_0])))), ((-(((/* implicit */int) arr_23 [(signed char)15] [i_1] [i_1] [i_3])))))), (max(((~(((/* implicit */int) (signed char)124)))), ((+(((/* implicit */int) arr_10 [i_10] [i_10] [(signed char)2]))))))));
                                arr_35 [i_0] [i_1] [i_3] [14LL] = ((/* implicit */signed char) (+(0LL)));
                            }
                            /* vectorizable */
                            for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                            {
                                arr_39 [(signed char)8] [i_0] [i_0] [i_2] [i_3] [i_11] = arr_4 [(signed char)16] [i_0] [(signed char)14];
                                arr_40 [i_0] [i_1] [i_1] [i_1] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-18))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-((~(arr_26 [i_0] [i_0] [i_2]))))))));
                            }
                            for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                            {
                                arr_43 [(signed char)14] [i_1] [i_2] [15LL] [i_12] = max((((/* implicit */long long int) (signed char)18)), ((-9223372036854775807LL - 1LL)));
                                var_23 = ((/* implicit */signed char) max((var_23), (arr_7 [(signed char)11] [i_1] [i_2] [i_3 - 1] [(signed char)17])));
                                var_24 = ((/* implicit */signed char) (-((-((-(((/* implicit */int) arr_22 [i_0] [11LL] [i_0] [i_1] [i_0] [(signed char)6] [i_12]))))))));
                            }
                        }
                    } 
                } 
                var_25 = max((((/* implicit */long long int) (signed char)15)), (arr_29 [i_0]));
            }
        } 
    } 
    var_26 -= var_1;
}
