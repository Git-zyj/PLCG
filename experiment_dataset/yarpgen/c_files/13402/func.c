/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13402
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_10))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((_Bool) (short)14426)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)7218)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7218)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    var_13 = ((unsigned long long int) (unsigned short)7218);
                    arr_6 [i_1] = (+(((long long int) -7073651621458055830LL)));
                    arr_7 [i_0] [i_0] [i_2 + 1] = ((_Bool) ((((/* implicit */_Bool) (short)4487)) ? (4720566967500712287LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32447)))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] [(short)0] [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) (unsigned short)22845)) >> (((((((/* implicit */_Bool) -204697094155647387LL)) ? (((/* implicit */int) (unsigned short)43782)) : (-1))) - (43762)))))) ? (((int) -1485245283)) : (((/* implicit */int) (unsigned short)8192))));
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            var_14 = ((((/* implicit */int) ((signed char) 2762096184261778485LL))) | (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) -1774728253780613037LL)) : (15246238788222246527ULL))))));
                            arr_19 [i_0] [4LL] [6LL] [i_4] [6LL] [(unsigned char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) : (7073651621458055838LL)))) ? (((unsigned int) 4294967295U)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))));
                            arr_20 [i_0] [i_3] [i_0] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)22))) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (unsigned char)2)) : (-1485245283))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-27392)) + (((/* implicit */int) (signed char)56))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)27391))))) : (((/* implicit */int) ((short) (short)-27408)))))));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((4204050785U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)27370)))))) ? (((/* implicit */int) ((unsigned char) -1934502843))) : ((~(((/* implicit */int) (unsigned char)226)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_15 ^= ((((/* implicit */_Bool) (short)27392)) ? (131071) : (((/* implicit */int) (unsigned char)13)));
                        var_16 ^= ((/* implicit */int) ((_Bool) 18446744073709551615ULL));
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        arr_28 [i_7] [i_0] [i_3] [i_7] [i_0 - 4] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-107)) || (((/* implicit */_Bool) (unsigned short)22845))))) >= (((((/* implicit */_Bool) 6755399441055744LL)) ? (((/* implicit */int) (unsigned short)52551)) : (((/* implicit */int) (_Bool)1)))))) ? (((4198652230U) & (((/* implicit */unsigned int) -874826645)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)37))) : (-1774728253780613023LL)))) ? ((+(((/* implicit */int) (short)11774)))) : (((/* implicit */int) (unsigned short)41674)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */short) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)7)))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 16948136362545721301ULL))) ? ((~(-221722292088157951LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 839863347746709415LL))))))) ? (((((/* implicit */_Bool) -131072)) ? (((/* implicit */int) ((unsigned char) 826360202))) : (((/* implicit */int) (short)1680)))) : (((((/* implicit */int) (unsigned char)124)) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) && (((/* implicit */_Bool) 9223372036854775807LL))))))))))));
                            var_19 *= (signed char)-120;
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((signed char) 2013265920)))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31779))) / (8940901748496885041LL)))) ? (((((/* implicit */_Bool) (short)-27392)) ? (((/* implicit */long long int) 4095U)) : (6019205298329816200LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) -13173653)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)124)))))))))));
                            arr_34 [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 1774728253780613036LL)) ? (845922169) : (((/* implicit */int) (short)29606)))));
                        }
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_21 ^= ((/* implicit */unsigned short) (short)-27394);
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (1206133507U))))));
                    arr_37 [i_0] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2103102044079057914LL)) && (((/* implicit */_Bool) (unsigned char)132)))) ? ((((+(-2053310718))) * (((/* implicit */int) ((short) 3932160U))))) : (((/* implicit */int) (unsigned char)169))));
                    var_23 = ((int) ((unsigned int) ((unsigned int) 0ULL)));
                }
                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) -2013265920))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 897241596041821017ULL)) ? (-279193911) : (((/* implicit */int) (short)27391))))) : (((4026531840U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
