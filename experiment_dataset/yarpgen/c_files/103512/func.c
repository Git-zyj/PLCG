/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103512
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_4 - 4] [i_3])))) || (((((/* implicit */_Bool) arr_6 [i_4 - 2] [i_3] [i_2])) && (((/* implicit */_Bool) 2858428846758357697ULL))))));
                                var_21 = arr_8 [i_0 - 2] [i_1] [(signed char)8] [i_4];
                                arr_11 [i_0 + 1] [i_1] [(signed char)9] [i_1] [i_4 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_4 - 2]))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((arr_10 [i_4 - 4] [i_0 - 2] [i_2] [i_2]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 - 4] [i_0 - 2])) && (((/* implicit */_Bool) arr_10 [i_4 - 4] [i_0 + 1] [(signed char)8] [i_4 - 4]))))))))));
                            }
                        } 
                    } 
                } 
                var_23 = arr_2 [i_0 - 2] [i_0 - 2];
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1])) < (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0 - 1] [i_0]))));
                var_25 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1]);
                var_26 = ((/* implicit */unsigned long long int) ((arr_0 [i_1]) <= (((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 2]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2858428846758357719ULL))))) <= (((/* implicit */int) (unsigned char)79)))))));
        var_28 -= arr_13 [i_5];
    }
    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((/* implicit */int) arr_15 [i_6 - 1])), (((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_14 [i_6 + 1] [i_6 - 1])))))))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (unsigned char i_8 = 2; i_8 < 12; i_8 += 4) 
            {
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) 
                        {
                            var_30 += ((/* implicit */unsigned long long int) (unsigned char)209);
                            var_31 = ((/* implicit */unsigned long long int) arr_24 [i_6] [i_8] [i_9] [i_8]);
                            arr_28 [i_6] [i_7] [i_7] [12ULL] [i_10] = ((/* implicit */unsigned int) (signed char)4);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 15588315226951193890ULL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)255)))))));
                            arr_31 [(signed char)8] [(signed char)8] [i_11] [i_9] [i_8 - 2] = ((/* implicit */signed char) var_1);
                            var_33 &= arr_15 [i_6 + 1];
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2858428846758357697ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 - 1]))) : (8469176462646663198ULL))))));
                        }
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            var_35 -= ((/* implicit */signed char) (+(((/* implicit */int) max((arr_25 [i_6] [i_6] [i_12] [i_6] [i_9 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2858428846758357728ULL))))))))));
                            var_36 = ((/* implicit */unsigned int) (signed char)39);
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_6] [i_7] [i_8] [i_9]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_6] [i_9] [i_9] [i_9 + 4] [(unsigned char)6]))))))))) > (((((/* implicit */_Bool) max((arr_14 [i_6] [i_7]), ((unsigned char)234)))) ? (((((/* implicit */_Bool) (signed char)77)) ? (6046243326087966375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                        }
                        var_38 ^= ((/* implicit */signed char) 807086851U);
                        var_39 = ((/* implicit */signed char) max((max((arr_12 [i_8 + 1]), (67934841U))), (7U)));
                    }
                } 
            } 
        } 
        arr_35 [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_23 [i_6] [i_6 - 1])) > (((/* implicit */int) arr_23 [i_6] [i_6 + 1])))))));
    }
    var_40 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            {
                arr_44 [i_13] [i_14] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_23 [i_14] [i_14]))))));
                arr_45 [i_14] [i_14] [i_13] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_3 [i_13] [i_14] [i_14]))))));
            }
        } 
    } 
}
