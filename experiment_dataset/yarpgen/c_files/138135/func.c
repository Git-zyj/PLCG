/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138135
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
    for (int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((short) ((short) (!(((/* implicit */_Bool) var_8))))));
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_11)))) | (((/* implicit */int) (short)4095))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) (short)-4082)) + (4108)))));
                var_15 = ((/* implicit */int) arr_10 [i_3]);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_16 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))) + (arr_10 [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */short) var_2)))))))) % (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (arr_14 [(unsigned short)4] [i_5] [i_4 - 2]))))));
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_8)))) : (arr_15 [i_5 - 1] [i_5 - 1] [3] [i_4 + 4]))) >> (((((/* implicit */int) (unsigned short)35346)) - (35327)))));
                    arr_16 [i_5] = ((/* implicit */unsigned int) arr_5 [i_4] [i_5]);
                    var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 12U)) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((219461343) | (((/* implicit */int) (signed char)-62))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3] [i_5])) || (((/* implicit */_Bool) 3603087232856587096ULL))))) >= (((((/* implicit */_Bool) 444454465)) ? (((/* implicit */int) (unsigned short)30086)) : (((/* implicit */int) var_8)))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 609155898U)) ? (((((/* implicit */_Bool) arr_9 [i_3] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4063))) : (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-36))) ? (8796093005824LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))))))));
                            var_20 = ((/* implicit */signed char) var_8);
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)63)))), ((+(((/* implicit */int) arr_7 [(short)10] [(unsigned char)6] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_8))))))) : (15ULL))))));
                            var_22 = ((/* implicit */unsigned char) arr_12 [i_4 - 1] [i_6 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
