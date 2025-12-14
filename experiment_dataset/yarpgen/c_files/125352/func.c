/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125352
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_20 -= ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) var_7))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_22 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_2] [i_3] [i_4] [i_4]))) * (((unsigned int) var_12))));
                            var_23 *= ((/* implicit */_Bool) arr_1 [i_5]);
                        }
                    } 
                } 
            } 
            var_24 -= ((/* implicit */signed char) var_1);
        }
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            var_25 += ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-19));
            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            var_27 ^= ((/* implicit */signed char) arr_3 [i_7]);
            arr_23 [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_7]))));
            arr_24 [i_0] [i_7] = ((/* implicit */unsigned int) ((1428102092129440183ULL) - (((6969520959490684537ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_25 [i_7] = ((/* implicit */_Bool) ((unsigned int) arr_10 [i_7]));
        }
        arr_26 [i_0] [i_0] = (_Bool)1;
        arr_27 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (var_4)))));
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 24; i_8 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) (_Bool)0)))))));
        arr_30 [i_8] [i_8 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (5467959204069721082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)));
        arr_31 [i_8] = ((/* implicit */int) ((arr_28 [i_8]) == (arr_29 [i_8])));
    }
    var_29 = (((_Bool)1) ? (((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))))) : ((((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1693))) > (4611686001247518720ULL))))))));
}
