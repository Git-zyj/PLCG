/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129785
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 3] [i_2] = ((/* implicit */unsigned char) arr_4 [i_1] [i_0 + 1] [i_0 - 4]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_5))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] |= ((/* implicit */unsigned int) min((((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_13 [i_0] [6LL] [i_2] [i_3] [i_4]))))) / (((/* implicit */int) min((arr_12 [i_0] [i_1] [i_1]), (((/* implicit */unsigned char) arr_3 [i_3]))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6947486000711814995ULL)) && (((/* implicit */_Bool) (short)-8352)))))) < (((((/* implicit */_Bool) (unsigned short)23604)) ? (15787338294448195276ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0 - 2] [i_1])))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), (var_9)))), (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_6);
                                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2759769389U)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_24 [(unsigned short)14] [i_6] [(signed char)12] [i_7] [i_9]), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */long long int) arr_26 [i_5] [i_6] [i_5] [i_8] [i_6] [i_5])) ^ (arr_19 [i_5]))))), (((/* implicit */long long int) (unsigned short)29474))));
                                var_17 = ((/* implicit */signed char) -1804050893868157258LL);
                            }
                        } 
                    } 
                    arr_28 [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) arr_14 [i_5] [i_6] [i_6] [i_7 + 1] [i_7]);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_10 = 2; i_10 < 14; i_10 += 3) /* same iter space */
        {
            arr_32 [i_5] [i_5] = ((/* implicit */long long int) arr_26 [i_5] [i_5 - 1] [i_10] [i_10] [i_10] [i_10 - 2]);
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 3) /* same iter space */
            {
                arr_35 [i_5] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_5 - 1] [(signed char)0] [i_5 - 1] [i_5] [i_5 - 1]))))) < (arr_19 [i_5 - 1])));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_4))));
            }
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 3) /* same iter space */
            {
                arr_38 [i_5 - 1] [i_10 + 1] [i_10 + 1] [i_12 + 1] = ((/* implicit */long long int) min(((-(((4414324039619370489ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), ((~(((((/* implicit */_Bool) 16581626689157320048ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5 - 1] [(signed char)2] [(signed char)2] [5]))) : (14032420034090181127ULL)))))));
                arr_39 [(unsigned char)2] [i_10] [i_12] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)202)) || (((/* implicit */_Bool) 5714557683418069802LL))));
                arr_40 [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_11 [i_5 - 1] [i_10 + 1])), (max((((/* implicit */unsigned int) var_4)), (1192129569U))))), (((/* implicit */unsigned int) arr_17 [i_12]))));
                arr_41 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_27 [i_5]), (((/* implicit */unsigned long long int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1865117384552231566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_10] [i_12])))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [9ULL]) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (677140005100962230ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_5] [i_10] [i_10] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2759769389U)))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
            }
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned long long int) (+((-(arr_43 [i_13 + 1] [i_10] [i_10 - 1] [i_5 - 1])))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (signed char)48))));
            }
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10 - 2]))) % (12552589261760929749ULL))) != (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [14LL] [i_10] [i_10])), (var_8)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_5] [i_5] [i_5 - 1]))))) : (((((/* implicit */_Bool) 6493700133314780598LL)) ? (9836569397500577651ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
        }
        for (short i_14 = 2; i_14 < 14; i_14 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_5] [i_14]));
            var_23 = ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) arr_13 [8U] [i_5] [i_5] [19LL] [13U])) : (((/* implicit */int) var_4)));
        }
        for (short i_15 = 2; i_15 < 14; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_16 = 3; i_16 < 13; i_16 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) var_3);
                var_25 = var_5;
            }
            arr_51 [i_15] [8U] [i_15] = ((/* implicit */signed char) ((((unsigned int) (short)17881)) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))))))));
            arr_52 [i_15] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) : (arr_44 [i_5 - 1]))));
            var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_5 - 1])) ? (((/* implicit */int) arr_3 [i_5 - 1])) : (-472449177))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) 2941145061754377617ULL))))), (arr_13 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5]))))));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_23 [i_5 - 1] [i_15]))));
        }
        for (short i_17 = 2; i_17 < 14; i_17 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 15; i_18 += 3) 
            {
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    {
                        var_28 = ((/* implicit */signed char) max((472449177), (((((/* implicit */_Bool) 15505599011955173999ULL)) ? (((/* implicit */int) arr_21 [i_19] [i_17 - 2] [1LL])) : (((/* implicit */int) arr_45 [i_19]))))));
                        arr_61 [i_5 - 1] [i_18] [i_17 - 2] [i_5] [i_17] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (17093269792354658064ULL) : (13264586569992658368ULL)));
                        arr_62 [i_18] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 660158294U)) ? (((((/* implicit */_Bool) (short)8375)) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17]))) : ((-(var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)10)), (var_3))) < (((/* implicit */unsigned long long int) arr_42 [i_5] [1ULL] [i_18]))))))));
                        var_29 &= ((/* implicit */short) ((unsigned long long int) ((max((((/* implicit */long long int) (short)-8390)), (arr_55 [i_18] [i_17 - 1]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_5])))))))));
                        arr_63 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) arr_31 [i_17 + 1] [i_5 - 1] [i_5 - 1]);
                    }
                } 
            } 
            arr_64 [i_17 - 1] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12552589261760929741ULL)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) arr_45 [i_5]))));
            arr_65 [i_5] |= ((/* implicit */short) max((((unsigned long long int) (+(((/* implicit */int) arr_45 [i_17]))))), (((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]))));
        }
    }
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((var_8), (((/* implicit */long long int) (~(((/* implicit */int) (short)8352))))))))));
}
