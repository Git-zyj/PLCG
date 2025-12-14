/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161327
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) / (arr_2 [i_0]))), (arr_2 [i_1]));
                arr_4 [i_0] [i_0] = ((/* implicit */short) max((arr_2 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8356)))))) ? (max((1125849544865327673ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((arr_2 [i_1]) | (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)512)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) - (min((((/* implicit */unsigned long long int) (unsigned short)510)), (1948720222012579522ULL)))))));
                            var_15 = ((/* implicit */int) max(((((-(((/* implicit */int) (unsigned char)177)))) != (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [(signed char)0] [i_1] [i_2] [i_3])), ((short)-32648)))))), ((!((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_3]))))))));
                            var_16 -= ((/* implicit */int) ((((/* implicit */int) (unsigned char)175)) >= (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))))))))));
                            var_17 *= arr_2 [(unsigned short)7];
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(355644358)))) / (max((((/* implicit */unsigned long long int) -9019325526536948013LL)), (arr_7 [i_0] [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0] [i_1])) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) (unsigned short)512)) ? (((/* implicit */int) (short)-32648)) : (((/* implicit */int) (unsigned char)243))))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)65023), (((/* implicit */unsigned short) var_7))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-1))))) ? (((var_4) | (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_0)))))))));
}
