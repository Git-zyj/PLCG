/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110921
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */_Bool) (unsigned short)10370);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-24)), (arr_9 [i_3] [i_0] [i_1] [i_0])));
                                var_20 = ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_1] [i_0] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 9151314442816847872ULL)) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (((/* implicit */int) min(((unsigned short)10381), (((/* implicit */unsigned short) (unsigned char)244))))))), (((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 15095537615854867120ULL)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55165)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-24))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5))))))));
}
