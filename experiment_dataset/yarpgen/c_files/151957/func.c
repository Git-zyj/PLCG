/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151957
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (unsigned char)250)) + (((/* implicit */int) (short)0)))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                var_21 &= ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min(((short)0), (((/* implicit */short) arr_5 [(signed char)2] [(signed char)4] [i_2] [i_3])))), (((/* implicit */short) arr_3 [i_0] [i_0] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_1])))) ? ((+(-881750622))) : ((~(((/* implicit */int) var_17)))))))));
                                arr_12 [(unsigned char)11] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((signed char) ((4402247253117197244LL) & (arr_2 [i_2 + 1] [i_1] [i_2 + 1]))));
                                var_23 -= ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_11 [i_0] [i_3] [i_2 - 2] [i_2 - 2])))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 - 2] [i_3])) ? (((/* implicit */int) var_7)) : (var_19)))));
                            }
                            for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                            {
                                var_24 -= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)250)))), (((((/* implicit */_Bool) 4094265071588343802LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
                                var_25 |= ((signed char) min(((signed char)30), (arr_3 [i_2 - 1] [i_3] [i_5 + 1])));
                            }
                            var_26 = ((/* implicit */long long int) min((((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))), ((((_Bool)0) || (((/* implicit */_Bool) arr_6 [i_0] [i_2 - 2]))))));
                            var_27 &= ((/* implicit */short) min((((-4871209228137107638LL) - (((/* implicit */long long int) -1012634232)))), (((/* implicit */long long int) arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_22 [2U] |= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (4402247253117197244LL))), (((/* implicit */long long int) min((((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])), (var_13))))));
                            arr_23 [i_7] [(unsigned char)13] = ((/* implicit */int) min((var_1), (((/* implicit */unsigned long long int) min((-1LL), (var_16))))));
                            arr_24 [14] &= ((/* implicit */unsigned short) (unsigned char)5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 |= ((/* implicit */unsigned short) 7197746506989458911LL);
}
