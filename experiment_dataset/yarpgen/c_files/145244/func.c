/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145244
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25355)) ? ((-(((/* implicit */int) (short)-25626)))) : (((/* implicit */int) arr_7 [i_3 - 2] [i_2] [i_2]))));
                        arr_9 [i_2] [i_2] [(_Bool)1] = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (7720857830430977837LL))))) ^ (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_4))) ^ (min((((/* implicit */int) var_15)), (2099477177)))))));
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_2 - 1] [i_3 - 2] [i_3 - 1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2805110850U));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [8ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 2])) / (2099477177)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1622079807)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6)))) ? (((long long int) var_8)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7036507141355050336LL))))) : (var_6)));
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_6) <= (var_1)))), (((var_15) ? (arr_4 [i_0]) : (var_5))))))));
        arr_12 [i_0] [i_0] = var_2;
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)15378)) * (((/* implicit */int) ((unsigned short) (signed char)-120))))), (((/* implicit */int) max((((/* implicit */short) (signed char)69)), ((short)-15392))))));
    }
    for (int i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (~(arr_14 [i_4])));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_6] = ((/* implicit */unsigned long long int) (+(((int) var_14))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_31 [i_4] [i_4] [i_4 - 1] [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -7720857830430977854LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4842092512682845938ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967284U)))) : (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_8]))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                                arr_32 [17ULL] [i_5] [i_5] [i_6] [i_5] = ((_Bool) var_12);
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_30 [i_6] [0ULL] [i_7] [i_8]))) ? (min((((1656435549266064817LL) / (((/* implicit */long long int) arr_21 [i_6])))), (-7720857830430977840LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((~(arr_26 [3LL] [i_6]))) : (((arr_26 [i_7] [3LL]) << (((var_12) - (860437122951747512LL))))))))));
                            }
                        } 
                    } 
                    arr_33 [i_4] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (max((arr_21 [i_6]), (arr_21 [i_6])))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) -2099477178)), (1489856446U)));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) -7720857830430977837LL)) ? ((-(((/* implicit */int) (signed char)-118)))) : (((/* implicit */int) (signed char)15))));
    var_22 = var_0;
}
