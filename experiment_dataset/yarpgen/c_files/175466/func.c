/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175466
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) var_6);
                var_12 = ((/* implicit */_Bool) var_3);
                var_13 -= ((/* implicit */signed char) arr_1 [8]);
                arr_6 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) (~(((/* implicit */int) arr_3 [11U] [11] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 ^= ((/* implicit */int) arr_2 [15] [i_2] [i_2]);
                /* LoopSeq 4 */
                for (unsigned char i_4 = 4; i_4 < 9; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4 - 2] [i_5 + 2] [i_2 - 2])) >= (((/* implicit */int) arr_2 [i_4 + 1] [i_5 + 2] [i_2 - 2]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8782282647269176387ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3] [i_2]))) * (8782282647269176387ULL)))))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_15 [(short)2] [i_4]) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)29)))))))) % (max((((/* implicit */int) arr_12 [i_2 - 2] [i_2 + 1])), ((((_Bool)1) ? (((/* implicit */int) arr_8 [(signed char)6] [i_5])) : (((/* implicit */int) var_7)))))))))));
                        arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2] [i_2 + 1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned long long int) var_4)), (8782282647269176387ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)127))))))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_17 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-55)) + (((/* implicit */int) (unsigned char)86))))));
                            var_18 = ((/* implicit */unsigned long long int) ((arr_1 [i_3]) ^ (arr_1 [i_3])));
                            var_19 = ((/* implicit */_Bool) (+(arr_18 [i_3] [i_4 - 4] [i_6 - 1] [i_7] [i_2 - 1] [i_4])));
                            var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            var_21 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15799345085360597682ULL)) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) var_0)))))));
                        }
                        arr_23 [i_6] [i_3] [i_3] [(short)7] = ((/* implicit */unsigned char) ((_Bool) 2147483647));
                    }
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */int) ((unsigned char) 574208952489738240ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((3258325153425893831LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_4] [i_8] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)))) ? (max((var_5), (((/* implicit */long long int) (signed char)-1)))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (arr_20 [i_2]))))))));
                        arr_26 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+((-((~(((/* implicit */int) var_9))))))));
                        arr_27 [i_2] [i_3] = ((/* implicit */unsigned short) 574208952489738231ULL);
                        var_23 = ((/* implicit */unsigned short) 68719411200LL);
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -728145381)) ? ((+(arr_10 [i_2 - 1] [i_2 - 1]))) : (((((/* implicit */_Bool) var_5)) ? (arr_10 [i_2 + 1] [0LL]) : (arr_10 [i_2 + 1] [i_2 - 2])))));
                    }
                    arr_28 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (-(var_5))));
                    var_25 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3761665979U)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54722))) : (arr_22 [i_2] [i_2 - 2] [(unsigned char)9] [i_2 - 1] [i_2 + 1] [i_2]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2] [i_3] [i_3])))))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-107)) / (33292288)));
                    var_27 += (!(((/* implicit */_Bool) 7U)));
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) max((min((((/* implicit */int) arr_14 [(_Bool)1] [i_3] [i_3])), ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (signed char)-1))));
                    arr_31 [8LL] [i_2] [i_3] [i_9] &= ((/* implicit */unsigned long long int) ((long long int) (+(max((var_5), (4593232375582149216LL))))));
                }
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    arr_35 [i_2 + 1] [i_3] [i_3] = ((/* implicit */signed char) arr_19 [i_2]);
                    arr_36 [7ULL] [7ULL] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2] [6ULL]))))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 2]))))), (((/* implicit */unsigned long long int) (-(((var_5) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_10] [i_3] [i_2 - 2]))))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_2 - 2]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_43 [i_2 - 1] [6LL] [i_3] [i_12] = ((((/* implicit */_Bool) (short)24601)) ? (((/* implicit */unsigned long long int) -155403635)) : (arr_18 [i_3] [i_3] [i_3] [i_2 - 1] [i_3] [i_12]));
                        var_30 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 2])) - (75)))))));
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_9))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 4; i_13 < 6; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_33 *= ((/* implicit */unsigned long long int) (!(arr_2 [i_14] [i_14] [(signed char)2])));
                            arr_48 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (short)-1))) & (((/* implicit */int) (signed char)-127))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_29 [i_2 + 1] [i_3] [i_13] [i_3]))));
                            var_34 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_11 [i_13 - 4])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
