/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112242
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) 143552238122434560LL);
                var_20 = ((/* implicit */short) ((int) arr_0 [i_0] [i_1]));
                var_21 ^= (((+(((/* implicit */int) (unsigned char)228)))) < (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [(unsigned char)14])) : (((/* implicit */int) var_18)))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)33)) - (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        for (long long int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            {
                var_23 -= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)228)), ((+(((/* implicit */int) var_1))))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)38)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 3] [i_2]))))))))));
                /* LoopSeq 3 */
                for (int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    var_25 &= ((/* implicit */unsigned int) ((long long int) var_4));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_16))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((max((14766999773050784697ULL), (((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_3] [i_2 + 1])))) << (((((/* implicit */int) ((unsigned char) arr_4 [i_3] [i_3]))) - (236)))))));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) 20U)))))));
                    var_28 = ((/* implicit */unsigned short) var_2);
                    var_29 = ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) -4517905419396391273LL)) ? (var_8) : (-2617771443950720242LL)))))));
                }
                for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    var_30 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_2 - 1] [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_7 [i_2]))) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_11 [i_2] [i_2 - 3])));
                    var_31 = ((/* implicit */unsigned short) ((((_Bool) arr_3 [i_2 - 2] [i_3] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 2617771443950720226LL)))) && (((/* implicit */_Bool) (unsigned char)114)))))) : (max((((/* implicit */long long int) arr_18 [i_2 - 1] [i_2] [(short)8] [i_6 + 1])), (((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (var_2)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_32 ^= ((/* implicit */long long int) var_5);
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6795)) ? (((((/* implicit */_Bool) 2920483317U)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (short)-19214))))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_6 - 1])) ? (((/* implicit */unsigned long long int) 635191386)) : ((+(arr_0 [i_6] [i_6 - 2])))));
                        var_35 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)127)))));
                    }
                }
            }
        } 
    } 
    var_36 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) ((signed char) (short)-15540))))));
}
