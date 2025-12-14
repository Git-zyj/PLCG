/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139212
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [(_Bool)1] [i_2] = ((/* implicit */_Bool) -1917846628);
                    var_15 ^= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647ULL)) ? (((/* implicit */int) (signed char)63)) : (-1917846624)))), (13848787140763710057ULL))), (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_0]))))));
                    arr_9 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])), ((~(2147483647ULL)))));
                    var_16 ^= ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (18446744071562067968ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33012))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] [4ULL] = ((/* implicit */unsigned long long int) ((short) 16777215LL));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(var_6)))), (arr_16 [i_3] [i_3] [(unsigned short)7] [i_6])));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_5 [(unsigned short)3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) -1315300816362492533LL)), (min((((/* implicit */unsigned long long int) arr_13 [i_9])), (18446744071562067969ULL))))))));
                                var_20 = ((/* implicit */unsigned int) max((min(((+(18446744071562067969ULL))), (max((arr_1 [i_5]), (18446744071562067969ULL))))), (min((((((/* implicit */_Bool) arr_25 [i_3] [i_5] [i_8] [i_9])) ? (18446744071562067977ULL) : (arr_25 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (-(-5183928542409297045LL))))))));
                                arr_31 [i_4] [i_9] = ((/* implicit */_Bool) max((arr_21 [i_3] [i_4] [i_8]), (((/* implicit */unsigned long long int) (+(arr_11 [i_3]))))));
                                arr_32 [i_3] [i_3] [i_4] [i_4] [i_8] [i_9] = ((/* implicit */_Bool) arr_3 [6] [5U]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_7);
}
