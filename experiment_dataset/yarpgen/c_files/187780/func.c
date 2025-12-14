/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187780
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (!((!(((/* implicit */_Bool) (~(arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)102)) ? (337641927) : (((/* implicit */int) (unsigned char)135))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-108))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) : (18446744073709551615ULL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-67))))), ((signed char)-126)))) + ((-(((/* implicit */int) (unsigned short)56219))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) 1474037264);
                        arr_20 [i_1] [i_1] [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_19 [i_0] [i_1] [i_5])))))))) % (max((min((((/* implicit */long long int) 511)), (0LL))), (((/* implicit */long long int) ((_Bool) arr_1 [i_0])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_6] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                        var_22 = ((/* implicit */_Bool) min((var_22), ((((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (short)32767))))));
                        arr_24 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (signed char)-87)), ((unsigned short)65535)));
                        arr_25 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_0] [i_1] [i_6]);
                    }
                    arr_26 [(signed char)15] [(signed char)15] [i_1] = ((/* implicit */unsigned char) max((min((arr_8 [i_1]), (arr_8 [i_1]))), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38668)) || (((/* implicit */_Bool) arr_8 [i_1])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (signed char i_9 = 3; i_9 < 17; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_8 [i_0]))));
                        var_24 |= ((/* implicit */unsigned int) min((max((arr_12 [i_0] [i_0] [i_9 - 1] [i_0]), (arr_12 [i_7] [i_7] [i_9 - 2] [i_9 + 2]))), (max(((unsigned char)153), (arr_12 [i_9] [i_9] [i_9 + 1] [i_9])))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
    {
        arr_37 [i_10] = ((/* implicit */int) arr_35 [i_10]);
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) >> ((((~(((/* implicit */int) arr_12 [i_10] [i_10] [i_10] [i_10])))) + (153)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_16)) % (((/* implicit */int) arr_6 [i_10] [i_10]))))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_10] [i_10] [i_10] [i_10]))), (((10370673798835930086ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38668))))))));
        /* LoopSeq 2 */
        for (unsigned short i_11 = 3; i_11 < 17; i_11 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */short) ((unsigned int) (_Bool)1));
            arr_41 [i_10] [i_10] [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)38657)) ? (arr_30 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 3]) : (arr_30 [i_11 - 1] [i_11 - 1] [i_11 - 2] [i_11 - 3]))), (((/* implicit */long long int) (unsigned char)0))));
            arr_42 [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16383U))));
        }
        for (unsigned short i_12 = 3; i_12 < 17; i_12 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)135));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    {
                        arr_51 [i_10] [i_12] [i_13] [i_13] [i_14] = ((/* implicit */_Bool) ((unsigned char) 18446744073709551597ULL));
                        arr_52 [12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) (_Bool)0);
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned int) arr_10 [i_10])), (min((((/* implicit */unsigned int) (signed char)-65)), (4294950913U)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_17 [i_10] [i_13] [i_12 + 1] [i_10] [i_10] [i_10]))))) : (((arr_30 [i_10] [i_12] [i_13] [i_14]) + (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3473))))))))))));
                    }
                } 
            } 
            var_30 *= ((/* implicit */unsigned char) arr_9 [i_10] [i_12] [12ULL]);
        }
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) arr_36 [i_15] [i_15]);
        /* LoopNest 2 */
        for (unsigned char i_16 = 2; i_16 < 15; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                {
                    arr_63 [i_17] [i_16 - 2] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)113)) ? (arr_44 [i_16 + 1]) : ((-(((/* implicit */int) min(((unsigned char)180), ((unsigned char)126))))))));
                    arr_64 [i_15] [i_17] [i_16 - 1] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))));
                    var_32 = ((/* implicit */int) max(((short)31086), (((/* implicit */short) (unsigned char)120))));
                    arr_65 [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) (unsigned char)144))))) ? (((/* implicit */int) max(((unsigned short)0), ((unsigned short)8069)))) : (max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)10)))), ((~(((/* implicit */int) (unsigned char)231))))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 4; i_19 < 13; i_19 += 1) 
            {
                for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    {
                        arr_73 [i_19] [i_18] = var_1;
                        arr_74 [i_15] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) >= (-1828879423894113025LL)));
                    }
                } 
            } 
        } 
        arr_75 [i_15] |= (_Bool)1;
    }
    var_34 |= ((/* implicit */unsigned char) var_7);
}
