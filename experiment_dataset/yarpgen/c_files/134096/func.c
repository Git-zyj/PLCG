/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134096
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
    var_11 &= ((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (4118792045141184449LL)));
    var_12 = ((/* implicit */int) max((var_12), (var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) -4118792045141184450LL);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)241)) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_6 [i_1] [i_1]))));
                        var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_1] [i_0 - 1]))));
                    }
                    arr_14 [i_0] [4] [(unsigned char)14] [i_2] &= ((/* implicit */short) (unsigned char)172);
                    var_15 |= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1 + 1])) ^ (((/* implicit */int) (unsigned short)13441))));
                    arr_15 [i_1] [i_1 + 1] [i_2] = ((unsigned char) (-(((/* implicit */int) arr_2 [i_2] [i_0]))));
                }
            } 
        } 
        arr_16 [i_0] = ((-3664961355789432923LL) + (611157523591245448LL));
        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 4) 
    {
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
        var_18 += ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_18 [i_4]))))));
    }
    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 4) 
    {
        var_19 -= ((/* implicit */short) arr_7 [i_5 - 3] [i_5]);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((((((/* implicit */int) arr_21 [i_5])) != (((/* implicit */int) arr_17 [i_5] [i_5])))) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [9ULL] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_5])))), (((/* implicit */int) ((unsigned short) arr_1 [i_5]))))))));
    }
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)59572)) : (((/* implicit */int) ((var_10) < (((/* implicit */int) (unsigned char)111))))))) >= (((/* implicit */int) (((+(((/* implicit */int) (signed char)-88)))) > (((/* implicit */int) max(((short)9395), (((/* implicit */short) (unsigned char)105)))))))))))));
}
