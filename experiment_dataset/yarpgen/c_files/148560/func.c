/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148560
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) + (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15477)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (short)-15477))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), ((-(max((((int) (short)-15455)), ((~(((/* implicit */int) arr_11 [(unsigned short)11]))))))))));
        var_23 = ((/* implicit */long long int) (~(((unsigned int) 13281074153294458214ULL))));
        arr_13 [i_3] = ((/* implicit */short) var_0);
        var_24 = ((/* implicit */short) (((-(arr_12 [i_3]))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_3])))))));
        arr_14 [i_3] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned short) arr_12 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (arr_12 [i_3])))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)12371))));
        var_25 = ((/* implicit */long long int) (+(13419217658241101093ULL)));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (arr_16 [i_4] [i_4])));
        arr_18 [i_4] = ((/* implicit */signed char) arr_10 [i_4]);
        arr_19 [i_4] = var_11;
    }
}
