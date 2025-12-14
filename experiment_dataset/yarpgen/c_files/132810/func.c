/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132810
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2509743909U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18395390959700119339ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((51353114009432277ULL) >= (((/* implicit */unsigned long long int) 5461678733349614900LL)))))) : (max((((/* implicit */unsigned long long int) 0LL)), (18395390959700119339ULL)))))) ? (((/* implicit */unsigned long long int) var_0)) : (var_4));
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 = var_11;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) var_6)))) : (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) * (arr_0 [i_0] [i_0 - 2])));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 2])))))));
        var_20 = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 51353114009432277ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)57))) : (3LL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 - 2] [(_Bool)1])))))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_9 [8LL] |= ((/* implicit */signed char) var_4);
            var_21 = ((/* implicit */_Bool) ((arr_7 [i_1 - 2] [i_1 - 2] [i_1]) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_1]))));
        }
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [5] [i_1])))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (var_8))) : (((/* implicit */int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23228))))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(max((arr_12 [i_3]), (((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_3])))))))));
        var_23 = ((((/* implicit */_Bool) 8888242240722040687LL)) ? (928332161356272106ULL) : (18395390959700119353ULL));
        var_24 &= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_11 [2LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_3] [i_3] [(unsigned char)2])), (var_11)))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [(unsigned char)4] [i_3] [(unsigned char)4]))))))) : (((((/* implicit */_Bool) arr_4 [(unsigned short)8])) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_9))) : (max((((/* implicit */unsigned long long int) (unsigned char)234)), (51353114009432262ULL))))));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */int) max((max((((51353114009432277ULL) * (((/* implicit */unsigned long long int) -7342410684999431983LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_4] [i_4])), (var_0)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_11 [(_Bool)1])) - (47)))))), (min((2162206876909097125ULL), (((/* implicit */unsigned long long int) 1447677967892773239LL))))))));
        var_25 = var_7;
        arr_16 [i_4] [i_4] = max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (491010065967422121LL)))), (((((/* implicit */_Bool) arr_5 [i_4])) ? (var_13) : (((/* implicit */unsigned long long int) arr_12 [i_4])))))), (((/* implicit */unsigned long long int) arr_12 [i_4])));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) var_14))));
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((9244916915282474849ULL) << (((9223371761976868864ULL) - (9223371761976868845ULL)))))) ? (((/* implicit */unsigned long long int) 1447677967892773221LL)) : (arr_18 [i_5] [i_5])));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_12)) ? (arr_13 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))))) : (((arr_7 [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_12 [i_5])))));
    }
}
