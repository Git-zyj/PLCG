/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16519
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
    var_10 = (-(((((/* implicit */_Bool) max((18446744073709551605ULL), (((/* implicit */unsigned long long int) var_4))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27247))))));
    var_11 = ((/* implicit */unsigned char) (((~(2023520250))) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)27246)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)-27246), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                var_13 = ((/* implicit */int) (short)5822);
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_1 + 2] [i_1 - 1] [i_2 - 1])) : (arr_2 [i_1] [i_2])));
                var_15 *= ((/* implicit */unsigned long long int) (+(arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 1])));
                var_16 = ((/* implicit */unsigned int) var_7);
            }
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_17 = ((/* implicit */int) (unsigned char)216);
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_2 [i_1 - 2] [i_1 + 2]))))));
                var_19 ^= ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)-33)))) * ((+(((/* implicit */int) (short)5817))))));
            }
            for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) (short)-5810);
                    var_21 = ((/* implicit */signed char) (-(((arr_11 [i_5 + 1]) + (5023123563656964110LL)))));
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_0 [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))))) > (((/* implicit */int) (unsigned short)7))));
                    arr_19 [i_5] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)219))));
                }
                var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)82)) ^ (((/* implicit */int) var_3))));
                var_24 = ((/* implicit */short) var_3);
            }
            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [(unsigned char)10] [7ULL] [i_1 + 2]))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        arr_23 [19ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (~(var_9)))) ? (-3133870671744894425LL) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) 10U))));
        arr_24 [i_6] [i_6] = ((/* implicit */signed char) -8266535968122890490LL);
    }
    var_26 = ((/* implicit */short) var_2);
    var_27 += ((/* implicit */unsigned char) max(((~(max((((/* implicit */unsigned long long int) var_0)), (var_7))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
}
