/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169555
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) 18446744073709551584ULL);
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)13921);
        var_15 = ((/* implicit */unsigned int) arr_0 [9]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            arr_12 [(short)1] [i_0] [i_0] [i_0] = ((unsigned int) 2946661089U);
                            var_16 = 1348306206U;
                            arr_13 [i_0] [i_4 + 4] [i_3] [3U] [i_2] [i_1 + 2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_0] [15ULL] = ((/* implicit */unsigned int) 1355048629313293133ULL);
                        }
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1])))))) == (arr_11 [i_0] [i_3] [i_2] [i_0] [i_1] [i_0 + 3] [i_0])));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5])) || (((/* implicit */_Bool) 1348306206U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5])))))))));
        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((1486595883U) + (((/* implicit */unsigned int) -377701211))))) || (((-377701181) <= (((/* implicit */int) (_Bool)1)))))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) (_Bool)1);
        var_19 = ((/* implicit */long long int) -1842242035);
    }
    for (long long int i_6 = 1; i_6 < 10; i_6 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((long long int) arr_10 [i_6]));
        /* LoopNest 2 */
        for (unsigned short i_7 = 3; i_7 < 9; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    arr_29 [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_6] [i_6] [i_6 - 1]))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 8; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_35 [i_10] [i_9] [i_9] [i_6] [i_8] [i_7 - 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) ((unsigned int) 4294967295U)))))) & (((/* implicit */int) (!(((((/* implicit */int) arr_30 [i_6] [i_7] [i_8] [i_9] [i_9] [i_10])) >= (((/* implicit */int) arr_33 [(_Bool)1] [i_7] [i_7] [i_9] [i_9])))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [i_8]))) / (arr_17 [(_Bool)1] [i_7])))))))));
                                arr_36 [i_10] [i_9] [i_6] [i_7] [i_6] = ((/* implicit */long long int) (((~(980813550141973439ULL))) * (((/* implicit */unsigned long long int) (+(((unsigned int) arr_30 [i_6] [i_7] [i_7] [i_8] [i_9] [1ULL])))))));
                                arr_37 [i_6 - 1] [i_7] [i_7] [i_6] [i_6] [i_7] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(arr_10 [i_10])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-31748)))))))) << (((((/* implicit */int) (unsigned short)255)) - (249)))));
                            }
                        } 
                    } 
                    arr_38 [i_6] [i_7 + 1] [i_6] = ((/* implicit */_Bool) arr_5 [4] [i_7] [i_6]);
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned int) (-(((arr_34 [9ULL] [i_6 + 1] [i_6] [i_6 - 1]) / (((((/* implicit */int) (unsigned short)65280)) * (((/* implicit */int) (signed char)(-127 - 1)))))))));
        arr_39 [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6])) || (((/* implicit */_Bool) (unsigned short)65287)))))))));
    }
    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((unsigned int) var_4))))))));
    var_24 += ((/* implicit */unsigned int) ((_Bool) ((18446744073709551612ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))))));
}
