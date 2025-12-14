/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180380
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
    var_16 = ((/* implicit */signed char) (~(((unsigned long long int) (((_Bool)1) ? (6301986080988296795LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)91))) : (min((((/* implicit */long long int) arr_0 [i_0])), (var_6)))))), (min((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = max((((unsigned long long int) arr_8 [(signed char)11] [(signed char)10] [0LL])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))))));
                    var_19 -= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        arr_9 [(short)10] [4ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || ((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
        var_20 -= ((/* implicit */long long int) max(((+(((15224696086995423263ULL) % (15224696086995423247ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
    }
    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_21 = ((/* implicit */signed char) var_9);
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-92))))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (2194410916916617657LL) : (arr_12 [i_3] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_10 [(signed char)24])) + (((/* implicit */int) (signed char)103)))))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)48519)), (((long long int) max((((/* implicit */unsigned long long int) (signed char)21)), (15224696086995423283ULL))))));
        arr_15 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(arr_11 [i_3])))), (((596781890716578394ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    var_22 |= ((/* implicit */long long int) ((signed char) max((arr_18 [i_5]), (arr_18 [i_3]))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-92)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned short)24] [i_3]))))))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
    {
        var_24 -= (+(81247588));
        arr_25 [(_Bool)1] = (~(((unsigned long long int) 15224696086995423278ULL)));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [2LL])) >> (((12320946349041205673ULL) - (12320946349041205645ULL)))))) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_18 [i_7])))) ? (((int) (signed char)85)) : (((/* implicit */int) (signed char)-124))));
        var_26 = ((unsigned long long int) arr_21 [i_7] [17ULL] [(_Bool)1]);
    }
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
    {
        var_27 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_17 [i_8] [i_8])), ((~(arr_6 [i_8] [i_8] [i_8] [i_8])))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)24399)))));
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    arr_40 [i_10] = ((/* implicit */long long int) (signed char)-19);
                    var_29 &= ((/* implicit */signed char) (((+(6125797724668345948ULL))) % (6125797724668345943ULL)));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)21387)))))));
                    var_31 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_1))))))) * (((((/* implicit */_Bool) arr_6 [i_9] [(short)7] [i_9] [i_9])) ? (arr_6 [i_9] [i_9] [i_11] [i_10]) : (15102780050319820331ULL)))));
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_7 [i_9] [i_9] [5ULL] [i_9])))));
    }
    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((signed char) ((signed char) 10339556604551252896ULL))))));
            var_34 -= ((/* implicit */long long int) ((signed char) arr_0 [i_12 + 2]));
            arr_46 [i_12] [i_12 + 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_32 [i_12 + 1] [9LL])))) - ((~(arr_26 [i_12])))));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
            arr_50 [i_12] [i_12] = ((/* implicit */long long int) (signed char)36);
        }
        arr_51 [i_12] = ((/* implicit */unsigned short) arr_35 [i_12]);
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)49152)))))));
        arr_52 [i_12] [i_12] = ((/* implicit */unsigned short) ((short) ((long long int) arr_3 [i_12 - 1] [i_12 - 1])));
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))) & (min(((~(-3876478943055624532LL))), (max((7399844494196507185LL), (var_6)))))));
}
