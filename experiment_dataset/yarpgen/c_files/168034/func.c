/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168034
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [0ULL] [i_0 - 2])))))));
            arr_5 [i_0] = arr_0 [i_0];
        }
        var_20 += (~(arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 3]));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_1 [i_0] [i_2]) : (9223372036854775803LL)));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) arr_2 [i_3] [i_0 + 2]);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
            {
                arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0 - 3] [i_0 - 3] [i_4]) || (((/* implicit */_Bool) 9223372036854775802LL)))))) : (11068462104447272104ULL)));
                var_24 -= ((arr_11 [i_0 + 1] [i_2] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_2] [i_4]))) : (524287ULL));
                var_25 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) 0ULL)));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
            {
                arr_18 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7378281969262279511ULL))));
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((_Bool) ((unsigned short) (_Bool)0))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_21 [i_0] [i_6 - 1] = ((/* implicit */long long int) ((unsigned short) 5162460289117714631ULL));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 7527715417010615505ULL))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7484828769078413618LL)) ? ((-(18446462598732840960ULL))) : (((((/* implicit */_Bool) 16LL)) ? (8824736442311587285ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_0 - 2]))))));
                var_29 ^= ((/* implicit */_Bool) arr_14 [i_0 - 2] [i_6 - 1]);
            }
            for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_24 [i_0 - 2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_0 [i_0]))));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 + 2])) ? (36028779839094784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 3])))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -8652278964832351814LL)) <= (9622007631397964360ULL)));
        var_31 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)11208));
    }
    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
    {
        var_32 *= max((min((((((/* implicit */_Bool) 524277ULL)) ? (18446462598732840960ULL) : (arr_30 [i_9] [i_9 - 1]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_30 [i_9] [i_9 + 2]))))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) 243693469230924492ULL)))));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        arr_33 [i_10] = ((/* implicit */long long int) (_Bool)1);
        arr_34 [i_10] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10]))) : (((((/* implicit */_Bool) arr_30 [i_10] [i_10])) ? (arr_30 [i_10] [i_10]) : (((/* implicit */unsigned long long int) 30LL))))));
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10] [i_10]))) : (7421492630839389481LL)));
    }
    var_34 = ((((/* implicit */_Bool) (unsigned short)1018)) ? (max((((((/* implicit */unsigned long long int) -4149585004018588988LL)) + (var_18))), (var_7))) : (var_14));
}
