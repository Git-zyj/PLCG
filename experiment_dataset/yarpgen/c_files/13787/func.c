/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13787
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
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_12)) - (95))))), ((-(((/* implicit */int) (short)8190))))));
    var_17 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) 4371029702541389314LL)))), (((/* implicit */unsigned long long int) (((-(1875705910))) == (((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((-906351013) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [(unsigned char)7])) - (252))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_19 = var_8;
                        var_20 = ((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4]) ? (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned long long int) -906351016)))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (arr_1 [i_0])));
                    }
                    for (int i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        var_22 += ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_5 [6ULL] [i_5] [i_1])));
                        arr_18 [i_0] [i_0] [i_2] [4ULL] [i_3] [i_0] [i_5 + 3] = ((/* implicit */unsigned long long int) arr_5 [(unsigned char)2] [i_2] [i_0]);
                    }
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -906351013)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_0] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73))))) : (arr_17 [i_0] [i_0])));
                    arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))) ^ (((var_3) % (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_3] [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_23 [i_6] [i_6] [i_3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_20 [i_0]) == (arr_7 [i_1] [i_2] [i_2])));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) ? (arr_10 [i_0] [i_0] [i_3] [i_6]) : (((/* implicit */unsigned int) -906351013))));
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_6])) | (255)));
                        var_25 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) -906351016)) : (17667822278688120033ULL));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16789486313536988927ULL)) ? (906351012) : (((((/* implicit */int) (_Bool)0)) ^ (-906351032)))));
                    }
                    arr_25 [(signed char)4] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [i_1]);
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                    var_28 = ((/* implicit */unsigned long long int) ((-585943554) | (((/* implicit */int) arr_13 [i_0] [i_2]))));
                    var_29 = ((/* implicit */long long int) ((unsigned int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7]));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)42)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_7]))));
                }
                var_31 -= ((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) > (((/* implicit */long long int) -1)))))) ^ (arr_21 [i_2] [i_2] [i_1] [i_0] [i_0]));
            }
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
            {
                arr_31 [i_1] [i_0] = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [(unsigned short)7] [i_8] [i_8]);
                arr_32 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */int) var_0);
            }
            arr_33 [6] [i_0] = ((/* implicit */unsigned char) ((arr_28 [i_1] [i_1] [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) arr_28 [i_0] [3U] [3U] [i_0]))));
            arr_34 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (-(arr_1 [i_0])));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 3; i_9 < 12; i_9 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9 + 1])) ? (((/* implicit */int) arr_0 [i_9 - 2])) : (((/* implicit */int) (signed char)-127))));
                var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_9] [i_0] [i_9 - 2] [i_9 - 2]))));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    arr_41 [i_0] = ((/* implicit */long long int) (signed char)91);
                    arr_42 [i_0] [i_0] [i_9] [i_9 - 2] [i_9 - 2] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_9 - 2]))));
                    arr_43 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [(_Bool)1] [(signed char)10] [i_9] [i_9 - 3])) >= (((/* implicit */int) arr_30 [i_9] [i_1] [i_9] [i_9 - 3]))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) arr_8 [i_9 - 2] [i_9 + 1] [i_9 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) arr_40 [i_9 + 1] [i_9 - 3]);
                        arr_49 [i_9 - 1] [i_0] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) ^ (arr_7 [i_0] [i_1] [i_1]))));
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -906351013)) ? (((/* implicit */int) arr_44 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) arr_35 [(unsigned short)9] [i_9] [i_9])) : (12031265367565155268ULL)));
                        var_36 -= ((/* implicit */int) ((unsigned short) ((2872954732711961528LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                {
                    var_37 = arr_15 [i_13] [(_Bool)0] [i_9 + 1] [i_13];
                    var_38 *= ((((/* implicit */unsigned long long int) -1)) | (arr_39 [i_9 - 3] [i_13] [i_13] [i_13] [i_13]));
                }
            }
            for (unsigned char i_14 = 3; i_14 < 12; i_14 += 4) /* same iter space */
            {
                var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_27 [i_1] [i_14 - 1] [i_14] [i_14 - 3])) ^ (((unsigned long long int) var_4))));
                var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                arr_55 [i_0] [i_0] [i_14] = ((((/* implicit */_Bool) (short)-2)) ? (2948914553000858427ULL) : (6415478706144396347ULL));
                var_41 -= ((arr_14 [i_0] [i_0] [i_1] [i_0] [i_14] [i_14 - 2] [i_14 - 2]) ^ (arr_14 [i_0] [3] [i_1] [i_1] [3] [i_14] [(unsigned char)0]));
            }
        }
        arr_56 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_2) > (17328026564830140718ULL)))), (min((((/* implicit */int) (unsigned char)242)), (-906351016)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-4096)) | (arr_38 [11ULL] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12311664660718345713ULL)) && (((/* implicit */_Bool) var_7)))))) : (max((((/* implicit */unsigned long long int) arr_48 [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_30 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) 817045214)) : (min((((/* implicit */long long int) (signed char)96)), (6665256177210534263LL))))))));
        arr_57 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_4 [i_0] [i_0] [i_0])))) ? ((-(((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(arr_27 [i_0] [i_0] [i_0] [i_0])))) : (((((((/* implicit */_Bool) (short)31963)) ? (4411285414849696824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))))) ^ (((unsigned long long int) 16789486313536988927ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
    {
        arr_60 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) 18444492273895866368ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56543)) | (-1858202552)))) : (0LL)));
        arr_61 [i_15] = ((/* implicit */unsigned char) 4526848912857260670LL);
        var_42 = ((/* implicit */long long int) arr_12 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
    {
        arr_64 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_16])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_63 [i_16]))));
        var_43 = ((/* implicit */unsigned int) var_13);
    }
    for (unsigned short i_17 = 1; i_17 < 9; i_17 += 3) 
    {
        arr_67 [i_17] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((unsigned int) arr_26 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)28)) && (((/* implicit */_Bool) var_15)))))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_17 + 1] [i_17] [i_17])))));
        arr_68 [i_17] = ((/* implicit */unsigned char) var_10);
        arr_69 [i_17] [3U] = ((/* implicit */int) ((((((/* implicit */_Bool) 8431462226012688692LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (-8431462226012688715LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_17 + 1] [i_17 - 1])) : (((/* implicit */int) arr_46 [i_17] [i_17 + 1])))))));
    }
}
