/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126981
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (var_12)))) : (((((/* implicit */_Bool) -1233839595150518560LL)) ? (((/* implicit */int) (short)13568)) : (((/* implicit */int) (signed char)90))))))) ? (min((((/* implicit */unsigned long long int) min((var_7), ((unsigned short)52052)))), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                var_14 = ((/* implicit */unsigned long long int) min(((+(arr_2 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) max((arr_3 [i_0] [(unsigned short)4] [i_1]), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (_Bool)1)))))))));
                var_15 = ((/* implicit */signed char) var_2);
                arr_4 [i_0] = ((/* implicit */signed char) (unsigned char)89);
                var_16 = ((/* implicit */unsigned short) (signed char)-21);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_3]);
                    arr_14 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_1);
                    var_18 &= ((/* implicit */_Bool) (signed char)-84);
                }
                arr_15 [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(-1545499935)))) ? (min((arr_3 [i_2] [i_2 + 2] [i_3]), (((/* implicit */int) var_6)))) : (-2094388085)))));
            }
        } 
    } 
}
