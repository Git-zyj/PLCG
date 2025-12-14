/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129080
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
    var_18 *= ((/* implicit */unsigned short) (short)-15742);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9336869162698217161ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2])) : (((/* implicit */int) (short)-15750))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_8 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32752))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_2] [i_2] [i_2] [i_0])))));
                    arr_9 [i_2] [i_1] = max(((+(((((/* implicit */_Bool) (short)-15732)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (signed char)-8)))))), (((/* implicit */int) (short)15296)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) * (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (5277751063839816105ULL)))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) 7563375075969413817ULL)) ? (((/* implicit */int) (unsigned short)58266)) : (((/* implicit */int) (signed char)-112))))))));
                    arr_19 [i_5 - 1] [i_4] = ((/* implicit */unsigned long long int) (+(min((arr_13 [i_5 - 2] [i_4]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30505)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned char)109)))))))));
                    var_21 = ((/* implicit */signed char) max((((unsigned int) arr_14 [i_3] [i_5 - 2])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-31366)), (16509781060350156969ULL)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)88)), ((short)15734)))) : ((+(((/* implicit */int) (signed char)15)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (+(((((/* implicit */int) max(((short)15742), (((/* implicit */short) (signed char)-81))))) % ((+(((/* implicit */int) (signed char)-93))))))));
}
