/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187779
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
    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)4096)) >> (((/* implicit */int) var_6)))) & (((/* implicit */int) ((6766012476482674010ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                var_12 = ((/* implicit */short) 11680731597226877591ULL);
                var_13 = ((/* implicit */int) arr_2 [i_0] [i_1 + 1]);
                var_14 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6548))) : (35184103653376LL))), (((/* implicit */long long int) ((unsigned char) arr_1 [i_0] [i_0])))))));
                var_15 = ((/* implicit */long long int) (unsigned char)53);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)6546), ((unsigned short)3820)))) && (((/* implicit */_Bool) 11680731597226877584ULL))));
                var_17 -= ((/* implicit */int) min((((((/* implicit */_Bool) 5014899741784197172LL)) ? (11680731597226877619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3283))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [6ULL] [i_3 + 1])) || (((/* implicit */_Bool) 24U)))))));
                var_18 = ((/* implicit */long long int) arr_6 [i_2 - 2]);
                var_19 = min((min((((arr_7 [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4331))))), (arr_5 [i_2 - 1] [6LL]))), (((/* implicit */unsigned long long int) (~(254)))));
                /* LoopSeq 4 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */short) ((unsigned long long int) min(((-(11680731597226877592ULL))), (11680731597226877606ULL))));
                    var_21 -= ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */int) (unsigned short)9538)) % (((/* implicit */int) (short)-10913))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2 - 2])))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 12582912U)), (11680731597226877594ULL)))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_3 + 1] [i_2 - 1])) ? (10920718146535621389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7411)))));
                    var_23 = ((/* implicit */unsigned char) arr_13 [i_2 + 1] [10ULL] [i_4]);
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) arr_7 [i_2]);
                    var_25 = ((/* implicit */unsigned short) ((var_6) ? (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)10904))))))) : (((((/* implicit */_Bool) ((short) (short)-32749))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (1615246270311883728LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_5] [i_5])))))) : (min((((/* implicit */unsigned long long int) (unsigned short)34013)), (arr_5 [i_3] [i_5])))))));
                }
                for (long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_2 + 2]), (arr_4 [i_2] [i_3 - 1] [i_6])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (max((arr_4 [i_6] [i_3 - 1] [i_6]), (arr_7 [i_3 + 1])))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1]))) % (((((/* implicit */_Bool) (short)960)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 3]))) : (6766012476482674037ULL))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_28 = (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_3 - 1])));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (signed char)-42))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 4; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) var_2);
                                var_31 = ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 1] [i_3 + 1] [i_9 - 4]))) : (arr_21 [i_8] [i_3 - 1] [i_7] [i_8] [i_9 + 1]));
                                var_32 = ((/* implicit */signed char) (-(arr_9 [i_3 - 1] [i_2 + 1])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
