/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124075
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
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)10914)) ? (-5280706218928068991LL) : (-8210458465248444462LL)));
    var_15 |= (_Bool)1;
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_16 += ((/* implicit */signed char) min((min((arr_2 [i_0 - 4]), (arr_2 [i_0 + 1]))), (arr_2 [i_0 - 3])));
        var_17 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((long long int) ((int) arr_3 [i_0 - 3])));
                    var_19 &= ((/* implicit */int) (short)5541);
                    var_20 = ((/* implicit */signed char) max((((/* implicit */short) min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 2])))), (((short) var_6))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_11))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2])) ? (arr_12 [i_1] [i_2]) : (arr_12 [i_3] [1LL])))) ? (((/* implicit */int) (signed char)117)) : (min((((/* implicit */int) (short)-5537)), (arr_12 [i_0 - 4] [i_1]))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)0])), (arr_4 [i_0 + 1] [i_0])));
                            var_24 = ((((/* implicit */_Bool) max((arr_5 [i_0 - 4] [i_1] [i_4 + 1]), (((/* implicit */unsigned short) var_9))))) ? (((((/* implicit */_Bool) (short)18590)) ? (max((((/* implicit */int) var_5)), (arr_2 [i_2]))) : (arr_12 [i_4 + 1] [(unsigned char)9]))) : (((((/* implicit */int) (short)18605)) * (((/* implicit */int) (_Bool)1)))));
                            arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] [6ULL] [i_1] = ((/* implicit */signed char) arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] [(short)8]);
                        }
                        for (signed char i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_5 - 1] [i_1] [i_2] [i_3] [i_5] [i_1]))))), (((((/* implicit */_Bool) ((arr_7 [i_0] [i_2] [(unsigned short)9] [i_5 - 1]) ? (var_12) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (arr_17 [i_0 - 4]))))))));
                            arr_19 [i_0] [i_2] [i_0 - 1] [5LL] [5U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_15 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 - 2]), (((/* implicit */long long int) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)60), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_2] [i_3])))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [10LL] [i_5 - 2]))) - (arr_6 [i_0 - 3] [i_0 - 3] [i_3] [2ULL])))))));
                            var_26 = ((/* implicit */unsigned int) arr_3 [(unsigned short)8]);
                        }
                        for (signed char i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
                            arr_23 [8LL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((((~(arr_6 [i_1] [i_1] [i_3] [i_1]))) < (((/* implicit */unsigned long long int) arr_20 [i_0 - 1] [i_0 - 3] [i_0 - 4] [i_0 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 1])))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_6 - 1] [i_6 - 2]))) : ((~(((/* implicit */int) ((short) var_7)))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [3] [(signed char)5] [i_3] [9LL] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2]))) : (((long long int) var_1))));
                            var_28 = ((/* implicit */_Bool) var_13);
                        }
                        for (signed char i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                            arr_27 [3] [i_2] = ((/* implicit */unsigned short) min((min((arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_2]), (arr_20 [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 1] [(unsigned short)1]))), (arr_20 [i_0 - 2] [i_0] [i_0] [i_0] [3] [i_0 + 1] [i_0])));
                            var_30 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [2LL] [i_2] [i_7])) ? (arr_20 [i_7] [i_3] [i_0] [i_2] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_1 [(signed char)4]))))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_10 [i_2] [i_2])))))) | (((((/* implicit */_Bool) ((signed char) arr_2 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_26 [i_2] [i_0 - 3] [i_1] [i_2] [i_3] [i_3])), (arr_25 [i_0] [i_1] [i_0 - 2] [i_3] [i_1]))))) : (((unsigned long long int) (signed char)-108)))));
                        }
                        arr_28 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((int) var_10))))) ? ((~(((((/* implicit */int) (_Bool)1)) ^ (-577465744))))) : ((~(((arr_20 [i_0] [i_0] [i_1] [i_1] [(short)3] [i_3] [i_3]) % (((/* implicit */int) arr_7 [(signed char)4] [i_1] [i_2] [i_3]))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_9 = 2; i_9 < 10; i_9 += 3) 
                        {
                            var_31 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5546))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)))));
                            arr_35 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) var_1);
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_7))));
                            var_33 |= arr_13 [i_0] [i_0] [i_2] [i_8] [0LL] [i_10];
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [(short)9] [i_0 - 2] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5547)))));
                            var_35 &= (short)5547;
                            arr_38 [i_0] [i_2] [i_8] [i_8] = ((/* implicit */unsigned short) (-(arr_10 [i_2] [i_0 - 4])));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_43 [5] [i_2] [5] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_9 [(short)3] [10U] [i_2] [i_1] [(_Bool)1] [i_0])))))))) | ((+(((/* implicit */int) ((3356722641982770551LL) < (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                            arr_44 [i_8] [4] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)143)) | ((((_Bool)1) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (signed char)119))))))) ? (min((((/* implicit */int) arr_39 [i_11] [i_0] [i_0 - 2] [i_0] [i_0])), (((int) arr_24 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_8] [i_0 - 4] [i_2] [i_2])))) : ((~(((/* implicit */int) arr_41 [i_0] [i_1] [i_2] [3U] [i_11] [i_11] [i_0 - 1]))))));
                            arr_45 [i_2] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) arr_18 [i_0 + 1] [i_0 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 4])), (7247610093259289739LL)))));
                        }
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((int) var_7)))) ? ((+(-3356722641982770550LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_8] [(signed char)7] [(signed char)1] [(signed char)7] [(signed char)7] [i_0])) ? (arr_13 [i_0] [i_2] [10] [i_0] [i_0] [i_0 - 3]) : (((/* implicit */int) arr_26 [i_2] [i_1] [i_2] [i_8] [i_8] [i_8])))))))));
                        var_37 |= ((/* implicit */_Bool) arr_17 [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_38 = ((/* implicit */short) -8373137144798709537LL);
                            var_39 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [i_2])) ? (((/* implicit */int) arr_37 [i_2] [i_1] [i_2] [i_8] [i_12])) : (((/* implicit */int) arr_16 [(signed char)3] [i_2]))))) ? (((/* implicit */long long int) (-(arr_18 [i_12] [i_12] [5LL] [i_2] [i_1] [i_0] [i_0])))) : (((-6093969859414887974LL) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)28822)), (-3356722641982770563LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_7))))) : (max((var_10), (((/* implicit */long long int) var_0))))))));
                            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 4]))))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_31 [i_0] [i_0] [i_0] [(unsigned short)2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_1] [(short)0] [i_8] [i_8] [i_8] [(short)0]))))))));
                            var_41 = ((/* implicit */int) (short)-12059);
                        }
                    }
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27432)) ? (((/* implicit */long long int) ((int) var_1))) : (max((((/* implicit */long long int) (short)-3125)), (3356722641982770551LL)))));
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            var_43 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned short) var_11)), (var_2))));
                            var_44 = ((/* implicit */unsigned long long int) ((signed char) min((var_9), (arr_42 [i_14] [i_13] [i_13] [i_2] [i_1] [i_0]))));
                        }
                    }
                }
            } 
        } 
    }
    for (int i_15 = 1; i_15 < 12; i_15 += 4) 
    {
        arr_55 [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_15]))));
        arr_56 [i_15] = ((((/* implicit */int) (signed char)-123)) | (((/* implicit */int) (unsigned short)40234)));
        var_45 += ((/* implicit */signed char) var_13);
    }
    for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 21; i_17 += 3) 
        {
            for (int i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    {
                        var_46 = ((/* implicit */short) ((unsigned int) (~((~(888802653))))));
                        var_47 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) 1467500009734986050LL)) ? (888802653) : (-888802650))), (((/* implicit */int) var_11)))), ((+(min((arr_62 [i_19]), (((/* implicit */int) (signed char)109))))))));
                    }
                } 
            } 
        } 
        var_48 *= ((/* implicit */int) arr_60 [i_16] [(unsigned short)11] [19ULL]);
    }
}
