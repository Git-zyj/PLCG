/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114533
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
    var_12 = ((/* implicit */int) var_8);
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 -= ((/* implicit */unsigned int) (unsigned short)54302);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) * (247663321U)));
            arr_4 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)144)) != (((/* implicit */int) arr_1 [i_0] [4LL]))))) * (var_3)))), ((((((+(-7346921429046415201LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7346921429046415212LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2]))))) | (627515393382596464ULL)));
        }
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-119)) * (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) arr_0 [i_0])), (7346921429046415186LL)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        arr_16 [i_2] [(short)6] &= ((/* implicit */unsigned int) 7346921429046415201LL);
                        var_18 = ((/* implicit */signed char) (-(var_10)));
                        arr_17 [i_2] = ((/* implicit */signed char) 4294967277U);
                        var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)25)))) == (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))) <= (627515393382596465ULL)))) > (((/* implicit */int) max((var_4), ((_Bool)0)))))))));
                        var_20 = ((/* implicit */unsigned char) 4294967277U);
                    }
                } 
            } 
            var_21 ^= ((/* implicit */signed char) (_Bool)1);
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((arr_14 [i_2] [(unsigned short)10] [(unsigned short)10] [i_2]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((4294967277U), (((/* implicit */unsigned int) (unsigned char)41))))) == (max((((/* implicit */unsigned long long int) (_Bool)1)), (627515393382596464ULL)))))))))));
            arr_18 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)43460))));
            arr_19 [i_2] = ((/* implicit */short) ((unsigned int) max((-7346921429046415208LL), (7627160543383173988LL))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (signed char i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)46)) == (-1))))) != (-7627160543383173989LL)));
                    var_24 = ((/* implicit */unsigned int) var_3);
                    var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)22229)) ? (-7346921429046415201LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((8773324856635653276ULL) - (8773324856635653266ULL)))))))), (((/* implicit */long long int) 1384077345))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (_Bool)1))))))), (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) var_2)))))))));
}
