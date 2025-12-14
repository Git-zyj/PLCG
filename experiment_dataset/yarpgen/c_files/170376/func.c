/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170376
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
    var_16 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ? (-5787795329553709502LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))), (min((((/* implicit */int) ((signed char) var_1))), (((((/* implicit */_Bool) 131071ULL)) ? (-1738488345) : (((/* implicit */int) var_10)))))));
    var_17 = ((/* implicit */unsigned short) (signed char)121);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0 - 1])))) ? ((-(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) arr_1 [i_0 + 4]))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_3))))), (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (-1738488345)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (12669223468928164166ULL) : (((/* implicit */unsigned long long int) ((long long int) 1738488329)))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_0 + 3] [i_0])), (min((((/* implicit */int) arr_1 [i_0 + 2])), (max((((/* implicit */int) arr_1 [i_0])), (341477907)))))));
        arr_4 [i_0] [2] = ((/* implicit */signed char) var_13);
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */signed char) var_1);
        arr_10 [i_1] = ((/* implicit */short) max((max((((/* implicit */int) arr_8 [i_1])), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) ((unsigned char) var_15))) ? (min((arr_7 [i_1]), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_8 [i_1]))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((arr_6 [i_1 + 2]) <= (((/* implicit */unsigned long long int) arr_5 [i_1 + 3])))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_7 [12]) : (((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) arr_7 [(signed char)2])))))));
        arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_8 [i_1]))) << (((/* implicit */int) ((arr_7 [i_1]) >= (arr_7 [i_1]))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) == ((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                arr_20 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_2] [i_2]));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((short) max((((((/* implicit */int) arr_19 [i_2] [10] [i_2])) << (((var_15) - (16393905723185408739ULL))))), (((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) arr_15 [i_2] [i_2])) : (((/* implicit */int) (short)-2753))))))))));
            }
        } 
    } 
}
