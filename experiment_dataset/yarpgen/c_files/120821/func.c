/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120821
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (min((((unsigned long long int) -34060446)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1294294547)) ? (((/* implicit */unsigned int) var_3)) : (arr_11 [i_0] [i_0] [i_2 + 3] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                                var_13 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */unsigned long long int) (-(var_1)))) : ((-(18446744073709551594ULL))))));
                                var_14 = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)60)) * (((/* implicit */int) (unsigned char)180))));
    var_16 = ((/* implicit */short) 3692787020U);
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (signed char i_7 = 3; i_7 < 18; i_7 += 1) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) min((((unsigned long long int) (unsigned char)142)), (((/* implicit */unsigned long long int) -3851936046416980906LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1)))))))) : (((/* implicit */int) (unsigned char)132)));
                    var_18 = ((/* implicit */unsigned long long int) -670528009777208774LL);
                    var_19 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) 9104778518482165934LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (196158683U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 857024736)))))), (((/* implicit */unsigned int) (-(arr_7 [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_7 - 3]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2305843009146585088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_31 [i_5] [i_5] [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_21 [i_5 + 1] [i_6] [i_7])), (26U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(9365920107629710887ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (unsigned short)1)) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) (signed char)28))))))) << (((/* implicit */int) ((((/* implicit */int) var_6)) >= ((+(((/* implicit */int) (unsigned char)7)))))))));
}
