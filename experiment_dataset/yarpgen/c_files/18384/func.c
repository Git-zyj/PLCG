/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18384
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) (unsigned char)142);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [5U] [i_2] [i_2]))) | (arr_6 [i_1])))) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((unsigned long long int) 12050847976451463171ULL)) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)18))))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (max((min((var_7), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) arr_2 [i_1 - 1] [i_1])))) : (var_4)));
                }
                for (int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_2 [i_1] [i_1])))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 + 1] [i_1] [i_0]), (((/* implicit */unsigned short) (unsigned char)0))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-3))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)30607)) <= (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1] [i_0]))))) : (((/* implicit */int) arr_9 [i_3] [9LL] [i_0] [i_0]))))));
                }
                var_25 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_1]);
                var_26 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) >= (arr_6 [i_1])))) == (((/* implicit */int) ((signed char) 850540786))))) ? (((((/* implicit */_Bool) max(((unsigned short)516), (((/* implicit */unsigned short) (unsigned char)188))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [i_1])), (arr_5 [i_0] [i_1 - 1] [i_0] [i_1 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((5605290054291114284LL) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) -1);
                                var_28 = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) var_10)))) | (((/* implicit */int) (unsigned char)227))))) * (max((((/* implicit */unsigned long long int) ((int) arr_6 [i_1]))), (((unsigned long long int) arr_5 [i_5] [i_6] [i_1] [i_1])))));
                                var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) arr_7 [i_1] [6LL] [i_5] [i_6]))))) ? (arr_16 [i_4] [i_1] [i_4] [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_8 [i_0]))))))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)10901)))))));
                                var_30 *= ((/* implicit */short) arr_7 [i_6] [i_4] [i_5] [i_6]);
                                var_31 = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (var_5))) < (((/* implicit */unsigned long long int) -237972814164119074LL))))), (((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)27))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) var_2);
                            var_33 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_14)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_8 + 1])))));
                            var_34 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_7] [i_8])))) : (((/* implicit */int) arr_8 [i_0])))));
                            var_35 = (i_1 % 2 == zero) ? (((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_8])) ? (((/* implicit */int) arr_7 [i_1] [(unsigned short)4] [i_7] [i_8])) : (((/* implicit */int) arr_4 [i_0] [i_7] [i_8]))))) * (((189290059019906325LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1 + 1] [i_1]))))))), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_7] [i_7] [i_8 + 2]))))) : (((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_8])) ? (((/* implicit */int) arr_7 [i_1] [(unsigned short)4] [i_7] [i_8])) : (((/* implicit */int) arr_4 [i_0] [i_7] [i_8]))))) * (((189290059019906325LL) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1 + 1] [i_1]))))))), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_7] [i_7] [i_8 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_16))), (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) var_5)) ? (max((var_5), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5705)) & (var_13)))) | (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 3) 
    {
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_9]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (4294967295U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (arr_19 [i_9] [(signed char)1] [(signed char)1] [i_9])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_23 [i_9] [i_9 + 2] [i_9] [i_9] [i_9 + 2] [i_9])))) : (((((/* implicit */long long int) 268369920U)) & (var_12))))) : ((-(((long long int) var_4))))));
        var_38 = ((/* implicit */unsigned int) min((((unsigned long long int) (short)-8244)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_9])), (arr_3 [i_9])))) ^ (var_7))))));
        var_39 = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) 4611686018427387903LL)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)17915)))) < (arr_14 [i_9 - 2] [i_9] [i_9 + 3] [i_9 + 2] [i_9 + 2]))));
        var_40 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)19)))))))), (((((/* implicit */_Bool) ((short) arr_25 [i_9] [i_9]))) ? (((/* implicit */long long int) arr_10 [i_9 - 2] [i_9] [i_9 + 1])) : (((((/* implicit */_Bool) 13585274072549583564ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1205))) : (arr_17 [i_9] [(_Bool)1] [i_9] [i_9 + 2]))))));
    }
}
