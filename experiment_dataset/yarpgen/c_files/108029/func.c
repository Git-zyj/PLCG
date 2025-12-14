/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108029
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_6 [i_0] [i_4]))));
                                var_18 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2] [10]) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) arr_3 [i_0 - 1])))));
                                var_19 = arr_1 [i_0] [i_1];
                                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8319334228741936521LL)) ? ((+((+(((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) var_2))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (arr_11 [i_0 - 1] [(short)13] [(signed char)3] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_0 + 1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(8319334228741936520LL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)25666))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_3))) + (8319334228741936539LL)))))));
                                var_22 = ((/* implicit */unsigned char) 8795958804480LL);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min(((unsigned char)129), (((/* implicit */unsigned char) (signed char)127)))))));
                            }
                            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                                var_25 = ((/* implicit */unsigned short) var_7);
                            }
                            var_26 ^= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 8319334228741936550LL)) ? (16744483924597396408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [(unsigned char)10])))))));
                        }
                    } 
                } 
                var_27 |= ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)39873)) ? (((/* implicit */int) arr_12 [(short)6] [i_0] [i_0] [i_0] [(short)6] [i_0] [(short)6])) : (((/* implicit */int) arr_12 [(short)2] [i_0] [i_0] [(short)2] [i_0] [(signed char)10] [(short)2])))), (((((/* implicit */_Bool) arr_6 [(unsigned char)16] [8LL])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) (signed char)108))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_11 = 3; i_11 < 16; i_11 += 4) 
                        {
                            var_28 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (signed char)-24)))));
                            var_29 &= ((/* implicit */unsigned char) var_1);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) (-((+(var_6)))));
                            var_31 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_20 [(signed char)4] [i_9])) ? (arr_20 [i_10] [i_8]) : (arr_20 [i_7] [i_7]))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) min(((-(var_10))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)249)))))))) : ((~(var_5)))));
                        }
                        var_33 = arr_19 [5ULL];
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            arr_35 [(unsigned char)4] [i_8] [i_9] [i_10] [i_13] [i_13] [i_9] &= ((/* implicit */int) var_11);
                            var_34 = (unsigned char)177;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            var_35 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) arr_34 [i_7] [(unsigned char)16] [i_9] [i_10] [i_14])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_13)));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((arr_18 [i_10]) ^ (arr_18 [i_10]))))));
                        }
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-(((/* implicit */int) var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) 
                        {
                            arr_40 [i_7] [i_7] [i_7] [i_15 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249)))))));
                            arr_41 [i_7] [i_15] [i_9] [i_10] = max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (-8319334228741936521LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (0LL)))) ? (((((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_9] [i_10] [i_15 - 2])) ? (1799576857602298134ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8] [i_9] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (signed char)-121)))))))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */signed char) arr_20 [(_Bool)1] [i_7]);
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)31820))))) ^ (((((/* implicit */_Bool) arr_36 [8] [i_7] [i_7] [i_7] [i_7] [1LL])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-123))))) : (13014266181483249101ULL))))))));
        }
        var_40 *= ((/* implicit */short) (unsigned char)31);
        var_41 = ((/* implicit */short) max((max((-7090146990416629454LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7])) ? (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (((-(arr_28 [i_7] [(signed char)0] [i_7] [(unsigned short)8] [(signed char)8]))) / (((/* implicit */unsigned int) (((_Bool)0) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) max(((unsigned char)129), (var_7))))))))))));
    }
    for (unsigned char i_16 = 1; i_16 < 18; i_16 += 4) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned long long int) (short)-32756);
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_43 [i_16 + 1])))) && (((/* implicit */_Bool) arr_42 [18ULL])))))));
    }
    for (unsigned char i_17 = 1; i_17 < 18; i_17 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned short) -1641583451);
        /* LoopSeq 2 */
        for (signed char i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            var_46 = ((/* implicit */_Bool) (unsigned char)27);
            arr_51 [i_17] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_46 [i_17]))))), (((((/* implicit */_Bool) arr_47 [i_17 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1494006671U)))));
        }
        for (unsigned char i_19 = 1; i_19 < 20; i_19 += 2) 
        {
            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_48 [(unsigned char)2] [(unsigned char)2]))))) ? (((/* implicit */int) min((arr_48 [(short)4] [(short)4]), (arr_48 [(unsigned short)2] [(unsigned short)2])))) : ((-(((/* implicit */int) (unsigned char)143)))))))));
            var_48 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_11))))));
            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_54 [i_17]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) var_3)))))))) : (max((((/* implicit */long long int) ((-467364690) - (((/* implicit */int) (short)14396))))), (((-2173370677841456785LL) + (((/* implicit */long long int) ((/* implicit */int) (short)14379)))))))));
        }
        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18))))) << (((((((/* implicit */_Bool) 13812571655978421950ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) - (38803))))))));
        arr_55 [i_17] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (short)21864)))));
    }
}
