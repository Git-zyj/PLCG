/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112866
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((12209106941668692169ULL), (((/* implicit */unsigned long long int) (short)-2183))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((6237637132040859432ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)253)))))))) : (6237637132040859418ULL))))));
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned long long int) (~(((3446937228U) >> (((var_15) - (14879226617831608616ULL)))))))) : (((((/* implicit */_Bool) 3446937198U)) ? (((((/* implicit */_Bool) var_7)) ? (12223579510139904471ULL) : (((/* implicit */unsigned long long int) 4294967287U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) var_2))))));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 1978444187U)) + (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 576381709U)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) (unsigned char)70)) : (((((/* implicit */_Bool) (short)2182)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))) : (((arr_2 [i_1 - 3]) ? (((/* implicit */unsigned long long int) 1229232786U)) : (10846477177441745716ULL)))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_7 [i_1 - 3])))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 10U))));
            var_21 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1))))))) ? (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_22 = ((/* implicit */int) (!(var_2)));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_7))));
    var_24 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_14)))) ? (max((11095963836768372396ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_14)) ? (3065734510U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4))))))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            {
                var_25 = ((/* implicit */short) ((((((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1229232780U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3 + 1])) * (((/* implicit */int) var_5))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) (~(19U)))) : (((((/* implicit */_Bool) 44U)) ? (15820419975028941272ULL) : (10846477177441745716ULL)))))));
                arr_13 [12ULL] [i_3] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) (~(1767412706U))));
                arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) arr_10 [i_3]);
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (0U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned char)178))))) : (((((/* implicit */_Bool) 464881304752755395LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */long long int) 1037091686U)) - (-464881304752755409LL))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_9)))))))));
}
