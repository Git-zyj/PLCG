/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171426
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
    var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((596025463368497444ULL) > (14002312970084650216ULL))))) <= (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17850718610341054156ULL)))))));
    var_12 = ((/* implicit */short) ((var_5) > (var_8)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_0] = min((max((max((596025463368497444ULL), (14002312970084650216ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [6LL]))))))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [1ULL])) : (((/* implicit */int) arr_2 [i_0] [5LL] [i_0])))))))));
            var_13 ^= ((/* implicit */unsigned int) ((var_10) >= ((+(var_4)))));
            var_14 = ((/* implicit */int) max(((((!(((/* implicit */_Bool) 429350312060669555ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */short) arr_1 [17LL])))))) : (4444431103624901381ULL))), ((-(((((/* implicit */_Bool) 14002312970084650227ULL)) ? (((/* implicit */unsigned long long int) -2004774102)) : (14002312970084650235ULL)))))));
        }
        var_15 = (i_0 % 2 == zero) ? (((/* implicit */short) (+(((((((((/* implicit */int) arr_3 [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (10494))) - (25))))) << (((max((((/* implicit */unsigned long long int) var_5)), (4444431103624901399ULL))) - (9877807460055509663ULL)))))))) : (((/* implicit */short) (+(((((((((((/* implicit */int) arr_3 [i_0] [i_0])) - (2147483647))) + (2147483647))) << (((((((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (10494))) - (25))) + (21185))) - (21))))) << (((max((((/* implicit */unsigned long long int) var_5)), (4444431103624901399ULL))) - (9877807460055509663ULL))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [12U]))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_7)) % (var_9)))), (min((((/* implicit */long long int) var_4)), (var_5))))))))));
                    var_17 = ((/* implicit */long long int) 4444431103624901388ULL);
                    arr_9 [i_2 - 1] [i_2 - 1] [i_0] [(short)12] = ((/* implicit */int) min((var_6), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-479))))), (min((var_10), (((/* implicit */int) arr_1 [i_2])))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) (short)30967);
        var_19 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_5 [i_0] [19LL] [i_0]))))));
    }
    for (int i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        arr_12 [i_4 + 1] [i_4 - 1] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_4 + 1] [i_4] [(short)8])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_4 - 1] [i_4 + 1] [2ULL])) + (10491))) - (22)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_4] [i_4] [14LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)502)))))) : (((((/* implicit */_Bool) 4444431103624901381ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24589))) : (596025463368497444ULL)))))));
        var_20 ^= min((min((4444431103624901400ULL), (((/* implicit */unsigned long long int) var_3)))), ((-(18017393761648882061ULL))));
    }
}
