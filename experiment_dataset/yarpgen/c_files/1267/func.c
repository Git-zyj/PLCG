/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1267
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
    var_12 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (unsigned char)13)), ((~(6850422096916679473ULL))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)14613), ((unsigned short)20265)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) (~(((((/* implicit */int) ((unsigned short) (short)20326))) >> ((~(((/* implicit */int) (signed char)-32))))))));
                    var_13 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)58417))))) ? (((/* implicit */int) ((_Bool) (unsigned short)45264))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)1786)) >= (((/* implicit */int) (unsigned short)45271))))))), (((((((/* implicit */_Bool) (unsigned short)45271)) || (((/* implicit */_Bool) (unsigned short)63749)))) ? (((/* implicit */int) (short)7099)) : (((/* implicit */int) (unsigned char)160))))));
                }
            } 
        } 
    } 
}
