/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140047
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
    var_14 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) 512403192);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) var_1);
                            arr_11 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [(_Bool)1] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4114870527U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) min((((/* implicit */int) min(((short)8681), (((/* implicit */short) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_1 - 3]) : (((/* implicit */int) var_11)))))))));
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_2])) : (4114870538U))) << ((((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-8681)))))) + (45)))));
                            var_17 += ((/* implicit */short) -173496691);
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1155270100U)))) : (((((/* implicit */_Bool) (short)-8655)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8681))) : (4114870537U)))))) ? (1155270095U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) ((_Bool) 4114870537U)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [(unsigned short)18] [i_5])))))))));
                            arr_23 [i_7] [i_6] [i_6] [i_5 + 1] [i_4] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_7)), ((~(var_10))))), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_5]))));
                            var_20 -= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) <= (4114870530U)))), (var_13)));
                            var_21 = ((/* implicit */unsigned int) arr_21 [i_4] [i_5] [i_6] [i_7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_29 [i_9 + 1] [i_8] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_26 [i_8])), (((unsigned int) var_3))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) arr_20 [(short)10] [i_5] [i_5 + 1] [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4])))));
                            arr_30 [i_4] [i_4] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned char) var_0);
                            arr_31 [i_9] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3139697201U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8698))) : (180096758U)))));
                            var_22 ^= var_13;
                        }
                    } 
                } 
                arr_32 [i_5] = ((/* implicit */_Bool) (((~(((arr_18 [i_4] [i_5 - 1] [i_5 - 1] [i_4]) | (((/* implicit */unsigned int) var_12)))))) & (((((/* implicit */_Bool) min((((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4])), (var_12)))) ? (((/* implicit */unsigned int) var_12)) : (arr_18 [i_4] [i_4] [i_4] [i_4])))));
            }
        } 
    } 
}
