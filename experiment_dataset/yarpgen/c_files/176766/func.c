/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176766
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((var_14), (((/* implicit */short) var_10)))))));
        arr_3 [i_0] = ((/* implicit */int) var_3);
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0 - 1] = ((/* implicit */int) max((max((((/* implicit */unsigned int) (unsigned short)13384)), (134184960U))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
            arr_7 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))))), (max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)2)))))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) (~(-9223372036854775805LL)))) : ((+(8473830619664088071ULL))))));
            arr_10 [2] [16ULL] &= ((/* implicit */unsigned short) ((long long int) min((2973026370251958809LL), (((/* implicit */long long int) (signed char)(-127 - 1))))));
            var_20 ^= max((((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) var_8)))), (max((var_17), (((/* implicit */unsigned int) arr_8 [i_2] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [6] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [(_Bool)1]))) : (arr_4 [(_Bool)1] [10LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [(signed char)12])))) : (((1242698021372745206ULL) - (((/* implicit */unsigned long long int) 4294967282U)))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_4 [10LL] [i_2 - 1]))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_3 - 1])) && (((/* implicit */_Bool) arr_8 [1ULL] [i_0])))))) : ((+(var_4)))))))))));
            arr_14 [(unsigned short)12] [i_3 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17204046052336806410ULL)) && (((/* implicit */_Bool) (signed char)126))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_23 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(signed char)14] [i_4] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_4] [i_4])) : (524287ULL))))));
            arr_18 [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_4] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4] [(_Bool)0])))))) ? (((/* implicit */long long int) var_13)) : (((var_5) % (var_6)))));
            var_24 -= ((/* implicit */signed char) (~((+(((/* implicit */int) var_11))))));
            var_25 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) ? ((-(var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_11 [i_0 - 1] [i_0 - 1]))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 4) 
            {
                var_26 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)198))));
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_15);
            }
        }
    }
    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-((-(arr_23 [i_6 - 2])))))) % (17204046052336806399ULL)));
                        arr_33 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (-((+(max((((/* implicit */long long int) var_1)), (var_6)))))));
                        arr_34 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */signed char) max((max(((-(var_0))), (((/* implicit */unsigned long long int) (~(var_1)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)32885)), (-1))))));
                        arr_35 [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17204046052336806409ULL)) ? (1242698021372745229ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        } 
        arr_36 [i_6 + 2] [i_6 + 2] = ((/* implicit */signed char) max((1242698021372745181ULL), (((/* implicit */unsigned long long int) -14))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-90))))) : (17204046052336806439ULL)));
        var_29 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_2))))));
    }
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29486)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) : (arr_29 [i_11] [i_11] [i_11] [i_11])));
        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_17 [i_11]))), ((~(((/* implicit */int) var_11)))))))));
        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_14)), (var_3))) * (((/* implicit */long long int) ((int) arr_30 [i_11] [i_11] [i_11] [(unsigned short)23])))))) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_7)))))) : ((+((+(((/* implicit */int) arr_39 [i_11] [i_11]))))))));
        var_33 = ((/* implicit */unsigned char) var_17);
    }
    var_34 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_7)) ? (var_17) : (var_2)))))));
    /* LoopSeq 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_35 |= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (-(var_0)))))));
        var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_12] [i_12])), ((~(((/* implicit */int) max((arr_19 [(_Bool)1] [(_Bool)1] [i_12] [(_Bool)1]), (((/* implicit */signed char) var_15)))))))));
        var_37 = ((/* implicit */signed char) (+((-((-(1242698021372745204ULL)))))));
    }
    for (signed char i_13 = 1; i_13 < 20; i_13 += 4) 
    {
        var_38 = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
        arr_49 [i_13] = ((/* implicit */int) (short)27739);
    }
    for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_15 = 1; i_15 < 14; i_15 += 1) 
        {
            for (signed char i_16 = 3; i_16 < 16; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    {
                        var_39 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_23 [i_14])))));
                        arr_59 [i_14] [i_17] [i_16 + 1] [i_16 + 1] = ((/* implicit */short) (((+(((/* implicit */int) var_15)))) >= ((-(((/* implicit */int) (unsigned short)65535))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
                        {
                            arr_64 [i_14] [i_14] [i_16] [i_17] [i_18] [i_18] &= ((/* implicit */unsigned int) arr_32 [16] [i_14] [i_16 - 2] [i_18]);
                            arr_65 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) (+((-((~(((/* implicit */int) arr_54 [i_14]))))))));
                        }
                        for (unsigned int i_19 = 1; i_19 < 16; i_19 += 1) /* same iter space */
                        {
                            var_40 ^= ((/* implicit */_Bool) max((17204046052336806385ULL), (((/* implicit */unsigned long long int) (short)-3404))));
                            var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_4)))))))));
                        }
                        for (unsigned int i_20 = 1; i_20 < 16; i_20 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((_Bool) (-((+(arr_67 [i_14] [i_14] [i_14] [i_14])))))))));
                            var_43 = ((/* implicit */short) max((max((var_16), (((((/* implicit */_Bool) (short)4028)) ? (((/* implicit */unsigned long long int) arr_48 [i_14])) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (+(var_2))))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(1242698021372745203ULL)))))))))));
                        }
                        arr_70 [i_14] [i_14] = max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11293))))), ((+(4294967289U))));
                    }
                } 
            } 
        } 
        var_45 = ((/* implicit */signed char) min(((~(var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_66 [i_14] [i_14] [(short)1] [i_14] [i_14]), (((/* implicit */unsigned long long int) var_6))))))))));
    }
}
