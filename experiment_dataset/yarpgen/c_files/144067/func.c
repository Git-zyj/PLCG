/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144067
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
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (var_12))))) ^ ((-(max((((/* implicit */long long int) var_11)), (var_13)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) / (((/* implicit */int) var_8))))) + (2171970368U)))) ? (((14028609538944501273ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((-1), (18))) != (max((arr_2 [i_0] [i_0]), (-829907047)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) / (((/* implicit */long long int) ((((/* implicit */int) (signed char)4)) << (((/* implicit */int) ((((/* implicit */int) (short)496)) != (((/* implicit */int) (short)15360))))))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_1] |= ((/* implicit */unsigned short) min(((+(((/* implicit */int) max((arr_7 [i_1] [i_2] [i_3]), (arr_4 [14U])))))), ((-(((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_1] [12LL])) >= (((/* implicit */int) (unsigned char)255)))))))));
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_1] [i_2])) * (((/* implicit */int) (signed char)-14))))))), (min((4418134534765050335ULL), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3]))))));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (arr_10 [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))));
        var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((arr_4 [(signed char)16]), (arr_11 [(short)14] [i_1] [i_1])))) ? (((/* implicit */int) arr_7 [(short)3] [i_1] [i_1])) : ((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))))));
    }
    var_20 = var_5;
    var_21 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_8), (var_8))))));
}
