/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172616
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), ((+(min((((/* implicit */unsigned long long int) -8861612463699133262LL)), (260096ULL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                            {
                                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((0ULL) < (((((/* implicit */_Bool) 8485783891423522002ULL)) ? (((/* implicit */unsigned long long int) -9223372036854775792LL)) : (8485783891423521992ULL))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                            {
                                arr_14 [i_2] [i_2] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 7777640745887353449LL)), (20ULL))) / ((+(2077347523701974903ULL)))))) ? ((+(7777640745887353457LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_7)))))))))));
                                arr_15 [i_2] [i_3] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) max((((4706827778676393814ULL) & (((/* implicit */unsigned long long int) -9223372036854775807LL)))), (var_8)));
                                arr_16 [15ULL] [i_1] [i_2] [i_3] [i_5] [i_2] [i_2] = min((max((((/* implicit */unsigned long long int) ((7057635629360393193ULL) != (((/* implicit */unsigned long long int) var_4))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -3253126403591624332LL)) : (var_9))))), (((((/* implicit */_Bool) 8485783891423522002ULL)) ? (15013165394682857194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 34359738304LL)))))))));
                                arr_17 [i_2] [i_1] [i_2] [i_2] [i_2] [2ULL] [2ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4611686018427387904ULL)))))) == (min((18446744073709551614ULL), (2864935309912350416ULL)))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 1) 
                            {
                                arr_22 [i_2] [i_2] [i_6] = ((unsigned long long int) ((unsigned long long int) -6059354117447016174LL));
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_6] = 7664112782402754573LL;
                                var_16 = ((((/* implicit */_Bool) 2864935309912350416ULL)) ? (4611686018427387916ULL) : (((/* implicit */unsigned long long int) 274877902848LL)));
                                arr_24 [1ULL] [i_2] [i_2] [i_1 - 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (2077347523701974903ULL) : (((/* implicit */unsigned long long int) -8861612463699133255LL))));
                                arr_25 [i_0] [i_0] [i_2] [i_0 - 1] [i_0] [i_0] = 8842937040230387481ULL;
                            }
                            var_17 = (+((+(min((7750153910239776062ULL), (((/* implicit */unsigned long long int) 4432771210448957340LL)))))));
                        }
                    } 
                } 
                arr_26 [i_1] [i_0 - 1] &= var_0;
            }
        } 
    } 
    var_18 -= ((/* implicit */long long int) 576460752303423488ULL);
    /* LoopSeq 2 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), ((+(7750153910239776053ULL)))));
        arr_31 [i_7] = min((7ULL), (min((min((15721324344009054760ULL), (3203819333896338897ULL))), (((/* implicit */unsigned long long int) var_7)))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_36 [i_8] [i_8] = ((/* implicit */long long int) 16140901064495857664ULL);
        /* LoopNest 3 */
        for (long long int i_9 = 4; i_9 < 20; i_9 += 2) 
        {
            for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                        {
                            arr_49 [i_8] [i_10] [i_10] [i_11] [i_12] = ((0LL) >> (((17073539630328401305ULL) - (17073539630328401268ULL))));
                            var_20 &= ((/* implicit */long long int) ((((10696590163469775554ULL) | (18446673704965373952ULL))) - (18446744073709551607ULL)));
                            var_21 ^= ((/* implicit */long long int) (~(((15581808763797201203ULL) ^ (3358920472888254420ULL)))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                        {
                            arr_54 [i_8] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) 0LL);
                            var_22 = ((/* implicit */unsigned long long int) (+(-3966814096076163800LL)));
                            arr_55 [i_8] [i_9] [i_10] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 8LL)) != (12577450937228153574ULL)));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                        {
                            arr_59 [0ULL] [0ULL] [i_10] [i_11] [i_10] [i_9] = ((/* implicit */long long int) ((2864935309912350412ULL) % (((unsigned long long int) 13835058055282163711ULL))));
                            var_23 = ((/* implicit */unsigned long long int) (-(1727353021207830520LL)));
                            var_24 = ((/* implicit */long long int) ((unsigned long long int) (~(var_9))));
                            var_25 = ((/* implicit */long long int) 9007198986305536ULL);
                        }
                        var_26 = (+(4611686016279904256ULL));
                        arr_60 [i_8] [i_8] [i_8] &= ((/* implicit */long long int) (~(11086655549568871659ULL)));
                        var_27 ^= ((/* implicit */unsigned long long int) 18012199486226432LL);
                        var_28 = ((/* implicit */unsigned long long int) (-(-2984416983924367420LL)));
                    }
                } 
            } 
        } 
    }
}
