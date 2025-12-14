/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120476
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((+(1004355846U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                arr_4 [i_0] [14U] = ((/* implicit */unsigned char) 1549371256U);
            }
        } 
    } 
    var_19 |= ((/* implicit */long long int) ((min((2745596038U), (((/* implicit */unsigned int) (unsigned char)89)))) >> (((min((var_13), (((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) == (((/* implicit */int) var_2))))))) + (616756459)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            {
                arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19506)) ? (15147912119680914904ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3370635503U)) ? (((((/* implicit */_Bool) (short)6509)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) var_11)))) : (-2058296129)))) : (3065139388U)));
                arr_11 [i_2] = (signed char)-3;
            }
        } 
    } 
    var_20 += ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)46057)), (2656450603049889087LL)));
}
