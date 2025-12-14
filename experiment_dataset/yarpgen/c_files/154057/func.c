/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154057
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
    var_15 = var_12;
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) (signed char)-1))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))) : (min((((/* implicit */long long int) (signed char)-68)), (3860619548519154793LL))))) >= (((((/* implicit */_Bool) min(((unsigned short)17087), ((unsigned short)46072)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (((long long int) var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = ((3359253495976246408LL) == (((/* implicit */long long int) 794567044U)));
                            var_17 -= ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_1))))) & (((arr_5 [i_3]) | (arr_5 [i_1])))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) (short)-21396)) ? (((/* implicit */unsigned long long int) -4618038433217749018LL)) : (17290878975314220870ULL)))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1 + 1] [(unsigned short)12] [i_2] [i_3 + 2] [i_4] [i_3]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_2] [i_3 + 2] [i_1 + 1] [i_2])))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 + 1] [(signed char)7] [i_2] [i_3 + 2] [i_4] [(signed char)7])) >= (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 2] [i_2] [i_3 + 2] [i_4] [i_0])))))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_1 - 1] [i_3 - 1] [(signed char)2] [i_4])) == (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) >= (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_8)))))))) : ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (arr_0 [i_0]))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                            {
                                arr_16 [i_0] [i_1] [(signed char)20] = ((/* implicit */unsigned char) arr_1 [i_2]);
                                arr_17 [i_5] [i_2] [21ULL] [i_0] = ((/* implicit */signed char) (unsigned char)172);
                                var_21 = ((/* implicit */unsigned char) ((((9665834249601432977ULL) == ((-(9665834249601432986ULL))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(signed char)4] [(signed char)4] [i_3]))) : (-4618038433217749026LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) var_7))));
                            }
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(3779559620U)));
                arr_19 [i_1 - 3] [15U] = ((/* implicit */signed char) arr_5 [2LL]);
            }
        } 
    } 
}
