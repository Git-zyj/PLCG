/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110450
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
    var_16 *= min((((/* implicit */signed char) ((_Bool) ((signed char) var_10)))), (var_12));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((((long long int) var_4)), (max((1152921504606846975LL), (((/* implicit */long long int) var_2)))))) : (var_3)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_12))))), ((-(-1922665825779865727LL))))), (((/* implicit */long long int) ((_Bool) (signed char)58)))));
        var_20 = var_0;
        var_21 = ((/* implicit */long long int) max((var_21), (((((min((var_4), (((/* implicit */long long int) (signed char)40)))) / (((long long int) var_3)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) - (3535267151011718652LL)))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_4 [(signed char)12] [i_1] = ((/* implicit */signed char) max((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)-58)))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((_Bool) var_2)) ? (min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */int) var_13)) & (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_12)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_3] [i_2])) : (((/* implicit */int) var_12)))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * (((/* implicit */int) arr_9 [i_1] [i_3] [i_3] [i_3]))))));
                var_24 = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) min(((_Bool)1), ((_Bool)1))))), ((-(((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [(signed char)3]))))));
                var_25 += ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_7 [i_1])))));
            }
            for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
            {
                var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8))))))) >> (((((var_8) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)45)))))))) - (198155442495059864LL)))));
                var_27 = ((/* implicit */signed char) max((var_27), (((signed char) ((var_6) ? (arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 2]) : (var_11))))));
                arr_12 [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ^ (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)102))))));
            }
            arr_13 [i_1] [i_2] [i_2] = min(((-(arr_11 [i_1]))), (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                arr_17 [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-38))));
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))), (((/* implicit */long long int) (_Bool)1))))));
            }
        }
        /* LoopSeq 2 */
        for (signed char i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                arr_24 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_23 [i_6 + 1] [i_6 + 1] [i_6] [i_6]), (((/* implicit */signed char) arr_9 [i_6 - 2] [i_1] [i_6 - 2] [i_6 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) : (((long long int) arr_23 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6 - 3]))));
                var_28 = ((/* implicit */long long int) var_7);
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_10 [i_1] [i_1] [i_1]))) | (((/* implicit */int) var_7))));
            }
            arr_25 [i_1] [i_6] [i_6 - 3] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) arr_6 [i_6 - 3] [i_6 - 3] [(signed char)15]))), (min((((var_2) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)127))))));
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_30 = ((/* implicit */long long int) ((_Bool) (signed char)-68));
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    for (long long int i_11 = 1; i_11 < 15; i_11 += 4) 
                    {
                        {
                            arr_35 [i_1] [i_8] [i_10] [i_11 + 1] [i_8] = min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_14))))) && (((/* implicit */_Bool) ((long long int) var_5)))))));
                            var_31 = min((min((var_8), (arr_22 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) ((signed char) var_6))));
                            var_32 = ((((arr_11 [i_10]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)40), ((signed char)50))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (var_8))));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_33 = var_2;
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_13])) : (((/* implicit */int) max((var_15), (((signed char) var_4)))))));
                            var_35 ^= ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                arr_44 [i_8] [i_12] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                var_36 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) (_Bool)0))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */int) (signed char)3)) >> (((3862925118382589671LL) - (3862925118382589641LL))))) : ((~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))))));
            }
            var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_2))))) ? (min((arr_15 [i_1] [i_1] [i_1] [i_8]), (((/* implicit */long long int) var_10)))) : (max((var_9), (arr_15 [i_1] [i_1] [i_1] [i_8]))));
            arr_45 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_8] [i_8])) ? (var_0) : (var_1)))) ? (min((arr_15 [i_1] [1LL] [4LL] [i_1]), (((/* implicit */long long int) (signed char)-18)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_11))))));
            var_38 = max((((arr_26 [i_8] [i_8] [i_1]) ? (-7587245915261506390LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))), (((/* implicit */long long int) ((_Bool) arr_37 [i_1] [i_8] [i_1] [i_1]))));
        }
    }
    for (long long int i_15 = 4; i_15 < 9; i_15 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                for (signed char i_18 = 3; i_18 < 12; i_18 += 1) 
                {
                    {
                        var_39 = ((long long int) ((_Bool) (((_Bool)0) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                        var_40 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) arr_37 [i_18] [i_17] [i_16] [i_18]))))) ? ((+(7039957193926732402LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_15 + 1] [i_15 + 2] [i_18] [i_18]))))), (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) arr_46 [i_15 + 3] [i_16]))))))));
                        arr_58 [i_18] [i_18] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_33 [i_15] [i_15] [i_18] [i_18] [i_16]), (arr_33 [i_15] [i_15 - 4] [i_15 + 4] [i_15 - 4] [(_Bool)1])))), (((var_6) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_33 [i_17] [i_17] [i_17] [i_17] [i_17]))))));
                        var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((-9223372036854775795LL), (((/* implicit */long long int) (signed char)-40)))), (((((/* implicit */_Bool) var_15)) ? (arr_40 [i_15 - 1] [i_16] [i_17] [i_16] [i_15 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-38)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_15 - 2] [i_16] [i_18])) % (((/* implicit */int) (_Bool)1))))) ? (-1LL) : (((long long int) var_0)))) : (min((min((((/* implicit */long long int) (signed char)-40)), (var_8))), (((/* implicit */long long int) ((_Bool) arr_48 [i_17])))))));
                    }
                } 
            } 
            var_42 ^= ((/* implicit */_Bool) ((((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_15])) : (((/* implicit */int) (signed char)30))))) & (arr_22 [i_15] [i_15] [(_Bool)1])));
        }
        var_43 = ((/* implicit */_Bool) min((((((/* implicit */int) ((_Bool) var_6))) ^ (((/* implicit */int) var_14)))), (((/* implicit */int) min(((signed char)127), (var_15))))));
    }
    var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
