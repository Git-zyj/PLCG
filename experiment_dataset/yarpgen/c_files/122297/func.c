/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122297
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-18223)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((_Bool) var_5))) * (-5)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) (+(arr_9 [i_0] [i_0] [i_2] [i_3])));
                            arr_17 [i_0] [i_4] [(signed char)13] [i_4] [i_4] = ((/* implicit */signed char) 0LL);
                            var_13 -= ((/* implicit */int) (!(var_11)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)65535))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((long long int) (+(((/* implicit */int) var_10))))) != (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)246)))))))))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))));
                        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6])) - (arr_3 [i_0])))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_0) && (arr_0 [i_1] [i_1]))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_6])) || (var_11)))) <= ((((_Bool)0) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_6])) : (((/* implicit */int) var_4)))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (-6535622465801499829LL) : (-6535622465801499829LL))))));
                            arr_25 [i_1] [i_2] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 616466641)) : (3516232893U))))))));
                            arr_26 [i_0] [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) (((_Bool)1) ? (((min((arr_9 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) var_1)))) % (((/* implicit */unsigned long long int) arr_12 [16U] [i_1] [i_6] [i_2] [i_6] [i_7])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_1] [i_7])))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned short) (short)22865)))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_20 &= ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                            arr_31 [i_0] [i_0] [i_6] [i_6] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -6535622465801499829LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1])))))))));
                            arr_32 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-38));
                            arr_33 [4ULL] [i_0] [i_0] [i_2] [i_0] [(unsigned char)22] [i_0] &= ((/* implicit */_Bool) min((((((var_9) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) max((((((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_8])) / (((/* implicit */int) (unsigned char)38)))), (((/* implicit */int) (!(var_2)))))))));
                            var_21 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                        }
                        for (short i_9 = 3; i_9 < 20; i_9 += 1) 
                        {
                            var_22 |= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_9])) * (((/* implicit */int) min((arr_19 [i_9 - 1] [(unsigned char)21] [i_9 - 3] [i_9 - 1] [i_9] [i_9 - 1]), (arr_27 [(signed char)10] [(_Bool)1] [(signed char)10] [i_6] [i_0]))))));
                            arr_36 [i_0] [i_6] [(unsigned char)6] [i_6] [i_9 - 3] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1] [3] [(unsigned char)10])) && (((/* implicit */_Bool) (short)0)))) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) && (((/* implicit */_Bool) ((short) (unsigned char)192))));
                            arr_37 [i_6] [i_1] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_11)))));
                            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((min((arr_3 [i_6]), (((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [10LL] [10LL] [i_9 - 1])))) == (((/* implicit */int) ((arr_3 [i_2]) != ((-2147483647 - 1))))))))) ^ ((+((+(-5321447153210153731LL)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_3))));
                            var_25 &= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)101)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_19 [i_10] [i_1] [(_Bool)1] [i_1] [i_1] [i_0]), (arr_19 [i_0] [i_1] [i_1] [i_0] [i_6] [0LL]))))));
                            arr_41 [i_0] [i_6] [i_2] [i_1] [i_10] = ((/* implicit */int) var_1);
                            arr_42 [i_6] [i_6] [i_10] = ((min((((((/* implicit */int) (unsigned char)163)) % (-10))), (((/* implicit */int) arr_29 [i_0] [i_10] [i_6] [i_6] [i_2] [i_0])))) >= ((+(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (short)27074)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_2])))))));
                            var_26 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0])))) ? (((arr_38 [i_0] [i_2] [i_6]) | (((/* implicit */int) ((unsigned char) var_9))))) : (((/* implicit */int) ((unsigned short) ((arr_14 [i_0] [i_1] [i_1] [i_2] [(_Bool)1] [i_6]) % (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_6] [i_10]))))))));
                        }
                    }
                    var_27 -= ((/* implicit */_Bool) 6535622465801499815LL);
                }
                var_28 *= ((((/* implicit */_Bool) min((((((/* implicit */int) arr_34 [i_0] [i_0] [i_0])) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((_Bool)1), (var_0))))))) || (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (!(var_10))))))));
            }
        } 
    } 
}
