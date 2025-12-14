/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121957
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13688708328728465975ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (var_6)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned char)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1947352853U)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (unsigned char)1))))))) : (((((3207119566U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))) ? (((2481237496U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_12 = min((((/* implicit */unsigned short) ((((long long int) var_2)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -484844369)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (23U))))))), (min((((/* implicit */unsigned short) var_10)), ((unsigned short)62612))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)10)))) >> ((((~(15586556618725829333ULL))) - (2860187454983722270ULL)))));
                var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)-31310))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-1051817782643541711LL)))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned char)255))));
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_0)), (var_1))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)18)))))))), ((+(((((/* implicit */unsigned long long int) var_9)) + (arr_6 [9ULL] [(unsigned short)7])))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6112028352968542596LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)116))))) || (((/* implicit */_Bool) arr_9 [i_2] [i_3]))));
                    arr_13 [i_2] [i_4] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-1) == (((/* implicit */int) (signed char)20))))) - (((/* implicit */int) (unsigned char)250))));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4 + 3] [i_3] [i_4])) ? (((((/* implicit */_Bool) 2481237496U)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)17524))))))), (arr_12 [i_4])));
                }
            } 
        } 
    } 
}
