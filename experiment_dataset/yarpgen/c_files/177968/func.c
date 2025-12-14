/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177968
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (~(var_3)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                        arr_10 [12ULL] [i_1 - 2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) 7709842268105537681LL);
                        arr_11 [i_1] [i_2] [i_2] = ((long long int) (_Bool)1);
                        arr_12 [i_0] [i_2] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_3 [(unsigned char)1] [i_1 - 1])));
                    }
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)60)));
        arr_14 [(signed char)20] [i_0] = ((/* implicit */unsigned int) (~(max((7709842268105537699LL), (((/* implicit */long long int) arr_6 [(signed char)4]))))));
        arr_15 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)90)), (((((/* implicit */_Bool) arr_8 [i_0])) ? (((((/* implicit */_Bool) -7709842268105537681LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_6 [(short)10]))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (_Bool)1);
                            arr_28 [i_4] [i_5] [i_6] [i_7] [i_8] [(short)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(2476384080U)))) ? (((/* implicit */int) arr_22 [i_4] [i_4] [2U] [i_5])) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) arr_3 [(unsigned char)21] [17U]))))));
        }
        var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-32750))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)48652)) ? (-7709842268105537671LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
