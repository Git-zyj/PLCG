/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150602
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
    var_16 = ((/* implicit */unsigned char) ((signed char) (unsigned short)53367));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_17 = ((/* implicit */int) var_3);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (unsigned short)22307))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-118))))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */long long int) 2147483647)) : (-3151919756258727232LL))))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)110)), (((((/* implicit */_Bool) -638122172)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                    var_18 = ((((/* implicit */int) (unsigned char)12)) - ((-(-716215324))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) && (((/* implicit */_Bool) 3151919756258727219LL))))) > (min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_5))))), (arr_2 [i_0])))));
                }
                for (signed char i_3 = 4; i_3 < 15; i_3 += 1) 
                {
                    arr_12 [i_3] [i_3] [i_3 - 4] = ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-93)), (arr_8 [i_3 - 3] [i_3 - 1] [i_3 - 4] [i_3 + 1])))) % ((-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [10] [10])) : (((/* implicit */int) (unsigned char)207)))))));
                    var_20 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 - 3])) && (((/* implicit */_Bool) (unsigned char)89)))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0]))))), (((((/* implicit */_Bool) -716215324)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (511LL)))))) ? ((~(arr_6 [i_3 + 1] [15]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 638122194)) ? (((/* implicit */int) (unsigned char)135)) : ((-(638122187))))))));
                    var_22 &= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_5)))) - (min((-1396035539), (((/* implicit */int) (signed char)3))))));
                    var_23 = ((/* implicit */signed char) ((int) (unsigned char)196));
                }
                for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-2074374016)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 3151919756258727231LL))) ? ((~(-8619099530770056589LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)96)), (1023LL)))) ? (min((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_5] [i_6] [i_4] [i_6 - 1])), (arr_5 [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned char)4)))))))) ? (((max((arr_6 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)7)))) / (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)130)), (var_0)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (1747284767) : (((/* implicit */int) arr_14 [i_4] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_4 [i_4] [(signed char)10] [i_0]))))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)92)), (var_2)))) - (86)))))) ? (max((267476681), (((/* implicit */int) (signed char)31)))) : (max((((/* implicit */int) (unsigned char)246)), (min((((/* implicit */int) arr_17 [i_0] [(unsigned char)4] [(unsigned char)4] [i_7] [i_8])), (arr_22 [i_7]))))))))));
                                arr_29 [i_0] [i_1] [i_4] [i_4] [i_7] [i_4] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_26 [i_7 + 3] [i_7 + 2] [i_7 + 3] [i_7] [i_7 + 3] [i_7 + 3]))))))));
                            }
                        } 
                    } 
                }
                arr_30 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_0])) ? (((((/* implicit */int) (unsigned char)254)) >> (((((/* implicit */int) (signed char)113)) - (101))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4695849112364543074LL)))))))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) var_1))))));
                var_27 ^= ((/* implicit */unsigned char) -1183618710);
                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_23 [i_1] [i_1] [i_0] [i_0]))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_0] [i_0] [i_0])), ((unsigned char)213)))) ? (((((/* implicit */int) var_5)) ^ (-1))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_0])) ? (((/* implicit */int) (signed char)3)) : (var_7)))))));
            }
        } 
    } 
}
