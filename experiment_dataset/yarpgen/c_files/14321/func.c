/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14321
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)152)) * ((-(((((/* implicit */_Bool) 2295080749U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)5073)))))))), ((~(((/* implicit */int) var_17))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 *= ((/* implicit */signed char) (-(min((((/* implicit */int) (unsigned short)60463)), ((-(((/* implicit */int) (_Bool)0))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 3] [i_1] [5LL])) ? (var_8) : (((/* implicit */int) (unsigned short)5159))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((short) arr_4 [i_0] [i_2 + 2])))));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) (signed char)-117)) ? (arr_6 [i_0] [i_0] [i_3]) : (((/* implicit */int) (signed char)98))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) -1642702325)), (((((/* implicit */_Bool) var_7)) ? (2372714956309206108LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) | (((/* implicit */long long int) (+(max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */int) var_14)))))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)240)))))) ^ (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)26732)))) && (((_Bool) var_18)))))));
    var_24 = ((/* implicit */int) var_11);
}
