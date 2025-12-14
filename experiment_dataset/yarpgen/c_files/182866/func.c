/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182866
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
    var_17 -= var_16;
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9022055461654991060ULL))))) : (((/* implicit */int) (unsigned char)218))));
    var_19 += ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)218));
    var_20 = ((/* implicit */short) (~(((unsigned long long int) (~(((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 4] [i_1 + 3] [i_1])))))));
                var_21 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (max((((/* implicit */long long int) var_6)), (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)4] [i_0])) : (((/* implicit */int) var_5))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    var_22 *= ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)60352)) : (((/* implicit */int) (unsigned short)46781)))), ((+(((/* implicit */int) arr_0 [i_0 + 1]))))))));
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])), (var_14))) == (max((((/* implicit */unsigned long long int) var_16)), (var_14))))))) : (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60352))) : ((~(4303541839433603753LL)))))));
                }
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_3)))))) : (((/* implicit */int) var_15))));
                    var_25 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), ((+(((/* implicit */int) (unsigned short)60329))))));
                }
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)69)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5184)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))) ? (2565531830U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((arr_13 [i_1 - 1] [i_1] [i_5] [i_1 - 2]) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_0] [i_4] [(unsigned char)2] [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 2] [i_0] [(unsigned short)4] [i_1 + 1] [i_1] [i_1 + 4])))))));
                                var_27 -= ((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_5]);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 3]))))) ? (((((/* implicit */_Bool) 7826716349258160459LL)) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [3LL] [(unsigned short)6] [i_1]))))));
                }
                for (signed char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    arr_22 [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [7U] [i_1] [i_1] [i_7]))) & (var_2)))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_8)))))));
                    arr_23 [i_1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])))))));
                }
                arr_24 [(unsigned short)5] [i_1] = ((/* implicit */long long int) arr_14 [i_1] [i_1]);
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned int) var_3);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (arr_21 [i_0] [i_0] [i_1] [i_8])))) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_15))))))) ? ((+((~(((/* implicit */int) var_0)))))) : ((((!(((/* implicit */_Bool) var_14)))) ? ((~(((/* implicit */int) arr_6 [i_1] [(signed char)8] [i_8])))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        for (long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((_Bool) var_6))))), ((~(((/* implicit */int) (unsigned short)65535))))));
                                var_32 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 3024114080U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24856))))));
                            }
                        } 
                    } 
                    var_33 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_34 *= var_3;
                                arr_36 [i_1] [i_1] [i_1] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))));
                                var_35 = ((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1))))));
                                arr_37 [6U] [i_1] [5] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) - (609967075)));
                                var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1] [i_8] [i_1]))))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_37 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0] [i_1 + 4])) : (((/* implicit */int) arr_19 [i_0 - 2] [i_1 - 2] [i_1 + 4]))))));
                    var_38 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_13] [(unsigned short)0])))));
                    var_39 = ((/* implicit */_Bool) ((long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))))));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_40 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)27466))))))));
                    var_41 *= ((_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0 - 1] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_1 - 3] [i_0] [i_1 - 1])))));
                    var_42 = (unsigned short)63735;
                }
            }
        } 
    } 
}
