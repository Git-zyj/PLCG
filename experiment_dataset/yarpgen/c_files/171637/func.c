/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171637
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((3728089923U), (3342792398U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_0]))))));
                var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 4808294633611575149ULL)) ? (13638449440097976466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (-(var_10)))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2]))))), (arr_4 [i_4])))) * (min((((((/* implicit */_Bool) arr_6 [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) 656845071U)))), (min((((/* implicit */unsigned long long int) var_3)), (arr_5 [7U] [7U] [7U])))))));
                                var_13 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -5988681305378441769LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) ? (min(((((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))))) : (((((unsigned int) (unsigned short)40742)) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) min((arr_12 [i_3 - 1] [i_2] [i_3] [i_3 - 1] [i_3 - 1]), (arr_12 [i_3 - 1] [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                                var_14 = ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) (_Bool)0)), (((var_9) ^ (8121711421356482598LL))))) + (9223372036854775807LL))) << (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)0)) >> (0U)))))));
                                var_15 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)1536))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (14887123239533415662ULL)));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(0U))))));
                        var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 + 3] [i_2])) ? (arr_5 [i_2 + 2] [i_2] [1U]) : (arr_5 [i_2 + 1] [i_2] [i_2 + 1])))));
                        var_19 = ((/* implicit */unsigned short) var_5);
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1933207477U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-1))));
                            arr_22 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((8796093022207ULL) - (8796093022183ULL)))))) ? (max((((/* implicit */unsigned long long int) arr_18 [i_1] [4ULL] [i_1] [i_2])), (4503593703318981213ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_6] [i_2] [i_2] [(signed char)3] [11ULL])) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                        }
                        var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6])) && (((/* implicit */_Bool) 1382599587206119883LL))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
                            var_24 = ((/* implicit */unsigned short) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2 + 3] [i_2])) || (((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2 + 2] [i_2]))))))));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((3418704279U) == (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 374337432U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [(unsigned short)10] [i_1]))))))))))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) max(((_Bool)1), ((!(((/* implicit */_Bool) (signed char)0))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) (((~(((3245679033U) ^ (4294967295U))))) >> (((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3968))) : (max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_24 [i_9] [i_9] [i_9] [i_9 + 1] [i_2]))))) - (3938U)))));
                            var_28 = ((/* implicit */unsigned char) min((max((arr_24 [i_0] [(unsigned char)11] [i_2] [i_9] [i_2]), ((+(arr_4 [i_9]))))), (((/* implicit */unsigned int) var_4))));
                            var_29 = ((/* implicit */unsigned int) (unsigned char)176);
                        }
                        var_30 = ((/* implicit */_Bool) 5012468095645617486LL);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            {
                                arr_36 [i_12] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)16292)))) : (((/* implicit */int) min(((unsigned short)11849), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49244)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))), (((arr_16 [i_0] [i_0] [i_0] [i_2] [i_0]) + (1905375752U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)11)))))));
                                var_31 = var_6;
                                var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)97)) >> (((var_8) - (3430849176U)))))));
                                var_33 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (signed char)-1))))), (arr_3 [i_2] [i_11]))));
                                var_34 = ((/* implicit */unsigned int) (unsigned short)55092);
                            }
                        } 
                    } 
                }
                for (long long int i_13 = 1; i_13 < 9; i_13 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */int) (signed char)106)) & (((/* implicit */int) (unsigned short)64000)))), (((/* implicit */int) ((arr_3 [4LL] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) ^ (((long long int) max((((/* implicit */long long int) (signed char)49)), (2660171970052008551LL)))))))));
                    var_36 = ((/* implicit */unsigned short) ((((6425516545565012727LL) % (419974324938289149LL))) > (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1536))) == (8121711421356482598LL))) ? (arr_16 [i_13] [i_13] [i_13] [i_1] [i_13]) : (max((arr_24 [i_1] [(signed char)4] [4ULL] [(signed char)4] [i_1]), (((/* implicit */unsigned int) var_4)))))))));
                    var_37 = arr_28 [i_0] [i_0] [i_1] [4ULL] [i_0] [i_13];
                }
                arr_40 [i_1] = ((/* implicit */signed char) min((((var_8) / (arr_23 [i_1] [10U] [i_1] [i_0] [i_0] [i_1]))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_23 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_23 [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_10)))), (((((/* implicit */_Bool) var_7)) ? (4011206658205106596LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) & (((/* implicit */long long int) var_6)))))));
}
