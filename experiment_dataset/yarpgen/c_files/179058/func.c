/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179058
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
    var_20 &= ((((/* implicit */int) ((max((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)72)) & (((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */int) var_5)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -1585699147))) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_14)))) : (((((-1585699142) + (2147483647))) << (((((/* implicit */int) (unsigned short)8)) - (7)))))))) ? (1585699155) : (((/* implicit */int) (unsigned short)14))));
                    var_21 = ((((/* implicit */_Bool) ((var_9) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))))) ? (4294967294U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-119)) ? (((var_1) ? (((/* implicit */int) (unsigned short)2678)) : (((/* implicit */int) (signed char)121)))) : (max((((/* implicit */int) (signed char)-110)), (1585699155)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2665)))))))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)238)) : (-1585699162))) > (max((-1585699147), (((/* implicit */int) var_6)))))))));
        arr_11 [i_3] &= ((/* implicit */unsigned short) var_12);
        var_23 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */int) (unsigned short)2687)) >> (((1585699162) - (1585699137))))) == (((/* implicit */int) var_2)))))));
    }
    var_24 = ((/* implicit */unsigned char) var_4);
    var_25 = ((/* implicit */unsigned short) var_11);
}
