/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148002
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)1023))))))) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))), (var_18)))));
    var_21 = ((/* implicit */long long int) (+((((-(var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1009)))))));
    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) | (var_11)));
    var_23 = ((/* implicit */unsigned short) var_19);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(-4925014417406252348LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (15511138311749970422ULL) : (17817896643038607557ULL)))) || (((/* implicit */_Bool) 4925014417406252348LL)))))) : ((+((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64527)))))))));
                                var_25 = ((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */long long int) max((1134020988U), (((/* implicit */unsigned int) (unsigned short)1023))))) : (min((4925014417406252363LL), (var_11))))));
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4785951826889461850ULL), (17817896643038607557ULL)))) ? (-4925014417406252326LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) + (arr_0 [i_2 - 1] [i_4])))));
                                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1035))))))));
                                var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(var_4)))), (((((/* implicit */long long int) ((var_10) ^ (((/* implicit */int) (_Bool)0))))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9035216167613202295LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_28 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_2] [i_0] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65207))) : (var_4)))), (var_5)))));
                                arr_17 [i_2] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_2] [i_5])) ? ((-(((((/* implicit */long long int) var_17)) + (var_3))))) : (((((/* implicit */_Bool) (+(13525580084647459991ULL)))) ? (2903511874197491053LL) : (((/* implicit */long long int) ((2147483647) - (((/* implicit */int) (unsigned char)220)))))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 0U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8086416258279092337LL)) ? (((/* implicit */long long int) 3160946287U)) : (arr_6 [i_5] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4925014417406252345LL)) ? (var_11) : (((/* implicit */long long int) var_10))))) : ((-(17506678726454961398ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
