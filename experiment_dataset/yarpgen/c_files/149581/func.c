/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149581
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */short) ((arr_4 [i_0]) & (((/* implicit */unsigned long long int) (-(0U))))));
                    var_16 = ((/* implicit */short) (_Bool)1);
                    var_17 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                }
                arr_10 [i_0] [i_0 + 1] = ((/* implicit */_Bool) var_12);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))) : (max((12591317163301208601ULL), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0 + 1]))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) (((+(((/* implicit */int) (signed char)15)))) < (((/* implicit */int) max(((unsigned short)5156), (var_14))))))) * (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_12)) ? (((5855426910408343022ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            {
                arr_19 [(unsigned short)0] [4ULL] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3 - 4] [i_3 + 1])) ? (12591317163301208600ULL) : (2080259042631192478ULL)))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)1] [i_4]))) | (7191811626143389190ULL))), (arr_16 [i_3] [6LL] [i_3 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) : (max((((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_4)))))))))));
                var_22 -= ((/* implicit */unsigned short) (((((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_13 [i_3 + 3] [i_3]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-71)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)1]))))), (((/* implicit */unsigned int) arr_11 [i_3] [i_3 + 1]))))) : (var_12)));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_5))));
}
