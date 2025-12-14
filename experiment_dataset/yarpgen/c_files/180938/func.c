/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180938
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
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25375)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)141)))))))) >= (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_11))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_16 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (((((/* implicit */_Bool) arr_5 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) : (4713864124431680663ULL))))) | (((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_0 + 3] [i_0 + 1])) ^ (((arr_3 [18LL]) & (arr_6 [i_1])))))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_5 [i_2])), (1008ULL))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            var_18 = max(((~(((arr_11 [i_0 + 3]) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_8 [(signed char)3] [i_4] [(short)10] [i_0])))))), (((var_4) >> (((((/* implicit */int) arr_7 [i_2 + 1] [i_0 + 1])) + (6377))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_13))))) != (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned short)27928))))))) : ((~(((/* implicit */int) var_2))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [i_3] [i_3] [1ULL] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_10 [i_0] [i_2 - 1])))), (((((/* implicit */int) (unsigned short)41386)) - (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)172)), ((unsigned short)51438)));
                            var_20 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (short)6734))))))));
                            arr_17 [i_0] [i_1] [i_1] [(unsigned short)3] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) arr_5 [i_3 - 2]);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 31457280U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (8103422091723025375LL)));
                            var_22 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_0 + 3] [i_3 + 1]))));
                            var_23 ^= ((/* implicit */int) var_5);
                            arr_22 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                        }
                        arr_23 [i_0] [i_1] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
                    }
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [(unsigned short)3] [4] [i_2 + 1])) ? (arr_4 [i_7 - 1] [i_1] [i_2 - 1]) : (((/* implicit */int) arr_19 [i_2] [i_1] [i_2 - 1] [i_7 + 1] [i_7]))))));
                        /* LoopSeq 1 */
                        for (int i_8 = 3; i_8 < 15; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (max((((/* implicit */long long int) ((unsigned short) var_7))), ((~(arr_25 [i_0] [i_1])))))));
                            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((4083444014640018256ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_7]))))) && (((/* implicit */_Bool) (unsigned short)45976))))), (((((/* implicit */_Bool) ((unsigned long long int) 16767240720281044157ULL))) ? (min((((/* implicit */unsigned long long int) var_5)), (4713864124431680675ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_2 - 1] [i_7 - 1] [i_8])))))));
                        }
                        arr_32 [i_0] [i_0] [i_7 - 1] [i_7] [i_7] [i_7 - 1] = ((/* implicit */signed char) max((((/* implicit */int) (short)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1980848216562503812ULL)) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) (short)23206))))) ? (((((/* implicit */int) arr_29 [i_0] [i_0] [i_2] [(signed char)5] [(unsigned char)13])) / (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_7])))) : (max((((/* implicit */int) var_12)), (-2129502357)))))));
                    }
                }
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 3])) + (((/* implicit */int) (short)17993))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_6) : (1980848216562503805ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29748)))))))) : (((/* implicit */int) (short)-3723)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_8);
}
