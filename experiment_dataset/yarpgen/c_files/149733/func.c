/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149733
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (+(992535113U)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            var_20 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(-1425849286)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1])), ((unsigned short)52932)))) : (((/* implicit */int) arr_3 [i_0]))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7586595177559943557LL)) ? (2205001549156603824LL) : (2205001549156603824LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) 7586595177559943571LL)) && (((/* implicit */_Bool) 2205001549156603830LL)))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)24492)) - (24475)))));
            arr_10 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_2])) ^ (((/* implicit */int) arr_2 [i_2] [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                var_22 ^= ((/* implicit */short) (((~(arr_8 [i_2] [i_3]))) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0])))))));
                var_23 += ((/* implicit */signed char) (short)4452);
            }
        }
    }
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((((/* implicit */int) ((short) (unsigned short)29110))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4 + 1])) > (((/* implicit */int) arr_12 [i_4]))))))))))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            arr_18 [i_4 + 2] [i_5] = ((/* implicit */unsigned char) arr_13 [i_5] [i_5]);
            arr_19 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (((((/* implicit */_Bool) 8415111207051132174ULL)) ? (1209387302) : (((/* implicit */int) (unsigned short)61440))))));
        }
        var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (7586595177559943559LL) : (arr_6 [i_4] [i_4 + 2] [i_4 + 2])))));
        var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(var_18)))) ? ((-(6036280690035073096LL))) : (min((-2205001549156603824LL), (((/* implicit */long long int) var_14)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((arr_17 [i_4] [i_4] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 2] [i_4 + 3]))))))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (7748849122449419820LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_6] [i_6] [i_6])) >= (((/* implicit */int) arr_9 [i_6] [i_6] [i_6]))))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6])) : (var_1)))));
        arr_25 [i_6] = ((/* implicit */short) (+(-7586595177559943564LL)));
    }
    var_27 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_7 + 1] [i_7 - 1])) ? (((/* implicit */long long int) arr_4 [i_7 - 1] [i_7 + 3])) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 + 1]))) + (arr_21 [i_7] [i_7 + 3])))));
        var_29 -= ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_8 [i_7] [i_7 + 3]))) + (2147483647))) << (((((/* implicit */int) arr_27 [i_7])) - (45301)))));
        arr_28 [i_7 + 2] = ((/* implicit */unsigned short) var_13);
    }
    var_30 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10746))))) >= (var_7)))));
}
