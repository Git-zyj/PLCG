/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16351
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
    var_15 = ((/* implicit */_Bool) ((((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8661593324707411088LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_12)) : (var_5)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) ((((var_14) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 2] [10] [i_2]))))) ? (((/* implicit */long long int) (+(-180410125)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_2]))) % (var_1)))));
                    arr_7 [i_0] [i_0] [i_0] [6LL] |= ((/* implicit */long long int) ((int) var_6));
                }
            } 
        } 
        var_17 -= ((/* implicit */_Bool) (~(((int) var_9))));
        arr_8 [i_0 - 1] [i_0 - 1] = ((long long int) var_1);
        var_18 = ((/* implicit */long long int) ((((arr_1 [i_0]) >> (((var_1) - (3828297929884948882LL))))) == (((/* implicit */int) ((4783571801823946356LL) < (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((int) ((_Bool) 568583396866513859LL)));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */int) arr_10 [(_Bool)1] [i_3]);
        arr_14 [i_3] [i_3] = ((957994549) <= (((/* implicit */int) (_Bool)1)));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) arr_3 [(_Bool)1] [(_Bool)1] [10LL])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) (-(-180410125))))));
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (long long int i_7 = 4; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_19 = (_Bool)1;
                        arr_29 [13] [(_Bool)1] [i_6] [7] [i_7 - 2] |= ((/* implicit */long long int) (_Bool)1);
                        var_20 ^= ((/* implicit */int) ((_Bool) (~(max((((/* implicit */long long int) 180410128)), (4258026347333674204LL))))));
                        arr_30 [i_5 - 1] [i_6] [i_5 - 1] = ((/* implicit */int) arr_19 [i_7] [i_5] [i_5]);
                    }
                } 
            } 
        } 
        arr_31 [i_4] [11] = ((/* implicit */long long int) (~(min((((var_4) ? (arr_22 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) (_Bool)1)))), (arr_22 [i_4] [6LL] [1LL] [i_4])))));
        var_21 = (~((~(var_1))));
    }
    for (int i_8 = 2; i_8 < 23; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                {
                    arr_39 [i_10] [i_9] [i_10] = ((/* implicit */long long int) ((_Bool) arr_35 [i_8 + 1] [i_8 + 2] [i_8 + 1]));
                    arr_40 [i_8] [i_9] [i_8] &= ((/* implicit */int) arr_36 [i_8] [i_8] [i_8]);
                    var_22 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))), (((var_1) * (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_9] [i_10])))))));
                    arr_41 [i_8] [i_10] [22LL] = ((/* implicit */int) ((-8661593324707411088LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_36 [i_8 + 2] [i_8 - 2] [i_8 - 2]))))))) ? (min((((/* implicit */long long int) (~(-168989123)))), (((var_13) >> (((arr_38 [15LL] [15LL] [15LL] [i_8]) + (4411077171739300863LL))))))) : (((/* implicit */long long int) (-(((arr_32 [(_Bool)1] [12LL]) / (1819886591))))))));
    }
    var_24 = ((/* implicit */long long int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_25 ^= ((/* implicit */int) min((((var_1) != (((/* implicit */long long int) ((/* implicit */int) ((-957994528) > (-33554432))))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-5099542744208597668LL)))));
}
