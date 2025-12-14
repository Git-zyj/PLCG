/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139367
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-92)))))));
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)34031))));
        var_22 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) arr_0 [i_0 - 2])));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)153))));
            var_24 |= ((/* implicit */signed char) var_6);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), ((+(4052075166482254639LL)))));
                            arr_15 [i_0] [i_2] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-97));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) max((var_26), (((short) (!(((/* implicit */_Bool) var_4)))))));
        var_27 ^= ((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */int) (short)30251))));
    }
    var_28 = ((/* implicit */unsigned short) var_11);
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)55)))))));
}
