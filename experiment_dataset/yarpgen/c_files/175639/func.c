/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175639
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_4);
        var_18 = ((/* implicit */signed char) (-((-(min((((/* implicit */unsigned long long int) var_16)), (11357162950065080894ULL)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_10 [i_1 - 1] [i_2] = ((/* implicit */unsigned char) arr_3 [i_1]);
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_19 += min((((11357162950065080891ULL) << (((((/* implicit */int) (unsigned short)24175)) - (24139))))), (min((((/* implicit */unsigned long long int) (unsigned short)27338)), (7089581123644470722ULL))));
                            var_20 = (-2147483647 - 1);
                            var_21 = (i_2 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((((/* implicit */int) var_11)) ^ (((((/* implicit */int) arr_11 [i_2])) >> (((-2390821976952961552LL) + (2390821976952961575LL))))))) - (154)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((((((/* implicit */int) var_11)) ^ (((((((/* implicit */int) arr_11 [i_2])) + (2147483647))) >> (((-2390821976952961552LL) + (2390821976952961575LL))))))) - (154))) + (70))))));
                        }
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) (-((+(8)))));
                            var_23 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_6)))))));
                            var_24 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((int) (unsigned char)99))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1095376034)) ? (11357162950065080894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                        }
                        var_25 = ((/* implicit */long long int) min((((/* implicit */int) min((var_5), (((/* implicit */signed char) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_11)))))))), (((int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0)))))));
                        arr_23 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_4 - 1]) > (var_17)))) - (2147483647)));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20)))));
        }
        var_27 = ((/* implicit */unsigned char) min(((((+(var_6))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_20 [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 3])))))), (min((((/* implicit */unsigned long long int) -2147483646)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_1]))) % (17999595413869842895ULL)))))));
    }
    for (int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */short) min((((/* implicit */int) var_3)), ((-(704452500)))));
        var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_24 [i_7] [i_7]))) ? (1437814004) : (((/* implicit */int) var_9))));
    }
    for (int i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_24 [i_8 + 1] [i_8])) ? (((/* implicit */int) (unsigned short)25675)) : (((/* implicit */int) (signed char)14)))) : (((/* implicit */int) arr_24 [i_8 - 1] [i_8 + 1]))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 3; i_9 < 18; i_9 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_11))));
            var_31 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_25 [(signed char)14]))))));
        }
    }
    var_32 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) -9223372036854775803LL)) ? ((-2147483647 - 1)) : (var_16)))))));
    /* LoopSeq 1 */
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned char) var_13);
        var_33 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)30)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61646)) || (((/* implicit */_Bool) var_13))))), (var_14))))) : (((unsigned long long int) ((unsigned long long int) arr_33 [i_10])))));
        var_34 += ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))));
    }
}
