/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175272
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (var_9)));
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)16)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) : (var_2))) : (((8506739588736636249ULL) >> (((((/* implicit */int) (unsigned short)5920)) - (5870)))))));
                    var_17 = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (unsigned char)107);
                                arr_14 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) -2097612199);
                                arr_15 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)62777))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned int) ((10613895218612179552ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26545)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [(signed char)5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38968)) % (((/* implicit */int) (unsigned short)20459))))) ? (var_12) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(-3898954261109527769LL)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) var_3)))))));
                    var_21 *= var_13;
                }
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)45059);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [(signed char)4] [(unsigned short)4] [12ULL] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (max((18446744073709551593ULL), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)38976), (((/* implicit */unsigned short) (signed char)-5)))))) : ((~((~(9940004484972915373ULL)))))));
                                var_23 = var_5;
                            }
                        } 
                    } 
                }
                var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)17402))));
                arr_29 [i_1] [i_1] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)23413))))), (min((var_2), (886003003755417742ULL)))))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)23401)), (-3898954261109527788LL)))) <= (var_2)));
    var_26 = (~(((/* implicit */int) (signed char)15)));
}
