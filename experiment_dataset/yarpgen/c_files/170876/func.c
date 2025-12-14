/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170876
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 = arr_1 [i_2];
                    arr_9 [i_0] [i_0] [i_0] = min((arr_6 [2LL] [i_0] [i_2] [2LL]), (max((arr_8 [i_2]), (-3525648834412504166LL))));
                    arr_10 [8LL] &= arr_4 [i_1] [12LL] [i_1];
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        var_12 ^= ((((/* implicit */_Bool) ((9223372036854775807LL) & (arr_4 [i_3] [1LL] [i_3])))) ? ((-(-7826345360457296547LL))) : (-2180209343350150560LL));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_13 -= ((/* implicit */long long int) ((arr_1 [i_3 + 2]) <= (((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (arr_7 [i_3] [0LL]) : (562949684985856LL)))));
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_14 = arr_19 [i_3 - 1] [i_5 + 1];
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_6])) ? (arr_17 [5LL] [i_4] [i_4]) : (arr_11 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5377908739581459159LL)))))) : (9223372036854775807LL));
                    }
                } 
            } 
            arr_20 [i_4] [i_4] [i_3] = ((arr_1 [i_3 + 1]) + (arr_8 [i_3 + 2]));
            var_16 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3])))))));
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_17 = ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) < (-1LL)));
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                for (long long int i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 3) /* same iter space */
                        {
                            arr_31 [15LL] [i_7] [15LL] [i_7] [i_8] [15LL] = ((((/* implicit */_Bool) ((arr_5 [17LL] [17LL] [i_10] [17LL]) >> (((arr_7 [i_3] [10LL]) + (3424600329512980190LL)))))) ? (arr_15 [i_3 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775796LL)))))));
                            var_18 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_1 [i_9])) && (((/* implicit */_Bool) -3595403710759866199LL))))));
                        }
                        for (long long int i_11 = 2; i_11 < 14; i_11 += 3) /* same iter space */
                        {
                            arr_34 [i_3] [i_8] [i_8] [i_9] [i_8] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 35180077121536LL)) || (((/* implicit */_Bool) ((arr_6 [i_3] [i_8] [i_8] [i_11]) + (5377908739581459146LL))))));
                            var_19 = (+(arr_7 [i_3] [i_7]));
                        }
                        var_20 = ((((/* implicit */_Bool) (+(-8192LL)))) ? (-5LL) : (arr_11 [i_3]));
                        /* LoopSeq 4 */
                        for (long long int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                        {
                            var_21 = arr_0 [i_8] [i_7];
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -710039094530845987LL))));
                            var_23 = ((((arr_13 [i_3] [i_3]) / (-2562038206465381053LL))) | (((-6153544848798668234LL) | (arr_30 [i_3] [i_3] [i_7] [i_7] [i_9] [i_9] [i_12]))));
                        }
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_8 [i_9]) : (-9223372036854775787LL)))) ? (arr_16 [i_3] [i_7] [i_7] [15LL]) : (9223372036854775788LL)))));
                            arr_39 [i_8] [i_8] [15LL] [6LL] [i_8] = -9223372036854775804LL;
                        }
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (arr_3 [i_3] [i_3])));
                            var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_3])) ? ((-9223372036854775807LL - 1LL)) : (arr_5 [i_3] [13LL] [i_14] [i_9]))) >= (arr_28 [i_3 - 2] [i_3 - 2] [i_8 + 1])));
                            arr_44 [i_8] = ((((((/* implicit */_Bool) 5377908739581459174LL)) && (((/* implicit */_Bool) -1LL)))) ? (459944225537970191LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -8701407723338751212LL)) || (((/* implicit */_Bool) 945107907639572581LL)))))));
                            arr_45 [i_14] [i_8] [5LL] [i_14] = ((arr_21 [i_3] [i_3] [i_3]) / (((((/* implicit */_Bool) -375400162499212311LL)) ? (3757930402714152710LL) : ((-9223372036854775807LL - 1LL)))));
                        }
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_3] [2LL] [i_3] [i_3] [i_3] [i_3] [i_8] = ((((/* implicit */_Bool) arr_28 [i_3] [i_9] [i_3])) ? (9223372036854775799LL) : (arr_16 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9]));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [i_3] [i_8] [i_9])) ? (arr_8 [i_15]) : (arr_46 [i_15] [i_15] [i_8]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [9LL] [i_7])) || (((/* implicit */_Bool) -1576429590607781058LL)))))))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((-2278640479421566121LL) > (-3179209624847910986LL)))) << (((((((/* implicit */_Bool) -3084468701468537137LL)) ? (arr_29 [4LL] [4LL]) : (arr_7 [i_8] [i_9]))) - (8837411009558386611LL)))));
                            var_30 = arr_37 [i_9] [i_9];
                        }
                        var_31 = ((arr_2 [i_3 - 2] [i_3 - 2]) + (arr_2 [i_3 - 2] [i_3 - 2]));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_16 = 1; i_16 < 13; i_16 += 2) 
    {
        var_32 &= 9223372036854775787LL;
        arr_53 [i_16] [i_16] = 5278556104210504052LL;
        var_33 = ((((((/* implicit */_Bool) 3757930402714152710LL)) ? (-9223372036854775774LL) : (-7264486035018685173LL))) + ((+(1048575LL))));
        var_34 = ((((/* implicit */_Bool) arr_48 [i_16] [i_16 + 1] [i_16 - 1] [i_16 + 1])) ? (-7264486035018685173LL) : (((((/* implicit */_Bool) arr_5 [i_16] [i_16] [i_16] [i_16])) ? (arr_19 [i_16] [5LL]) : (15LL))));
    }
    var_35 |= var_5;
}
