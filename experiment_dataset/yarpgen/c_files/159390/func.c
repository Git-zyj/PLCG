/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159390
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
    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((long long int) var_9)) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_2), (var_6))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)49967)))))))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (var_13)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            var_16 = arr_3 [i_0 + 1] [7LL];
            /* LoopSeq 3 */
            for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_0 + 1] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 + 1]))))));
                var_18 = -7717274867375159365LL;
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) -786919201440403404LL)) ? (6206124821394669906LL) : (4042483036281877004LL))) : (arr_7 [(unsigned short)8] [(unsigned short)2] [i_2] [(unsigned short)8]))) < (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)32987)), (-15LL)))) ? (((long long int) -1849962997104455838LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))));
                var_20 = ((/* implicit */long long int) ((unsigned short) ((-1823107356769226233LL) != (-8028234615171343834LL))));
            }
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53279)))))) >= (((var_10) / (var_10)))));
                arr_11 [i_1] = (~(arr_9 [i_0 + 1] [8LL] [i_0 - 1] [i_1]));
            }
            for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) (+((+(((((/* implicit */int) arr_10 [i_0 + 1] [i_4])) << (((((/* implicit */int) arr_0 [i_4] [11LL])) - (31399)))))))));
                var_23 = max((((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned short)35765), (arr_4 [i_1]))))))), (min(((-(arr_13 [i_0] [i_1] [i_0]))), (min((3380321464589499043LL), (-8988616840551056564LL))))));
                var_24 |= (~(max((((/* implicit */long long int) (unsigned short)65528)), (((((/* implicit */_Bool) arr_1 [i_0] [1LL])) ? (var_10) : (-5356739628363726771LL))))));
            }
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 519639920190042281LL))))))))));
            var_26 = ((/* implicit */long long int) min((var_26), (max((((/* implicit */long long int) arr_12 [6LL] [i_0] [i_0 - 1])), (((long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_5])) ? (arr_15 [i_0] [i_0] [0LL]) : ((-9223372036854775807LL - 1LL)))))))));
            var_27 = ((((/* implicit */_Bool) -7380499283261032074LL)) ? (-8778889720678384638LL) : (9223372036854775807LL));
            var_28 = ((/* implicit */long long int) max((var_28), (var_2)));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] = ((((/* implicit */_Bool) min((arr_2 [i_0 - 1]), (((long long int) arr_16 [i_6] [(unsigned short)4] [(unsigned short)9]))))) ? (((long long int) 8128LL)) : (arr_5 [i_0]));
            var_29 = ((/* implicit */unsigned short) max(((+((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [(unsigned short)2] [(unsigned short)2])) ? (arr_7 [i_6] [i_0] [i_6] [i_6]) : (arr_1 [i_0 - 1] [i_0 + 1])))));
        }
        var_30 = ((long long int) max((((((/* implicit */_Bool) arr_14 [0LL] [5LL] [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) : (-8234328971856106379LL))), (((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 + 1]))));
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned short)65535)))))) ? ((-(arr_15 [i_7] [i_7] [i_7]))) : ((+(max((var_0), (((/* implicit */long long int) arr_10 [i_7] [i_7]))))))));
        arr_27 [8LL] |= var_13;
        arr_28 [i_7] [i_7] = ((/* implicit */long long int) arr_0 [i_7] [i_7]);
    }
    for (long long int i_8 = 4; i_8 < 20; i_8 += 3) 
    {
        var_31 = ((/* implicit */long long int) max((((((/* implicit */_Bool) -8766631234500228505LL)) ? (((/* implicit */int) arr_29 [i_8 - 1])) : (((/* implicit */int) arr_29 [i_8 + 3])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_8 - 1])) && (((/* implicit */_Bool) arr_29 [i_8 + 3])))))));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1LL)))))))) ? (((long long int) ((long long int) arr_30 [i_8]))) : (((((/* implicit */_Bool) -2100607410396067072LL)) ? (((long long int) var_12)) : ((+(arr_30 [i_8])))))));
        var_33 = ((/* implicit */unsigned short) max((max((min((-3405432980864179952LL), (3660852551050676013LL))), (-8825377791503314485LL))), (((((/* implicit */_Bool) -6241997537223579317LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 7567598091466283333LL)))))) : (-6964914261804538122LL)))));
        var_34 = ((/* implicit */long long int) max((var_34), (((((((((/* implicit */_Bool) arr_29 [i_8])) ? (var_5) : (arr_30 [2LL]))) >= (((arr_30 [i_8 - 2]) & (arr_30 [i_8]))))) ? (((((((/* implicit */int) arr_29 [i_8])) != (((/* implicit */int) arr_29 [i_8])))) ? (arr_30 [i_8]) : (((((/* implicit */_Bool) -8285455339624492626LL)) ? (-2178361923338146719LL) : (4042483036281877012LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8]))))) >= ((+(((/* implicit */int) arr_29 [i_8]))))))))))));
        var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_29 [i_8 - 2])))) ? (((long long int) arr_29 [i_8 + 2])) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8 - 4])))));
    }
}
