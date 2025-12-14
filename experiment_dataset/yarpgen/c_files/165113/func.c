/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165113
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) ((min((arr_0 [i_1]), (arr_0 [i_0]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))), ((-(((((/* implicit */_Bool) var_17)) ? (-1645523636) : (((/* implicit */int) var_19)))))))))));
            arr_4 [(signed char)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (unsigned short)59688)), (3284196841U)))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25838)))));
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((+(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [1]))) : (arr_3 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_8 [i_0])))) ? ((((!(((/* implicit */_Bool) 17700706213768927199ULL)))) ? (((arr_3 [i_0] [i_2]) % (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_2] [i_0])), (arr_8 [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
            var_22 = arr_2 [i_0] [i_2] [i_2];
        }
        var_23 &= ((/* implicit */short) arr_6 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max(((unsigned char)125), ((unsigned char)47)))) ? (((((/* implicit */_Bool) 1468088359)) ? (arr_3 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_7 [i_0])))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3])))));
            arr_12 [i_0] [i_0] [i_3] = var_5;
            arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */int) arr_9 [(short)5])), (-350724680)))))) > (max((((((/* implicit */_Bool) -201184206543582949LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_0 [i_3]))), (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15)))))));
            var_25 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6)))))))), (((((/* implicit */_Bool) ((unsigned short) var_16))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_5))))));
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [0LL])))))) : (((((/* implicit */_Bool) (unsigned short)2652)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) : (285346359581774540LL)))))))))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_10 [1U] [i_4] [i_0]))))), ((((!(((/* implicit */_Bool) 441771814U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 807618334)))))) : (max((var_14), (((/* implicit */long long int) var_1)))))))))));
            arr_16 [2U] [i_4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 16)) ? (3U) : (((/* implicit */unsigned int) -2147483628)))), (((/* implicit */unsigned int) var_0)))))));
            arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_11 [i_4] [i_0]))) >> (((min((((/* implicit */unsigned long long int) (unsigned char)140)), (8768562019240531359ULL))) - (132ULL)))));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */short) max((arr_15 [i_0]), (((/* implicit */unsigned short) min(((unsigned char)84), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_28 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)65507)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7508652278856135546LL)) ? (4805200444598644270LL) : (((/* implicit */long long int) 2748160403U))))) ? (((/* implicit */int) ((_Bool) var_15))) : (((/* implicit */int) ((_Bool) arr_11 [i_0] [(unsigned short)11])))))));
    }
    var_29 |= max((max((min((var_17), (((/* implicit */long long int) (unsigned short)18958)))), (((/* implicit */long long int) ((unsigned char) var_19))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (short)20986)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_13))))));
}
