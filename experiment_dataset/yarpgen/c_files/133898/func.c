/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133898
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)25))));
        var_20 = ((((/* implicit */_Bool) 3022834886U)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)42)) <= (((/* implicit */int) (signed char)80))))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 202394396U))))));
        var_21 = ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (signed char)80))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32764)) << (((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */unsigned short) (+(var_10)));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-32762)))))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_6))))) < (((((/* implicit */_Bool) -624799828)) ? (((/* implicit */int) var_3)) : (var_18)))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_10 [i_0] [i_0] [i_0] = ((16744766367960538563ULL) << (((((/* implicit */int) (unsigned short)65526)) - (65486))));
                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (short)14930))));
                var_25 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) (short)5064)) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) (short)-14922))));
            }
        }
        for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            arr_13 [(short)1] [i_3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-53)) - (((/* implicit */int) (unsigned char)42))))) : (((((/* implicit */_Bool) (signed char)-80)) ? (9782047363809888719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))))));
            var_26 *= ((/* implicit */signed char) 8388606U);
        }
        for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16)));
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0))));
            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45111)))))) ? (((/* implicit */int) ((9782047363809888719ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (short)29767)) : (((/* implicit */int) (short)-1987))))));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8664696709899662897ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 8664696709899662897ULL)) ? (((/* implicit */int) (unsigned short)26722)) : (((/* implicit */int) (_Bool)1))));
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_8))));
}
