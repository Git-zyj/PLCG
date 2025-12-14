/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148194
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)-8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) : (max((9006924376834048ULL), (((/* implicit */unsigned long long int) 32767LL))))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))) ? (((((/* implicit */_Bool) 492195759)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1])) : (((/* implicit */int) var_3))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)10)))) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) ((signed char) arr_3 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_15 [i_3] [1LL] = ((/* implicit */long long int) arr_11 [i_3] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_21 [4U] [i_3] [i_5] [i_5] [i_6] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_5] [i_5] [i_5] [i_6 - 2] [i_6 + 1] [i_6])) * (((/* implicit */int) (signed char)70))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (((((/* implicit */_Bool) 305492582)) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (9006924376834054ULL))) : (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) : (18437737149332717577ULL)))))));
                                arr_22 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_11 [(_Bool)1] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_2] [i_2] = -4209660068281398342LL;
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9006924376834065ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((562560225U) | (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
