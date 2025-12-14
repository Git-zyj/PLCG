/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172837
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
    var_16 = ((/* implicit */long long int) ((2578786224224991429LL) == (((/* implicit */long long int) ((/* implicit */int) (short)6631)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))), (max((min((3914529519U), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) & (380437776U)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((((/* implicit */_Bool) 380437776U)) && (((/* implicit */_Bool) arr_4 [i_0] [i_2])))))))));
                                arr_13 [i_3] [i_2] [i_2] [i_3] [i_2] [i_2] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25136)) ^ (((/* implicit */int) (unsigned char)132))))), (((15795103943008676175ULL) - (((/* implicit */unsigned long long int) 380437776U))))))) && (((/* implicit */_Bool) (+(max((arr_6 [i_2]), (((/* implicit */long long int) (_Bool)0)))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 137437904896ULL)) && (((/* implicit */_Bool) 380437776U))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)209)))) : (max((380437776U), (((/* implicit */unsigned int) (signed char)-62)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_2] [i_2] [i_2] [i_2]))), (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 8; i_5 += 3) 
    {
        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-18228)))) == (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9488701964562992916ULL)) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [i_5] [i_6] [i_6])) : (((/* implicit */int) (short)13570))))), (((((/* implicit */_Bool) 746809614997242778ULL)) ? (arr_15 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 9; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6]))) : (arr_25 [i_5] [i_5])))))), ((~(18446743936271646719ULL)))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_5 + 2])), ((+(arr_15 [i_6] [i_6])))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 367172895U)) && (((/* implicit */_Bool) (unsigned short)61271))))), (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)16)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), ((_Bool)0))))) <= (((((/* implicit */_Bool) (signed char)57)) ? (380437776U) : (367172895U))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 9; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (unsigned char)243);
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(max((((((/* implicit */long long int) ((/* implicit */int) (short)16))) >= (arr_21 [i_5]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))) >= (2507124426U))))))))));
                                var_27 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) max((10334779726158646788ULL), (((/* implicit */unsigned long long int) arr_30 [i_11])))))), (max((arr_28 [i_5 + 2]), (arr_28 [i_5 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        var_28 &= ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [i_13] [i_13])) - ((~(((/* implicit */int) (signed char)96))))));
                        arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18352677339257972923ULL)) ? (11671741948866214830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)13570), (((/* implicit */short) arr_19 [i_6] [i_6] [i_6]))))))))) ? (((/* implicit */int) ((signed char) max((arr_28 [i_5]), (((/* implicit */long long int) arr_16 [i_6] [i_6] [i_6])))))) : (((/* implicit */int) max((((/* implicit */signed char) max(((_Bool)1), ((_Bool)0)))), (((signed char) (unsigned short)27406)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (max((arr_4 [i_6] [i_6]), (((/* implicit */unsigned long long int) (unsigned short)60186)))))));
                            var_30 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (_Bool)1))));
                            var_31 *= ((/* implicit */short) max((((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_14 [i_5] [i_5])))))), (((((-8610304495730214839LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_17 [i_6] [i_6]))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            var_32 *= ((/* implicit */unsigned char) max((max(((~(((/* implicit */int) (unsigned char)126)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)162)) & (((/* implicit */int) (signed char)107))))))));
                            var_33 = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) 16380ULL)) ? (4716403160558419724LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10] [i_10] [i_10]))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-28682)))))));
                        }
                        var_34 += ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) ((((long long int) 3914529519U)) < (((/* implicit */long long int) ((((((/* implicit */int) (short)-8199)) + (2147483647))) >> (((3914529537U) - (3914529520U))))))))) : (((((/* implicit */_Bool) 380437789U)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (signed char)91))))));
                    }
                }
                for (long long int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
                {
                    var_35 &= ((/* implicit */unsigned int) (+(max((((/* implicit */int) ((unsigned char) (signed char)56))), (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (short)-8204)) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))))))));
                    var_36 |= ((/* implicit */long long int) ((max(((~(((/* implicit */int) (signed char)-109)))), (((((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5])))))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3914529537U))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))))));
                    arr_46 [i_5] [i_5] [i_5] [i_16] = ((/* implicit */unsigned char) (short)-13571);
                    var_37 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_5] [i_5] [i_5])))) : (min((((/* implicit */unsigned int) (unsigned char)80)), (3609078888U)))))));
                    arr_47 [i_5] [i_5] [i_6] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)31)) ? ((+(((/* implicit */int) max((((/* implicit */short) (signed char)-118)), ((short)2250)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)-78))))))));
                }
                for (long long int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
                {
                    var_38 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)36)))) ? (((((/* implicit */_Bool) 748555916U)) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_41 [i_6]))))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (7127522574913623784ULL))) : ((+(arr_38 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)17520))))));
                        var_40 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) arr_31 [i_6])) : (arr_52 [i_17])))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned char) arr_3 [i_19]);
                        arr_56 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) min((-9112408759468228724LL), (((/* implicit */long long int) 734255375U)))))) ? (((((/* implicit */_Bool) ((unsigned int) (short)4095))) ? (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_6] [i_6] [i_6]))) : ((+(arr_31 [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_19] [i_19] [i_19] [i_19])))));
                    }
                    arr_57 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-73))))) - (((/* implicit */int) (unsigned char)219)))));
                }
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)4))));
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (unsigned char)80))));
                    arr_61 [i_6] [i_6] = ((/* implicit */long long int) arr_40 [i_6]);
                }
                var_44 = ((/* implicit */unsigned long long int) ((unsigned int) arr_48 [i_5] [i_5] [i_5]));
            }
        } 
    } 
}
