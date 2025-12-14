/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1230
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
    var_11 = ((/* implicit */unsigned char) ((unsigned int) min((var_3), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_5);
        var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) -1187005665)) / (3009998474U)))));
        var_14 = ((/* implicit */long long int) max((arr_1 [i_0 + 1] [i_0]), (1187005664)));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)-122)))))))));
            var_16 = ((/* implicit */unsigned long long int) 5541438178336023938LL);
        }
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) max((max((((0LL) + (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) min((((((/* implicit */int) (short)16384)) * (((/* implicit */int) (signed char)-122)))), (((((/* implicit */_Bool) arr_6 [i_3] [i_1])) ? (arr_6 [i_3] [i_1]) : (((/* implicit */int) var_6)))))))));
            arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) -1187005665)) * ((((!(((/* implicit */_Bool) arr_8 [i_1])))) ? (max((0LL), (((/* implicit */long long int) arr_5 [i_1] [i_3] [i_3])))) : (((/* implicit */long long int) arr_1 [i_1] [i_3]))))));
            arr_12 [i_1] [i_3] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)1))))) ? (min((-1187005665), (((/* implicit */int) var_7)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_6))))))));
        }
        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((arr_14 [i_4 - 1] [i_4 + 2]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_4 - 1] [i_4 + 1])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                arr_18 [i_1] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_4] [i_4])) % (((/* implicit */int) (unsigned char)87))));
            }
            var_19 = ((/* implicit */long long int) min((arr_2 [i_4]), (((/* implicit */int) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_0 [i_4]))))) <= ((+(((/* implicit */int) arr_16 [i_1] [i_4])))))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) 
            {
                var_20 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_6 [i_1] [i_4 - 3]))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    arr_24 [i_1] [i_1] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))))))), ((+(4419729629905879338ULL)))));
                    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1]))) ^ (4174077429U)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((15143600285457536604ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1461))))) << (((var_9) - (483988631)))))));
                    arr_25 [i_7] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) var_2);
                }
            }
            arr_26 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_4]))) & (8LL)))) ? (((((/* implicit */_Bool) arr_20 [i_4])) ? (1589521737132128344LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))))) : (arr_22 [i_4 + 1] [i_4 + 3] [i_4] [i_4 + 3] [i_4 - 1])))));
        }
        arr_27 [i_1] = ((/* implicit */signed char) var_1);
    }
}
