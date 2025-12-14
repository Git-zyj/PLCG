/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150763
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_10))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((/* implicit */unsigned long long int) max((2958234690U), (((/* implicit */unsigned int) (short)-16977))))), (((arr_1 [i_0 + 2] [i_0 - 1]) & (var_3)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] = arr_9 [i_0] [i_1] [i_2] [i_3];
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) var_0)))) << (((max((((/* implicit */unsigned long long int) arr_5 [i_0 + 2])), (387635499623077118ULL))) - (387635499623077094ULL)))))) / (arr_6 [i_0] [i_0] [i_3]))))));
                        arr_14 [i_0] [i_0] [i_0] [5] [i_3] [i_3] = ((/* implicit */_Bool) arr_3 [i_2] [i_0]);
                        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0] [i_3]))) + (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            var_16 ^= ((/* implicit */long long int) (~(((arr_7 [i_0 + 1] [i_1] [i_0 + 2] [i_0 + 1]) | (arr_7 [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 2])))));
                            arr_17 [i_0] [(signed char)4] [i_1] [i_1] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_1]))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (short)-16964))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (unsigned short)63656)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)51425)))))))) || (((/* implicit */_Bool) (signed char)-66))));
                            var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1745944330)) ? (((/* implicit */unsigned long long int) (-(max((arr_19 [i_0] [i_1] [i_2] [(signed char)7] [i_5]), (-1070827907)))))) : (max((((((/* implicit */_Bool) 2147482624U)) ? (var_8) : (var_3))), (var_8)))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_22 [i_6] = ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        var_19 ^= ((/* implicit */int) var_10);
        var_20 = ((/* implicit */int) ((arr_8 [i_6] [i_6] [i_6]) == (arr_8 [i_6] [i_6] [i_6])));
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [(_Bool)1])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) var_7))))) != (var_10)));
    }
    var_22 = ((/* implicit */long long int) 2958234696U);
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16975)) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))) : (5283048448258620335LL))) / (arr_26 [i_8]))) : (((/* implicit */long long int) ((((/* implicit */int) max((var_4), ((short)16975)))) & (((/* implicit */int) arr_24 [i_8])))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (4127187114800590737ULL) : (((/* implicit */unsigned long long int) arr_29 [i_7] [i_10] [i_8]))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((/* implicit */int) (((-(225069522963828730ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)124)) * (((/* implicit */int) (unsigned char)53))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(16383U)))) < (var_8))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2938346629U) / (((/* implicit */unsigned int) -1745944339))))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16981)))) > (((/* implicit */int) ((9454793969717729899ULL) == (((/* implicit */unsigned long long int) -8607652335713746214LL)))))))));
}
