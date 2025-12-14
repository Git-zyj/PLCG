/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167829
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */int) (short)28791)) - (((((/* implicit */int) (unsigned short)43588)) + (-2147483642)))))));
                                arr_13 [(unsigned char)2] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)57069))))) : (((((/* implicit */_Bool) -8893877998800515556LL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */long long int) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21966))) : (2548154486U)))))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21937))))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)21951))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (9ULL) : (18446744073709551612ULL)))));
                        var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)21964)) ? (((/* implicit */int) (short)30993)) : (var_15))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((signed char) min((min(((signed char)3), ((signed char)24))), ((signed char)113))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32755)) ? (((((/* implicit */_Bool) (short)-360)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)360))) : (10967052308158194325ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-194))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)54))))) ? (((unsigned long long int) (unsigned short)25165)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)121))))))))))));
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-58), ((signed char)-108))))) : ((~(-8893877998800515552LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (unsigned short)21951)) : (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */int) (signed char)58)) : (((((/* implicit */int) (short)-25556)) - (((/* implicit */int) (unsigned char)253)))))))));
                        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (signed char)-65)))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) ^ (min((2393388609U), (((/* implicit */unsigned int) (signed char)62)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43585))) % (975505764U)))))));
    var_29 = ((/* implicit */int) ((unsigned long long int) min((var_12), (var_0))));
    var_30 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) (unsigned short)29398))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36133))) : (349042419U))), (((/* implicit */unsigned int) (signed char)27))));
}
