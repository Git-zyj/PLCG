/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11667
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (((((var_1) + (9223372036854775807LL))) >> (((7276928397988749119ULL) - (7276928397988749077ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : ((-2147483647 - 1))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) (unsigned char)255)))))) / (((((/* implicit */_Bool) var_8)) ? (7276928397988749119ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_1] [i_2])) ? (((/* implicit */int) (short)508)) : (arr_12 [i_1] [i_2]))), ((+(arr_12 [i_0] [i_3]))))))));
                                var_19 = ((/* implicit */long long int) min(((-(max((11169815675720802469ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))), (((/* implicit */unsigned long long int) var_13))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) (_Bool)1);
                arr_13 [i_0] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (7276928397988749120ULL)))) ? (arr_0 [i_0] [(signed char)5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))) < (min((min((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])), (arr_2 [i_1]))), (var_1))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                                arr_20 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_4 [i_5 + 1])), ((unsigned char)92)))), (var_15)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (short i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            {
                arr_26 [i_8] &= ((/* implicit */short) ((((/* implicit */int) var_13)) <= (var_3)));
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) 2781906610U);
                                var_23 = (+(var_14));
                                var_24 = max((((arr_24 [i_9 + 1]) / (((unsigned long long int) arr_37 [i_8] [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8]))) / (7276928397988749118ULL))))))));
                                arr_39 [i_8] [i_8] [i_10] [i_12] [i_12] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) | (((arr_32 [i_8] [i_9] [i_9 - 2]) >> (((836546433) - (836546409)))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((/* implicit */long long int) min((arr_34 [i_9 + 1] [i_9] [i_9] [i_9 - 1]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 4294967295U)) > (arr_31 [i_8] [i_9] [i_8]))))))), (min((((long long int) (short)1)), (((/* implicit */long long int) (-(62898374)))))))))));
                /* LoopNest 2 */
                for (signed char i_13 = 3; i_13 < 23; i_13 += 3) 
                {
                    for (short i_14 = 3; i_14 < 23; i_14 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_35 [i_8] [i_8] [i_8] [i_13] [i_14] [i_14]) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [i_13]))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)28758))))) || (((/* implicit */_Bool) 2147483647)))))));
                            var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_41 [i_9 - 2] [i_14] [i_14 + 1])) ? (min((arr_44 [i_8]), (arr_44 [i_8]))) : (arr_36 [19] [i_8] [i_13] [19] [i_14] [i_13] [i_14])))));
                            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_8] [i_9 - 1] [i_8]))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((int) arr_40 [i_14 - 2] [i_14] [i_14 - 2])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_14 - 2] [i_14 - 2] [i_14]))))))))));
                        }
                    } 
                } 
                arr_45 [i_8] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_37 [i_9 - 2] [i_9 + 1])), (((((/* implicit */unsigned long long int) arr_42 [i_8] [i_9])) ^ (var_5))))) != (min((((/* implicit */unsigned long long int) var_1)), (arr_31 [i_9 - 1] [i_9 - 1] [i_9 + 1])))));
            }
        } 
    } 
}
