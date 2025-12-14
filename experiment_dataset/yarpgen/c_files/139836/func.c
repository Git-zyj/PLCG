/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139836
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) > (var_3)))), (var_2))))) ^ (((((/* implicit */_Bool) (short)-20212)) ? (min((2305842459457880064LL), (0LL))) : (((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) var_5)), (arr_1 [i_0 - 3] [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 9; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((arr_2 [i_0] [i_0]) >> ((((-(((/* implicit */int) (signed char)-37)))) - (36))))))));
            var_16 = 1329352705491026466LL;
        }
        for (int i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = ((/* implicit */long long int) arr_1 [i_0 - 3] [i_2 + 1]);
            var_17 = ((/* implicit */_Bool) var_7);
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15828084532377006175ULL))));
            var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(-9223372036854775801LL))))));
            arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551586ULL));
        }
        for (int i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_19 = (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_2))))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 2] [i_3])) ? (var_3) : ((~(arr_4 [i_0] [i_3 + 2] [i_3])))));
        }
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_12 [(unsigned short)3] [i_0 - 1] [i_0]), (((/* implicit */long long int) var_0))))) ? (min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (5864244267977805696LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130)))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (short)16715))));
    }
    for (signed char i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */signed char) (_Bool)0);
        arr_18 [i_4] = ((/* implicit */unsigned int) arr_13 [i_4] [i_4 - 2]);
    }
    for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 3) 
    {
        arr_21 [i_5] = max((((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 - 3]))) : (arr_4 [i_5 - 3] [i_5] [i_5]))), (((/* implicit */unsigned long long int) arr_19 [i_5 + 1])));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_13 [2ULL] [i_5 - 4])))))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) arr_11 [0LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (~(11750847974257072989ULL)))) ? (((((/* implicit */_Bool) arr_13 [10LL] [i_6])) ? (((/* implicit */unsigned long long int) var_6)) : (12691883929900332711ULL))) : (((/* implicit */unsigned long long int) var_7))))))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (~(11750847974257072966ULL)))) && (((/* implicit */_Bool) (unsigned char)89)))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            {
                var_26 = ((_Bool) min((251559751743171676ULL), (((/* implicit */unsigned long long int) -1))));
                arr_29 [i_7] [i_8] [i_8] = min((((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7]))))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) arr_24 [i_7]))))));
                arr_30 [i_7] [(short)6] [i_7] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}
