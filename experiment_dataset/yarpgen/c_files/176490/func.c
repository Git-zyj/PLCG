/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176490
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)1)) ? (-8475327271136775531LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned char)170))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (-5181957749763584577LL)));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((2097151LL) / (3989393892890532117LL)))) ? (((/* implicit */int) arr_6 [i_0])) : ((-(((/* implicit */int) (short)32762))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3794159061037956562LL)) ? (((/* implicit */unsigned long long int) 5181957749763584552LL)) : (2567126897950575177ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) : (((((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57754))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (22ULL))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))))))))));
            arr_10 [i_0] [i_0] = 4008567654926531453LL;
            var_16 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_12))))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [0U])) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) arr_9 [(unsigned char)8] [10] [i_0])))))))))))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 4] [i_0 + 4])) - (999380865)))) ? (min((-1LL), (((/* implicit */long long int) 4)))) : (((arr_8 [i_3] [i_0 - 1]) - (((/* implicit */long long int) arr_2 [i_0 + 1])))))))));
            var_19 = ((/* implicit */_Bool) (+(arr_8 [i_0] [i_0])));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) -1849535313))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [i_0]), (var_10)))) << (((((/* implicit */_Bool) (-(-1849535313)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (5181957749763584547LL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -5181957749763584589LL)) > (var_2))))))));
        }
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2))))) : ((~((-(((/* implicit */int) var_4))))))));
    }
    var_22 = min(((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)7790)) : (((/* implicit */int) (short)-16384)))))), ((-(((/* implicit */int) var_0)))));
}
