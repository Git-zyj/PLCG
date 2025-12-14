/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115103
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_17 ^= (unsigned short)46784;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0 + 3]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24214)) >> (((((/* implicit */int) (unsigned char)172)) - (152)))));
        var_19 = ((/* implicit */long long int) ((arr_2 [i_0 + 2]) / (arr_2 [i_0 + 1])));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (~(6036366158936583018LL)));
        var_21 = ((unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)54960)) >> (((var_8) + (3972566754890190021LL))))));
    }
    var_22 = max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)82))))) - (((((/* implicit */_Bool) (unsigned short)54960)) ? (var_13) : (((/* implicit */long long int) var_14)))))));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) 819707154691145583LL))));
    var_24 = ((/* implicit */unsigned short) ((-3143019270132798618LL) | ((~(var_7)))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)-19340)), (932608931)));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_26 &= ((/* implicit */long long int) var_4);
            var_27 ^= ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)82)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)29920))))))))));
        }
        var_28 = ((/* implicit */short) ((unsigned short) max((var_13), (((/* implicit */long long int) var_12)))));
    }
}
