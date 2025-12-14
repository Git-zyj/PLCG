/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148823
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (-(((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min(((((-(918063459))) == (var_9))), ((_Bool)1))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)222)) / (407194687)));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0 - 2] [i_3 - 1] [i_1]))));
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 1])) != (((/* implicit */int) arr_0 [i_0 - 2])))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_14 += ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_6))))))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) | (3397380231122674497LL)));
                        var_16 ^= ((/* implicit */_Bool) (-(min(((+(arr_14 [i_0] [i_1] [i_2] [i_4]))), (arr_14 [i_0] [i_0] [i_2] [i_0])))));
                        arr_17 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(2078693572)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) min((min(((+(12189067430156493835ULL))), (((/* implicit */unsigned long long int) -3495542036099997356LL)))), (((/* implicit */unsigned long long int) (short)32749))));
                        arr_22 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_10 [i_0 - 1]);
                        var_18 &= ((/* implicit */int) var_6);
                    }
                    arr_23 [i_1] = ((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) (unsigned char)237)))), (((/* implicit */int) (unsigned char)151))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_32 [i_1] [i_1] [i_1] [i_2] [i_2] [i_6] [i_7] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_6 [i_1] [i_1])))), (max((((/* implicit */int) (unsigned char)182)), (arr_5 [i_0 + 2] [i_0 + 2])))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_11 [i_7] [i_7] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((min((((/* implicit */unsigned long long int) arr_3 [i_2])), (2409551019416367333ULL))), (((/* implicit */unsigned long long int) max((arr_21 [i_2]), (((/* implicit */long long int) (unsigned short)18544)))))))));
                    var_21 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0] [i_0] [i_0 + 1]))), (((/* implicit */unsigned int) (short)-32750))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(var_2))))));
    var_23 = ((/* implicit */long long int) var_4);
}
