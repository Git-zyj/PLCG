/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138262
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))), (0ULL))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (signed char)-1))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) (short)-2))))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_23 |= ((/* implicit */signed char) (~(((/* implicit */int) (!((((_Bool)0) || (((/* implicit */_Bool) (short)1)))))))));
                    var_24 = ((/* implicit */int) min((var_24), (((((((((/* implicit */_Bool) (short)252)) && (((/* implicit */_Bool) (unsigned short)7)))) || (((/* implicit */_Bool) (unsigned short)65530)))) ? (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [i_4]))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_5 [i_4] [i_4] [i_4]))))))) : (var_9)))));
                }
            } 
        } 
        var_25 += ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min(((unsigned char)48), (var_5)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_9 [i_0])) | (((/* implicit */int) var_2)))))));
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))) : ((~(var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)32)) % (((/* implicit */int) var_3))))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)127)), (var_9))))))));
        var_27 ^= ((/* implicit */signed char) (unsigned short)61440);
        var_28 = ((/* implicit */signed char) var_1);
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) min((min((arr_18 [i_7]), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_30 *= ((/* implicit */signed char) ((((/* implicit */int) min((arr_23 [i_7] [i_7] [i_9 - 1] [(unsigned short)4]), (arr_23 [i_7] [i_7] [i_9 - 1] [i_9])))) == (((/* implicit */int) ((((((/* implicit */int) (unsigned short)3)) | (((/* implicit */int) (signed char)(-127 - 1))))) >= (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_26 [i_9] [i_6])))))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-((+(((/* implicit */int) (short)-1)))))))));
                        arr_27 [i_6] [i_6] [i_6] [(signed char)14] [i_6] = ((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_5))))) << (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_5)))) + (8))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) max((((((((/* implicit */int) arr_21 [i_6] [(unsigned short)19])) - (((/* implicit */int) (unsigned short)65515)))) | (((/* implicit */int) var_15)))), ((-(((/* implicit */int) arr_22 [13] [i_7] [i_6])))))))));
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_11 = 2; i_11 < 20; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 23; i_12 += 3) 
                {
                    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_33 = arr_20 [i_6];
                            arr_39 [i_13] [i_12] [i_6] [i_10] [(signed char)18] = ((/* implicit */short) min((((((/* implicit */int) ((unsigned short) (signed char)-119))) ^ (((/* implicit */int) var_19)))), (((((/* implicit */_Bool) arr_30 [i_6] [i_12 - 1] [i_11 + 4] [i_13 + 1])) ? (((/* implicit */int) arr_33 [i_6] [i_12] [i_12 + 1] [i_6])) : ((+(((/* implicit */int) (signed char)15))))))));
                            var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)2)), ((unsigned short)4083))))));
                            var_35 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_23 [i_6] [i_12] [i_10] [i_6])) || (((/* implicit */_Bool) 2LL)))) || ((_Bool)1))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_13)) | (((/* implicit */int) (signed char)(-127 - 1)))))))));
                            var_36 |= ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned short) (unsigned short)4095))) >= (((/* implicit */int) arr_24 [i_10] [i_11 - 1] [i_10])))) ? ((+(144115188075855871LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_10] [i_12 + 1] [i_10])) && (((/* implicit */_Bool) arr_25 [i_10] [i_12 + 1] [i_10]))))))));
                        }
                    } 
                } 
            } 
            var_37 |= ((/* implicit */signed char) ((((((/* implicit */int) arr_26 [i_6] [(signed char)12])) >= (((((/* implicit */_Bool) arr_24 [i_10] [i_10] [(_Bool)1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_17)))))) ? (min(((~(((/* implicit */int) arr_25 [i_10] [i_10] [i_6])))), (((/* implicit */int) arr_33 [i_10] [(unsigned char)8] [i_10] [i_10])))) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)61440)) < (((/* implicit */int) (unsigned short)65524)))))))));
            var_38 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10] [i_10] [i_6])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        }
        var_39 = ((/* implicit */int) min((((unsigned short) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_17 [i_6]))))), (((/* implicit */unsigned short) ((_Bool) ((unsigned char) (unsigned char)64))))));
    }
    for (unsigned char i_14 = 3; i_14 < 12; i_14 += 1) 
    {
        var_40 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))));
        arr_42 [10LL] &= ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
        var_41 += ((((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-119)) && (((/* implicit */_Bool) arr_40 [i_14]))))) : (((/* implicit */int) var_0)))) < (((((((/* implicit */int) (unsigned short)65472)) | (((/* implicit */int) (unsigned short)12)))) | (((/* implicit */int) (_Bool)1)))));
    }
    var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65523))));
    var_43 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((0ULL) > (((/* implicit */unsigned long long int) var_10))))))), (((var_1) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_10)))))));
}
