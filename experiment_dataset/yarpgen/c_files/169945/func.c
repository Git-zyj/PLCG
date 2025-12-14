/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169945
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(signed char)4] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 715432055)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5539986222282258596ULL)) ? (((/* implicit */unsigned long long int) -715432050)) : (var_0))))))));
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3102005210296995101LL)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35111)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            arr_5 [10U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12906757851427293025ULL))))) : (715432055)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [11U] [i_1])) % (((/* implicit */int) arr_0 [5ULL] [i_0]))))) ? (((/* implicit */unsigned int) (-(var_5)))) : (((unsigned int) (unsigned char)112))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_4))), (min((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])), (arr_1 [i_1 + 2] [i_1 - 4])))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
                            arr_21 [i_0] [i_2] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (_Bool)0))))));
                            arr_22 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5] = ((903847223U) << (((772586347U) - (772586346U))));
                            var_12 = ((/* implicit */signed char) ((var_5) - (var_8)));
                        }
                    } 
                } 
            } 
            arr_23 [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) 688306309U);
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (unsigned short)4095))))))));
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_33 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)13608)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (10112431235640299865ULL) : (((/* implicit */unsigned long long int) var_5))))))));
                    arr_34 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_28 [i_6]))), ((-(arr_29 [i_6])))));
                }
            } 
        } 
        arr_35 [i_6] [i_6] = ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) arr_32 [i_6] [i_6] [10LL])))))), ((~(arr_30 [i_6] [(unsigned short)0] [i_6])))));
        arr_36 [i_6] = ((/* implicit */int) min(((unsigned short)20695), (((/* implicit */unsigned short) (_Bool)1))));
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7)))));
    }
    var_14 = ((/* implicit */signed char) var_5);
    var_15 = (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51928))) & (5539986222282258614ULL))))));
    var_16 = ((/* implicit */unsigned short) ((var_5) % (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) var_4)))))));
    var_17 |= ((/* implicit */unsigned char) (+(((unsigned int) ((((/* implicit */int) (unsigned char)15)) / (-5))))));
}
