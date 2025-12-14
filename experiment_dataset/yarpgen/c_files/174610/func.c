/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174610
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [(short)2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(arr_6 [i_2] [i_1] [i_1] [i_1])))) > (max((1578830956U), (((/* implicit */unsigned int) arr_7 [11LL] [i_2 + 2] [i_2 + 2]))))));
                    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [2LL] [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    arr_13 [i_0] [i_3] [i_4 + 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 24U)) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */int) (unsigned short)3665)) <= (((/* implicit */int) (signed char)-12))))))) : (((/* implicit */int) arr_11 [i_0] [22U] [i_3]))));
                    arr_14 [(signed char)6] [i_3] [i_3] [14U] &= ((/* implicit */unsigned int) ((((2771012567U) == (((/* implicit */unsigned int) (-2147483647 - 1))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (signed char)11))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_12 = ((short) arr_0 [i_3 + 2] [i_4 + 1]);
                        arr_18 [i_3] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_4 [i_3 - 2])) <= (arr_12 [i_4] [i_4] [i_4 + 1] [i_3])));
                    }
                    for (long long int i_6 = 1; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_13 = ((((/* implicit */_Bool) max((arr_3 [i_0] [i_3 - 1] [i_3]), (arr_3 [i_0] [i_4] [i_3])))) ? (8976350580925728921LL) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || ((_Bool)1))))))));
                        arr_22 [11U] [i_3] [i_3] [11U] = ((/* implicit */long long int) ((((/* implicit */int) (short)-9712)) & (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32443)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (1578830976U))) > (9U))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), ((+(min((((/* implicit */long long int) arr_1 [i_7])), (var_0)))))));
        var_15 = ((((/* implicit */_Bool) (~(var_2)))) || (((/* implicit */_Bool) max(((-(4404303856295147105LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))))))));
    }
    var_16 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (!(var_8))))) & (var_3)))));
}
