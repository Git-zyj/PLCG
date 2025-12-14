/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14736
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((int) -7870845123390662545LL)), (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)249))))))) ? (431610267) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned short)55839)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (var_8))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((-((-(var_8))))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)60)) >> (((((/* implicit */int) (signed char)-123)) + (137)))))), ((+(var_6))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        var_14 &= min((((arr_5 [i_2] [i_0]) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_0])) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_9))))))));
                        arr_11 [i_0] [i_1] = ((/* implicit */long long int) ((signed char) var_1));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_10))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0] [i_4] [i_4]), ((unsigned short)19809))))))) ? (((/* implicit */int) min((arr_10 [i_4] [i_1] [0U] [i_2] [i_2 - 1]), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) ((unsigned short) max((235932118), (((/* implicit */int) (unsigned char)63))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((long long int) ((_Bool) (unsigned char)58)));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_9 [i_1] [i_2 - 1])) : (arr_1 [i_2 - 1])))));
                    }
                }
            } 
        } 
    } 
}
