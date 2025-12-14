/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159981
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_1 + 2] = ((/* implicit */int) (signed char)18);
                arr_7 [8LL] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) -1)), (3636383331U)));
                arr_8 [i_0] [i_0] [i_1 + 1] = ((/* implicit */short) -1496905338);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (-1496905338) : (1496905337)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))) : (min((-1496905350), (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), ((short)-26489)))), (((((/* implicit */_Bool) -1065835202)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-25))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)32)), ((short)6639))))) : (((((/* implicit */_Bool) 1360391054141677334ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    var_13 ^= ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 451818804)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12207982192737416335ULL)) ? (((/* implicit */int) (unsigned short)45998)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((short)11261), ((short)11)))) : (((/* implicit */int) (short)10880))))));
                    var_15 = ((/* implicit */_Bool) -15LL);
                }
            } 
        } 
    } 
}
