/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149127
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_5 [i_3]))))));
                            arr_11 [i_0] [(signed char)10] [i_0] [(signed char)2] [i_0] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(541851959)))) ? (((((/* implicit */int) (signed char)21)) ^ (1730126255))) : (((((/* implicit */_Bool) 21U)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (signed char)94))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) (signed char)-107)));
                    var_13 -= ((/* implicit */unsigned int) arr_4 [i_0]);
                    arr_16 [i_0] = ((/* implicit */int) (+(288212783965667328LL)));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (min((4294967275U), (((/* implicit */unsigned int) 1407427343)))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) -725976848)) : (288212783965667347LL)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (-288212783965667349LL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    var_15 &= max(((((+(-1488075636108672349LL))) ^ (((/* implicit */long long int) (-(5U)))))), (((/* implicit */long long int) -1706466859)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_5] [i_8] [i_8] [i_5] = ((/* implicit */short) (+(((arr_19 [i_5] [i_5]) ? (arr_28 [i_6 + 1] [i_6 - 1]) : (var_1)))));
                                arr_30 [i_5] [i_5] [0U] [i_7] [i_5] [i_8] [i_9] = ((/* implicit */signed char) ((max((max((arr_18 [i_5]), (((/* implicit */long long int) arr_28 [i_7] [i_9])))), (((/* implicit */long long int) var_1)))) < (((/* implicit */long long int) ((/* implicit */int) ((4294967274U) < (((/* implicit */unsigned int) arr_22 [i_8] [i_5] [i_5]))))))));
                                arr_31 [i_5] [i_6 + 2] [i_6 + 2] [i_8] [i_9] = ((/* implicit */signed char) (unsigned char)7);
                                arr_32 [i_9] [(_Bool)1] [i_7] [i_7] [(_Bool)1] [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (0) : (-986733799)));
                                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -1056007919))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_7] [i_8])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6] [i_6 - 1]))))) : (min((min((((/* implicit */int) arr_24 [i_7] [(signed char)0] [(signed char)4] [(signed char)0])), (1706466858))), (((((/* implicit */_Bool) 1706466878)) ? (var_1) : (256355156)))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */signed char) var_1);
                    arr_33 [i_5] [i_5] [i_6] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -1498259478)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)104)) ? (arr_23 [0] [i_6 - 1] [i_7] [i_6]) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7])))))) ? (max((((/* implicit */unsigned int) arr_22 [i_5] [i_5] [i_5])), (var_0))) : (((/* implicit */unsigned int) -488114660))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            for (signed char i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                {
                    var_18 *= ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((arr_23 [i_10] [i_10] [i_10] [22U]), (((/* implicit */int) arr_19 [i_10] [(signed char)0]))))) ? (min((3165549815U), (((/* implicit */unsigned int) arr_19 [i_10] [12U])))) : (((/* implicit */unsigned int) (+(arr_22 [(short)6] [i_10] [i_10])))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_38 [(_Bool)1] [(_Bool)1])) << (((arr_40 [(unsigned char)2] [(unsigned char)2]) - (3622477818716152735ULL)))))))));
                    arr_41 [i_10] [(signed char)12] [i_12 + 2] &= ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_11] [i_10])) ? (arr_37 [(unsigned char)3] [0] [(signed char)13]) : (arr_37 [i_10] [i_10] [i_10]))), (((/* implicit */unsigned int) ((arr_19 [(unsigned char)8] [(signed char)12]) ? (488114682) : (-488114682))))))));
                    arr_42 [(_Bool)1] [i_11] [(_Bool)1] &= ((/* implicit */signed char) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1286014713)) ? (((/* implicit */int) arr_34 [i_10])) : (((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) arr_38 [0U] [0U])), (arr_37 [i_12] [i_10] [i_10])))))));
                    var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) ((signed char) -1730126252))) ^ (((/* implicit */int) arr_36 [i_12 + 2] [(signed char)12] [i_12]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+((+((-(14209296491644777566ULL))))))))));
        var_21 = ((/* implicit */unsigned int) ((int) (~((+(arr_23 [(signed char)2] [i_10] [i_10] [16]))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_34 [i_10]), (((/* implicit */signed char) arr_19 [(_Bool)1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [4]))))) ? (5828819572470605856LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [6LL]), (arr_19 [i_10] [(signed char)4]))))))) : (((/* implicit */long long int) var_1))));
    }
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
    {
        var_23 *= ((/* implicit */_Bool) 1730126258);
        arr_46 [i_13] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_36 [(unsigned short)11] [(unsigned short)11] [i_13])) & (((/* implicit */int) var_9))))));
    }
    for (unsigned char i_14 = 2; i_14 < 10; i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] [i_14] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((14209296491644777559ULL) + (((/* implicit */unsigned long long int) -1730126258))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_5)) ? (arr_47 [i_14]) : (((/* implicit */long long int) -1730126256)))))));
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                var_24 = ((/* implicit */int) var_2);
                arr_57 [i_14] = ((/* implicit */unsigned int) arr_7 [i_14 + 1] [i_14 - 1]);
                arr_58 [i_14] [i_14] [(_Bool)1] [i_14 + 2] = ((/* implicit */long long int) ((arr_53 [i_14]) << (((536739840) - (536739828)))));
            }
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_21 [i_14] [i_15] [i_14] [i_15])))) ? (((/* implicit */int) arr_48 [2LL])) : (min((((/* implicit */int) (short)-18777)), (1730126261)))))) ? (((/* implicit */int) ((arr_28 [i_14 + 1] [i_14 + 2]) <= (-506946424)))) : (arr_20 [10] [i_15]))))));
        }
        /* LoopNest 3 */
        for (signed char i_17 = 4; i_17 < 9; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (signed char i_19 = 1; i_19 < 10; i_19 += 4) 
                {
                    {
                        arr_67 [i_14] [i_14] [11U] [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)65)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1259543302)) ? (((/* implicit */int) arr_26 [i_14 - 2] [i_14 - 2] [i_14])) : (((((/* implicit */_Bool) arr_40 [i_14] [i_14])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)70)))))))));
                        arr_68 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((((/* implicit */_Bool) arr_55 [i_14] [7U] [i_18])) || (var_11)))))) + (((/* implicit */int) (short)-18798))));
                    }
                } 
            } 
        } 
        var_26 &= ((/* implicit */int) var_6);
    }
    /* vectorizable */
    for (unsigned char i_20 = 2; i_20 < 10; i_20 += 1) /* same iter space */
    {
        arr_73 [(signed char)6] = ((/* implicit */long long int) arr_56 [i_20 - 2]);
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_20 - 1] [i_20 - 2])) ? (arr_45 [6]) : (((/* implicit */unsigned long long int) arr_69 [i_20 - 1] [i_20 + 2])))))));
    }
}
