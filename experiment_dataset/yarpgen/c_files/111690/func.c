/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111690
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) (+(((var_0) ? (min((var_2), (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-42)))))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((8038081053800501489LL), (((/* implicit */long long int) (_Bool)1))))), (((((/* implicit */_Bool) (+(867157804678743770LL)))) ? (arr_3 [2ULL] [(unsigned short)19]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [16U]))))))))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 1) 
    {
        arr_7 [1LL] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            arr_11 [(_Bool)1] [(unsigned short)3] [17LL] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((2713466296U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((+(((/* implicit */int) arr_8 [(signed char)4] [19U])))) : ((-(((/* implicit */int) var_4))))))));
            var_12 = ((/* implicit */signed char) (+((+(((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((unsigned int) var_4)) % (min((144469167U), (((/* implicit */unsigned int) (unsigned short)65024))))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65008)), (arr_6 [10U])))) ? (-4466393123857598015LL) : (((/* implicit */long long int) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024)))))))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            arr_15 [(signed char)11] [19LL] [18ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((long long int) max((arr_13 [(unsigned short)1] [(_Bool)1]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)510), (((/* implicit */unsigned short) var_1))))) || (((/* implicit */_Bool) ((var_5) / (var_5))))))))));
            var_14 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_12 [i_1 - 4] [i_1 - 2] [2LL])))), (((/* implicit */int) arr_9 [(signed char)9]))));
            arr_16 [(_Bool)0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [(unsigned short)19] [23ULL] [1ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_1 - 3] [9U]))))));
            var_15 = ((/* implicit */_Bool) (unsigned short)51615);
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5205521493028935430LL)) ? (arr_6 [19ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)13))));
                var_18 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))));
            }
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_17 [18U] [2U]))));
                var_20 = ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)510)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65024)) - (65020)))));
            }
        }
        arr_25 [(signed char)11] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_9)));
        var_21 = ((/* implicit */unsigned short) var_2);
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_9))));
    var_23 = ((/* implicit */unsigned int) ((var_1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned long long int) var_6))));
}
