/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117136
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
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((min((var_14), (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) max((var_5), (-4929037330923930152LL)))))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((var_1) ? (((/* implicit */unsigned long long int) ((long long int) var_12))) : ((~(14989301008260824167ULL))))) < ((~(((((/* implicit */_Bool) -421528651112524726LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8898818982804249591ULL))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_17 = ((unsigned long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_18 *= ((/* implicit */_Bool) 270215977642229760ULL);
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (arr_0 [i_1])))))));
                var_20 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                arr_8 [i_1] = (~(arr_1 [i_1] [i_1]));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) (+(arr_12 [i_0] [i_3])))) ? (((((/* implicit */_Bool) -2207541732213334892LL)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_3] [i_0]))))));
            arr_14 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((var_5) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_4] = ((/* implicit */_Bool) ((arr_16 [i_0] [i_0]) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                var_21 = ((/* implicit */long long int) ((unsigned long long int) arr_10 [i_5 + 1] [i_5 - 1]));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5 + 1])) ? (arr_18 [i_0] [i_0] [i_4] [i_5]) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
            }
            arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_0] [i_0])) ? (6572928593972722212ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_4]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_0] [i_6]) && (((/* implicit */_Bool) var_12)))))) != ((~(var_12)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7] [i_7]))) == (arr_5 [i_0] [i_0])))) * (((/* implicit */int) arr_10 [i_0] [i_0]))));
                arr_28 [i_6] [i_6] [i_7] = arr_3 [i_0];
                arr_29 [i_0] [i_6] [i_6] = var_4;
                arr_30 [i_6] = ((/* implicit */long long int) ((_Bool) arr_0 [i_0]));
            }
            arr_31 [i_6] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_0]))));
        }
        arr_32 [i_0] = var_6;
        arr_33 [i_0] [i_0] = 9223372036854775807LL;
        arr_34 [i_0] = ((/* implicit */unsigned long long int) var_8);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2967059448962877862ULL)))))) : (arr_12 [(_Bool)1] [i_0])));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
    {
        arr_38 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (arr_7 [7ULL] [i_8] [i_8]) : (arr_11 [i_8] [i_8])));
        var_26 = ((/* implicit */long long int) max((var_26), (((arr_19 [i_8] [i_8] [i_8] [i_8]) ? (arr_18 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((12368913914003611003ULL) == (((/* implicit */unsigned long long int) arr_12 [i_8] [3ULL]))))))))));
        arr_39 [i_8] [i_8] = ((((/* implicit */_Bool) var_12)) ? (arr_24 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((long long int) arr_20 [i_8]))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_9]))) : (var_0)));
        arr_44 [i_9] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9]))) < (arr_42 [i_9]))) ? (((/* implicit */int) arr_43 [i_9])) : (((/* implicit */int) ((var_5) >= (var_12))))));
    }
    for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 1) 
    {
        arr_48 [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_9), (var_8))))))), (min((17544192358485500932ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_9))))))));
        arr_49 [0LL] = ((/* implicit */long long int) ((max((var_14), (((/* implicit */unsigned long long int) arr_45 [i_10 - 1] [i_10])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 9223372036854775802LL))))));
    }
}
