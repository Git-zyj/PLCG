/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145012
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
    var_15 = max((var_11), (var_5));
    var_16 -= ((/* implicit */unsigned short) (-(((/* implicit */int) min((((signed char) var_0)), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)))))))));
    var_17 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)28893))))) || (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)32755)))) ? (var_6) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_2] [i_3] |= ((/* implicit */unsigned short) arr_2 [i_3] [i_2] [i_3]);
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0 - 1] [i_2]), (arr_6 [i_0 - 1] [i_0 + 1] [i_2])))) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)159)))))));
                        arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)62898)), (1765873825U))))))), (max((((arr_3 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) min((-1518023726), (((/* implicit */int) arr_5 [i_0] [6LL] [i_2])))))))));
                    }
                } 
            } 
        } 
        var_19 -= (-((-(756818853510169101ULL))));
        var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0])) : (max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned short i_4 = 4; i_4 < 22; i_4 += 4) 
    {
        arr_17 [i_4] [(unsigned short)19] |= ((((/* implicit */_Bool) min((arr_4 [i_4] [i_4]), (((/* implicit */unsigned int) -727918372))))) ? (((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (arr_4 [i_4] [i_4]) : (arr_4 [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_4])))))));
        var_21 = ((unsigned int) arr_13 [i_4] [i_4]);
    }
}
