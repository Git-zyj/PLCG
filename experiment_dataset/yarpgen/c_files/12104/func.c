/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12104
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
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = ((/* implicit */_Bool) (unsigned char)69);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 *= ((/* implicit */unsigned short) (_Bool)0);
        var_17 = ((/* implicit */long long int) (unsigned short)3983);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [(unsigned char)4] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)5366))));
            var_18 = ((/* implicit */unsigned char) ((0ULL) << (((((/* implicit */int) (unsigned char)131)) - (129)))));
            var_19 ^= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (5176519368709034597LL));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)29128);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_20 = ((((/* implicit */int) (unsigned char)253)) >= (((/* implicit */int) (unsigned short)57195)));
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12704)) % (((/* implicit */int) (unsigned char)106))));
                arr_10 [i_0] [i_1] [i_0] [i_1] = ((1707426378597027120ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3967))));
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)143)) <= (((/* implicit */int) (short)-5367))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (12ULL)));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (long long int i_5 = 4; i_5 < 10; i_5 += 1) 
                {
                    for (signed char i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8341)) == (((/* implicit */int) (signed char)-31))));
                            arr_22 [i_4] [i_0] = ((/* implicit */unsigned short) (unsigned char)210);
                        }
                    } 
                } 
            } 
            var_25 |= ((9092033727928883807ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5366))));
        }
        var_26 = ((/* implicit */signed char) ((5739636019379191668LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30006)))));
        var_27 ^= ((/* implicit */signed char) -2332403268299026600LL);
    }
}
