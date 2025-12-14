/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163608
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)14673))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 2024717567U))));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+(max(((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) 2754323924093860598LL)))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) -8155404726403836032LL);
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (((~(arr_9 [i_4]))) == (max((-8155404726403836025LL), (((/* implicit */long long int) arr_4 [i_4] [i_4]))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)36461)), (arr_2 [i_4])))) && (((/* implicit */_Bool) ((unsigned char) -8155404726403836035LL)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)45), (((/* implicit */unsigned char) arr_8 [i_4]))))))))));
        var_20 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_8 [(unsigned char)21])) : (arr_13 [i_4]))) << ((((-(6260179685258232638ULL))) - (12186564388451318973ULL))))), (((((((/* implicit */int) arr_7 [i_4] [i_4] [(unsigned short)0])) + (2147483647))) >> (((arr_13 [i_4]) + (1253811344)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((_Bool) max((((int) 8155404726403836035LL)), ((-(((/* implicit */int) (_Bool)1)))))));
    var_22 = ((/* implicit */signed char) (~((-(((((/* implicit */int) (unsigned char)31)) & (((/* implicit */int) var_2))))))));
}
