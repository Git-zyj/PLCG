/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126838
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
    var_12 = min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))), (((((/* implicit */int) (unsigned short)3)) >> (((((/* implicit */int) (unsigned char)205)) - (192))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((short) var_2));
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 8; i_2 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    var_14 = var_11;
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) var_0);
                        var_16 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_6)))) * (((/* implicit */int) (signed char)40))));
                        var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-28))));
                    }
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_1 - 2]))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_10 [(signed char)3] [(signed char)3] [i_3] [(signed char)3] [(signed char)8] [(signed char)4]))));
                        var_20 = ((/* implicit */short) (+(4956288248472323018LL)));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        var_22 = ((/* implicit */short) (signed char)84);
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) -8458378770292458225LL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-40))))));
                    }
                    var_24 += ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_9 [3LL] [(unsigned char)2] [(unsigned char)0] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_3] [i_3] [i_3]))));
                    var_25 += ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1] [i_0]);
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((short) (short)10751));
                    arr_16 [(signed char)4] [i_1] [i_7] [0ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-12321)) || (((/* implicit */_Bool) (signed char)-28))));
                    var_27 += ((signed char) (signed char)87);
                }
                var_28 = ((/* implicit */long long int) var_5);
            }
            for (short i_8 = 3; i_8 < 8; i_8 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_8 + 1]))) * (arr_8 [i_8 - 3] [i_8 - 3] [i_1 - 2])));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [(signed char)8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [4ULL]))) * (arr_8 [(signed char)4] [(unsigned short)2] [(unsigned short)2])))))))));
                var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1 - 2] [i_8 - 3]))));
            }
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)28))))) ? ((+(((/* implicit */int) (signed char)-32)))) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1 - 2] [i_1]))));
        }
        var_33 += ((/* implicit */short) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_6))));
    }
}
