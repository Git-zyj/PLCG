/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119178
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
    var_20 -= ((/* implicit */long long int) ((((/* implicit */long long int) -1094911865)) == (max((max((-9223372036854775804LL), (8663938814819044751LL))), (((/* implicit */long long int) ((((/* implicit */long long int) var_8)) >= (var_14))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((1922447835) < (var_15))) ? (max((-6386767383602866849LL), (6386767383602866865LL))) : (((/* implicit */long long int) var_6))))) ? (max((((long long int) -1711683011)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */_Bool) 7102126985514468852LL)) ? (((((/* implicit */_Bool) var_11)) ? (6000534946083496917LL) : (-1LL))) : (((long long int) 1073741824))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */long long int) ((((/* implicit */_Bool) 576165582957683067LL)) ? ((-2147483647 - 1)) : (-1356710991)))) / (var_3)))));
    var_23 &= ((/* implicit */long long int) 33030144);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) var_16);
            /* LoopSeq 3 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                arr_9 [i_2] [i_2] [i_1] [5LL] = arr_1 [i_0 - 2];
                var_25 = ((/* implicit */long long int) arr_0 [5LL]);
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 - 2])) && (((/* implicit */_Bool) var_7)))))));
            }
            for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                var_27 = ((/* implicit */long long int) ((int) -6000534946083496917LL));
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */long long int) (+(arr_6 [i_3] [2LL])))) >= (1184623639159495051LL))))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((7LL) / (var_1)))) ? (arr_2 [i_0]) : (1184719202))))));
                var_30 ^= arr_1 [5];
            }
            for (int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                arr_17 [i_0 + 1] [i_1] |= (~(arr_0 [i_0 - 1]));
                /* LoopSeq 2 */
                for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    arr_20 [i_0] [i_1] [i_1 - 2] [16LL] [i_5 - 1] &= (+(((5625310139943644280LL) / (((/* implicit */long long int) var_8)))));
                    arr_21 [i_0 - 2] [i_1 + 1] [i_4] [0LL] [i_4] [i_5 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 0))) ? ((-(-1LL))) : (var_18)));
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (((~(arr_7 [i_5] [3LL] [i_1 + 1] [i_0]))) >= (7985035960269119032LL))))));
                }
                for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_32 = ((/* implicit */int) arr_5 [14]);
                    arr_24 [i_0] [i_1] [16LL] [i_4] = ((/* implicit */long long int) 1846203352);
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        arr_28 [i_0] [3] [i_4] [i_4] [i_7 + 1] = ((/* implicit */int) (-(((var_19) << (((4611686018427387903LL) - (4611686018427387903LL)))))));
                        arr_29 [i_0] [i_7 - 1] [i_4 - 1] [i_4] [i_7 + 1] = arr_3 [i_1 - 2] [i_0 - 2];
                    }
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) arr_6 [i_1] [i_0]))));
                }
                var_34 = -4611686018427387903LL;
                arr_30 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1711470905)) ^ (-8946181043764350635LL)))) ? (((((/* implicit */_Bool) 3400803101809206133LL)) ? (((/* implicit */long long int) 121231644)) : (67108863LL))) : (((/* implicit */long long int) ((arr_1 [16LL]) | (arr_0 [i_4]))))));
                var_35 |= ((/* implicit */int) ((((/* implicit */long long int) -1769952302)) & (17179869183LL)));
            }
            arr_31 [i_0] = ((/* implicit */long long int) var_5);
            arr_32 [i_1] [i_0] = ((/* implicit */int) ((arr_4 [i_0 - 1] [i_0 - 3]) != (arr_4 [i_0 - 2] [i_0 - 2])));
        }
        for (int i_8 = 2; i_8 < 16; i_8 += 4) /* same iter space */
        {
            arr_36 [i_0] [i_0] = ((/* implicit */int) ((((((var_12) ^ (var_3))) + (9223372036854775807LL))) >> (((arr_4 [1] [i_0 + 1]) - (7506811526028577118LL)))));
            arr_37 [i_0] [i_8] [14] |= ((/* implicit */int) ((((/* implicit */_Bool) ((-2) & (-1572001638)))) ? ((+(var_13))) : (-11LL)));
            var_36 |= ((/* implicit */int) -8250507922224916434LL);
        }
        arr_38 [13] = arr_16 [i_0] [i_0 - 3] [12] [12];
        arr_39 [i_0 - 2] [i_0 - 2] = ((((/* implicit */_Bool) 524287LL)) ? (1184623639159495051LL) : (-6000534946083496908LL));
    }
}
