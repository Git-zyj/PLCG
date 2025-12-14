/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144497
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
    var_15 = ((/* implicit */signed char) ((-6902855376328572346LL) | (2305842459457880064LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 |= ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (short)-9824)) : (((/* implicit */int) var_10))))) : (arr_3 [i_0] [i_1])));
                arr_6 [i_0] [i_1] = ((((/* implicit */long long int) 540045248)) / (min((arr_5 [i_1]), (((/* implicit */long long int) var_5)))));
                var_17 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) var_13)) == (-459771393650598981LL)))), (((min((arr_2 [i_0]), (((/* implicit */long long int) var_11)))) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-31618)) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_3])))));
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */long long int) max((var_13), (((/* implicit */int) (short)-31626))))) : (((long long int) (signed char)38)))) / (-6117256692439106919LL)));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (-6117256692439106944LL) : (((/* implicit */long long int) var_13)))) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 6117256692439106918LL))))), (-14LL))) : (arr_4 [i_0] [i_2])));
                            }
                            for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */long long int) ((signed char) (((!(((/* implicit */_Bool) (signed char)6)))) && (((/* implicit */_Bool) max((3182678541026710209LL), (((/* implicit */long long int) var_12))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3LL))))))))) ? (((/* implicit */int) ((short) var_8))) : (((int) ((signed char) var_7)))));
                                var_22 &= min((((min((3009989767658767457LL), (-2157440013603878599LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (min((-6117256692439106919LL), (((/* implicit */long long int) arr_10 [i_2 + 2])))));
                                var_23 = ((/* implicit */short) (!((((+(((/* implicit */int) (signed char)-119)))) <= (((((/* implicit */_Bool) (short)-31613)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)31625))))))));
                                arr_20 [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))));
                            }
                            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)30142)) / (var_13)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
                                var_25 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_6)))));
                                var_26 = ((signed char) max((var_4), (var_4)));
                            }
                            for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                var_27 &= var_0;
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) var_7);
                            }
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) var_4);
                            var_28 = ((/* implicit */short) var_14);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (int i_9 = 1; i_9 < 16; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_36 [i_0] [i_0] [i_8] [i_0] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min(((short)32761), (var_9))), (arr_27 [i_10]))))));
                                var_29 *= ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */short) var_4)))), (((/* implicit */short) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (min((((/* implicit */int) arr_7 [i_13])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_13] [i_14] [i_14])) : (((/* implicit */int) (signed char)64))))))));
                                var_31 &= ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_13))))))) : (((/* implicit */int) var_10)));
                                arr_48 [i_15] [i_14] [i_14] [i_13] [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (short)-9663)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((~(arr_22 [i_11] [i_12] [i_11] [i_11])))))))));
                    var_33 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((~(arr_31 [i_11] [i_12] [i_12] [i_12])))));
                    arr_49 [i_11] = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) * (((/* implicit */int) ((signed char) var_14)))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */int) ((signed char) var_6));
}
