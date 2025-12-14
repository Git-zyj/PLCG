/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151568
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
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_20 &= ((/* implicit */_Bool) (+(arr_1 [i_0])));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)5))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) (((+(815410127))) >> (((2047) - (2018)))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_23 = var_19;
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_19 [i_5] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((815410135), (arr_8 [i_2] [i_4])))), (144113680892865709ULL))), (((/* implicit */unsigned long long int) ((9223372036854775784LL) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_3]))))))));
                                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((max((-9110136608314681501LL), (((/* implicit */long long int) (unsigned short)40185)))) > (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)0))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) -52170404);
                    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */short) (unsigned char)127))))) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)10))))))), (((unsigned long long int) 815410127))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned long long int) (signed char)39))) ? (min((2247993615U), (((/* implicit */unsigned int) arr_13 [i_2] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_13)))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))))))));
                        var_27 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -629429772302391133LL))))), (min((((/* implicit */long long int) arr_5 [i_2])), (var_2)))));
                    }
                }
            } 
        } 
    }
    var_28 += ((/* implicit */unsigned short) var_7);
}
