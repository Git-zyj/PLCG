/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14544
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
    var_14 += ((/* implicit */unsigned long long int) min((((var_4) ? ((~(var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))))), (((/* implicit */unsigned int) var_2))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53269))) : (1298203040U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)12265)) ? (((/* implicit */int) (unsigned short)12267)) : (((/* implicit */int) (signed char)-38)))), (((/* implicit */int) (unsigned short)12283))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)12292))))) / (arr_6 [i_0])))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1 + 2] [(short)8] [i_1])), ((unsigned short)53244))))) <= ((~(-4133264591755682069LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) 3878064484U);
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12274)) ? (((/* implicit */int) max((var_0), (arr_0 [i_1 + 3])))) : (max((((/* implicit */int) ((((/* implicit */_Bool) 416902834U)) && (((/* implicit */_Bool) (signed char)16))))), (((int) (short)24))))));
                                arr_16 [(signed char)2] [i_1 - 2] [i_2] [i_3] [i_4 + 3] [i_0] = ((/* implicit */unsigned short) (~(((unsigned long long int) max((var_6), (((/* implicit */unsigned short) var_10)))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (short)31))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((((((/* implicit */_Bool) (unsigned short)53248)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) - (416902812U))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 2] [i_0]);
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */signed char) (~((-((-(((/* implicit */int) (short)15))))))));
}
