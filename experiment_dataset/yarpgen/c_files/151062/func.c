/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151062
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_6 [i_0])), (max((((/* implicit */long long int) var_12)), (arr_0 [i_0] [i_2])))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_6))))), (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) ((signed char) arr_3 [i_1] [i_2]))))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned short)51818)) || (((/* implicit */_Bool) -1287904382))))))));
                    arr_9 [i_2] [i_2] = ((int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0]))))), (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_14);
    /* LoopSeq 2 */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            var_22 &= ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (_Bool)1)), ((+(3853359588U)))))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((((/* implicit */int) var_14)) & (((/* implicit */int) min((var_1), (var_5)))))))))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((min((arr_12 [i_5 + 3]), ((short)-25355))), (((/* implicit */short) ((_Bool) arr_12 [i_5 + 1]))))))));
                var_25 += ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_26 -= min(((+(((/* implicit */int) arr_10 [i_5 + 3])))), (((/* implicit */int) arr_10 [i_5 - 1])));
                    arr_21 [i_3] [i_4] [i_5] [9] [i_5] [7] = ((/* implicit */int) ((((/* implicit */int) var_18)) != (max((((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned short)65535)) - (65532))))), (((/* implicit */int) arr_1 [i_5] [i_4 - 2]))))));
                    var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) 441607699U)), (8883840698213287907LL))), (((/* implicit */long long int) min((2052575045), (((/* implicit */int) (unsigned short)27650)))))))) ? (var_16) : (((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) * (((((/* implicit */_Bool) 2954395285386614817LL)) ? (((/* implicit */long long int) 0U)) : (2954395285386614839LL)))))));
                    arr_22 [i_3 + 1] [(_Bool)0] [(_Bool)0] &= ((/* implicit */int) (-(2954395285386614845LL)));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((((arr_4 [i_5 - 1] [i_4 - 1] [i_3 + 1]) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_4 + 3] [i_3 + 1])) : (((/* implicit */int) arr_4 [i_5 + 3] [i_4 + 3] [i_3 - 1])))), (max((((/* implicit */int) (_Bool)1)), (((int) var_11)))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_29 -= ((/* implicit */int) max((((/* implicit */long long int) var_5)), (max((min((arr_0 [i_3] [i_5]), (((/* implicit */long long int) arr_16 [i_4] [i_4] [i_7])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_3] [i_4 + 2] [(_Bool)1])))))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(var_16))))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) -26)) ? (2954395285386614798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (unsigned short)19705))));
                        arr_31 [i_3] [i_5] [i_5] [(unsigned short)0] [i_9] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((arr_26 [i_3] [i_9] [i_3] [i_7] [i_9]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
                        var_33 += ((/* implicit */unsigned int) (~(min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_17))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)50724)), (-6449073322659905190LL))))));
                    }
                    var_35 -= ((/* implicit */_Bool) (signed char)51);
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((arr_3 [i_5 + 2] [i_10]) ? (-124362902222993790LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3] [6LL] [i_3 + 1]))))) & (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_5]))))))))));
                    var_37 ^= ((/* implicit */long long int) var_2);
                }
                for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_38 ^= max(((_Bool)1), (max(((_Bool)1), ((_Bool)1))));
                    var_39 ^= ((/* implicit */signed char) arr_19 [i_3] [i_4] [1] [i_5 + 3] [i_11] [i_11]);
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((_Bool) arr_28 [i_3 - 1])) ? (max((((/* implicit */unsigned int) var_12)), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_6))))) : (6U))))));
                    var_41 += ((/* implicit */int) arr_3 [1] [i_11]);
                }
                var_42 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)5676))) & (9223372036854775807LL)));
            }
            for (short i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) min((((((/* implicit */int) var_8)) * (((/* implicit */int) var_1)))), (min(((+(((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_13 [i_3])))))))))));
                            var_44 += ((/* implicit */unsigned short) ((unsigned int) (+((+(var_16))))));
                            arr_44 [i_3] [i_4] [i_4 + 3] [i_12] [i_4 + 3] [i_13] [(_Bool)1] = arr_30 [0LL] [0LL] [i_12] [i_12];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_15 = 1; i_15 < 8; i_15 += 3) 
                {
                    var_45 -= ((/* implicit */unsigned short) arr_19 [i_3] [i_3] [i_3] [i_3] [i_4] [i_12]);
                    arr_47 [i_3] [i_15] [i_15] = ((/* implicit */short) min((var_2), ((!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (short)-32739)) : (((/* implicit */int) var_0)))))))));
                }
                arr_48 [i_3] [i_3] [(signed char)8] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_3]))));
                var_46 -= ((/* implicit */unsigned int) (~((~(-37)))));
            }
            arr_49 [i_3] &= ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_3 - 1] [i_4 - 1])) << (((/* implicit */int) arr_3 [i_3 - 1] [i_4 + 1])))), ((+(((/* implicit */int) arr_3 [i_3 + 1] [i_4 + 2]))))));
            var_47 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20865)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -273501740)) ? (((/* implicit */int) (unsigned short)0)) : (-760133324)))) : ((~(441607729U)))));
            var_48 = ((/* implicit */int) min((var_48), (((((/* implicit */int) (unsigned short)61371)) % ((~(((/* implicit */int) arr_1 [i_3 + 1] [i_3]))))))));
        }
        var_49 ^= ((/* implicit */int) var_3);
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 12; i_16 += 2) 
    {
        var_50 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_12))))));
        arr_54 [i_16] [(_Bool)0] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)3)))) & (((/* implicit */int) var_7))));
        arr_55 [i_16] = ((/* implicit */short) arr_2 [i_16 + 1]);
    }
}
