/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127561
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15815)) & (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((short) (unsigned char)197))) : (((/* implicit */int) (unsigned short)40527))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23292)))));
                                var_13 = ((/* implicit */signed char) 18042116305303980288ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (-(var_6)));
                                arr_17 [i_1] [i_0] [i_0] [i_2] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) 15211850727990490645ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (4239061066676749574ULL)))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) + (1851169694)))) ? (15211850727990490652ULL) : (((/* implicit */unsigned long long int) var_6)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8102184512863749256LL), (((/* implicit */long long int) (unsigned char)112))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 1107593465302839199LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) : (15211850727990490645ULL)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) ((((/* implicit */long long int) 1314293043)) ^ (var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)3485))));
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            arr_25 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (11611061875525701732ULL) : (var_10)))) ? ((+(3872129239U))) : (((/* implicit */unsigned int) var_0))));
            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (((((/* implicit */_Bool) (short)-20683)) ? (3024009081U) : (3279660191U)))));
        }
        for (int i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            arr_28 [i_9] = ((/* implicit */short) ((_Bool) var_5));
            arr_29 [i_9] [i_9] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))));
        }
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551603ULL)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) 3786450270903979159ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551603ULL)))))) ? (max((((((/* implicit */_Bool) 9223372036846387200LL)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) -124046024)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) ((int) (+(12952361140829516547ULL)))))));
}
