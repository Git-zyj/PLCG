/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123266
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 2]))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = (((((-(((/* implicit */int) arr_4 [i_1] [i_0 + 2] [i_0])))) + (2147483647))) << ((((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((int) arr_3 [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) != (2130706432U)))))) - (1))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_0 [i_0]))));
        }
        for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (unsigned char)255)))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((2147483643), (((/* implicit */int) (unsigned short)4))))))))));
                var_21 *= ((/* implicit */short) arr_11 [i_2] [i_0] [i_0] [12]);
                arr_12 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_18);
            }
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
            {
                arr_15 [16ULL] [i_2] = ((/* implicit */short) (+(((unsigned int) ((arr_0 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                var_22 = ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) ((2147483636) != (((/* implicit */int) (unsigned short)65535))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
            {
                var_23 ^= ((/* implicit */unsigned int) ((-2147483643) > (((int) ((((/* implicit */int) (signed char)-106)) <= (arr_14 [(unsigned short)11]))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_5]))))))))));
                arr_18 [(_Bool)1] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) arr_1 [i_0]));
                arr_19 [i_0] [i_5] [i_5] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */int) (signed char)94)) << (((((-6005321840810891483LL) + (6005321840810891514LL))) - (15LL))))) <= (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) arr_17 [i_0] [i_2 - 1] [18ULL]))))))));
            }
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)32739))))));
        var_25 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-93))));
    }
    var_26 = ((/* implicit */int) var_3);
    var_27 = ((/* implicit */signed char) ((unsigned char) var_18));
}
