/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10594
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_2])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (unsigned short)52764)) : (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)243)))) / (((/* implicit */int) ((524287U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))))))))));
                    var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_2])))) ^ (min((arr_1 [i_2] [i_0]), (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_13 [i_4 + 3] [i_3] [i_2] [i_1] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (max((var_6), (381931519U))))) - (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2497395569U)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_2 [i_1] [0U]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) - (0U))))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4611686018427387904LL)) ? (3449072557U) : (((/* implicit */unsigned int) 1032192))));
                                arr_15 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */int) max((((((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */unsigned long long int) ((2497395578U) - (((/* implicit */unsigned int) 1032183))))) : ((~(5ULL))))), (((/* implicit */unsigned long long int) (-(1032175))))));
                                arr_16 [i_4] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned char)194)) << (((((/* implicit */int) arr_4 [i_0])) - (187))))) <= (-1032191))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)8864), (((/* implicit */short) (unsigned char)1)))))) : (((((/* implicit */_Bool) var_5)) ? ((-(-5430425007950096257LL))) : (arr_11 [i_0] [i_0] [i_0] [i_3] [i_4])))));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) 3294983871U);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)31)) : (-1032197))), (min((1032196), (((/* implicit */int) (unsigned char)85)))))) : (max((max((-1032178), (((/* implicit */int) (signed char)0)))), ((+(((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 8; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 825849644U)))) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [4U] [i_5 - 4]))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_2] [i_5 - 4] [i_1] [i_6]) != (((/* implicit */long long int) 1020U)))))) <= (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) : (2497395564U)))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(4192256)))) ? (max((4294967282U), (0U))) : (((3469117657U) >> (((-5) + (14)))))))) <= (((((/* implicit */long long int) 805306368U)) + (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */long long int) 2497395584U)) : (15LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) var_2)))), (((((/* implicit */int) (unsigned char)240)) + (((/* implicit */int) var_2)))))) - (((/* implicit */int) min((var_14), (var_0))))));
    var_24 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)10))))));
}
