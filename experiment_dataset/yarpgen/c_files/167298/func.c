/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167298
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (min((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (2514411620384259957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3309992142U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 3ULL))) >> (((/* implicit */int) ((((/* implicit */_Bool) 3ULL)) && (((/* implicit */_Bool) var_1))))))))))));
                            var_12 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0] [(unsigned char)2]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned int) ((long long int) (+(3309992147U))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((min((((18446744073709551613ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), ((+(18446744073709551605ULL))))) - (((((/* implicit */_Bool) 1077389098U)) ? (((18446744073709551611ULL) - (((/* implicit */unsigned long long int) 3217578208U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_4] [i_4] [i_5]))))))))));
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1444040396117227213LL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8]))) * (3217578207U)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8]))) : (18446744073709551609ULL)))));
                                arr_26 [i_8] [i_0] [i_6] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18446744073709551601ULL), (((13189238792862209487ULL) << (((((/* implicit */int) (unsigned short)28158)) - (28122)))))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3217578196U)))))));
                                var_16 = ((/* implicit */unsigned short) max(((+(var_1))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8924955824822734488LL))))), (arr_12 [i_7 - 2] [i_1] [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
