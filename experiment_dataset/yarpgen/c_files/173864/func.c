/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173864
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
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) ? (arr_1 [i_0]) : ((+(arr_1 [i_0])))));
                    var_20 += ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_11)))));
                    arr_6 [i_0] [i_1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_4 [i_0] [i_0] [i_2 + 2]))))) ? (((/* implicit */int) (short)-512)) : (((((((/* implicit */int) (unsigned char)250)) << (((((/* implicit */int) arr_3 [1ULL] [i_1])) - (177))))) & (arr_0 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_14 [i_3] [i_4] [i_5]);
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [(unsigned short)6])) ? (((((/* implicit */int) arr_19 [i_6])) << (0ULL))) : (((/* implicit */int) ((unsigned short) arr_9 [i_3])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [i_4] [i_4]))) : (var_11)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_7)))) ? (((((/* implicit */_Bool) 864488007U)) ? (((/* implicit */int) var_4)) : (var_10))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-25)) <= (((/* implicit */int) (_Bool)0)))))))));
                                var_23 ^= ((/* implicit */int) ((unsigned char) 6863844654937527451ULL));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >= (min((((int) var_1)), (((((/* implicit */_Bool) (short)25278)) ? (arr_13 [i_3] [i_5] [5] [3LL]) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)65)), ((unsigned short)40095)))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) -5805030410110346158LL)) && (((/* implicit */_Bool) arr_8 [i_3]))))))) : (((int) var_5))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)25278)) ? ((+(((/* implicit */int) (unsigned char)169)))) : ((-(arr_20 [i_3] [i_3] [i_4 + 3] [i_4] [(unsigned short)12] [i_4])))))));
            }
        } 
    } 
    var_27 = 1936654981U;
}
