/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171952
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
    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) && (((/* implicit */_Bool) (+(var_8))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) % (((/* implicit */int) arr_1 [i_1 + 3] [i_1 - 1]))))));
                    var_14 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (+(((/* implicit */int) var_6))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        arr_9 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                        var_15 += ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) var_4))))));
                        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (((((/* implicit */unsigned long long int) var_10)) - (var_8)))))) ? (((/* implicit */int) (!(((((/* implicit */long long int) var_5)) != (5258242905056117411LL)))))) : (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_3])))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (min((var_5), (((/* implicit */unsigned int) arr_6 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_9)))))) : (var_8)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */int) arr_12 [i_2] [i_1] [i_0] [i_2])), (((arr_1 [i_2] [i_2]) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) var_3)))))));
                        arr_14 [i_2] [i_4] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))) != (var_10))))) : (((unsigned long long int) var_10))));
                        arr_15 [i_2] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) (unsigned short)17435);
                        var_17 = max((((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1 + 3]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (max((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) var_9))))));
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((var_3) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) arr_3 [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) ((int) (unsigned short)28427)))))) : ((((+(var_8))) >> (((((int) var_5)) - (1996772698)))))));
                    }
                    var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) (+((~(arr_11 [i_0] [i_2])))))), (3501499172U)));
                }
            } 
        } 
    } 
}
