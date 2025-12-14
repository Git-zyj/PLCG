/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122578
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)107)) ? (3187350330197797010ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_20 = ((/* implicit */int) (signed char)-15);
                var_21 = ((/* implicit */unsigned char) arr_4 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)6133));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)6124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-111))));
                            arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] [i_2] = ((/* implicit */signed char) var_8);
                            var_23 = arr_1 [i_0] [i_0];
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                arr_19 [i_0 + 1] [i_1 - 3] [i_0] = ((/* implicit */unsigned int) ((((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_15))))) ? ((+(var_6))) : ((-(18446744073709551615ULL)))));
                var_24 = ((/* implicit */long long int) ((arr_17 [i_0] [i_1 - 3] [i_0 - 1] [i_1 - 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_1 + 1])))));
            }
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                arr_22 [(signed char)15] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (4194303))))) | (67108863U)));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_0] [i_0 - 1] [i_1 - 3] [i_6])) && (((/* implicit */_Bool) var_10))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11)))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_6] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned short) arr_12 [i_0] [i_1] [i_6] [i_7] [i_8]));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_1 - 3] [i_6] [i_7] [(signed char)0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0])))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (_Bool)1))));
            }
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((arr_7 [i_0 + 1] [i_1 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 4]))) : (var_6))))));
            var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) 4227858447U))))) % (((/* implicit */int) (unsigned short)6129)));
        }
        arr_31 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0 - 1] [i_0 - 1]) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_0 - 1] [8U])) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_15 [i_0 - 1] [i_0])))))));
    }
    var_31 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_5)))))));
    var_32 = ((/* implicit */unsigned int) var_8);
    var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)110)) : (((int) (+(((/* implicit */int) (signed char)110)))))));
}
