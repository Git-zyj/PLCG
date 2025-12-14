/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137719
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
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) (~((~(((((/* implicit */int) var_9)) >> (8)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (~(var_2)));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((min((var_6), (var_10))), (((/* implicit */unsigned short) (!(var_0)))))))));
                                arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_4)))) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (var_4))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_0] [i_0 + 3] [8U]) : (var_13)))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0 + 4] [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3900268915U)) / (var_5)))) ? (((((/* implicit */int) (unsigned char)145)) * (((/* implicit */int) (unsigned char)175)))) : (((/* implicit */int) var_7))))) ? ((+((-(863854612433666607LL))))) : (((/* implicit */long long int) ((((/* implicit */int) ((short) (_Bool)1))) * ((+(((/* implicit */int) var_12)))))))));
    var_21 = ((/* implicit */signed char) min((max((var_15), (((/* implicit */int) var_12)))), (var_11)));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)85))))))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 7; i_8 += 2) 
                    {
                        {
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) arr_17 [i_5] [(_Bool)1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                            var_24 = ((/* implicit */int) (+(var_2)));
                            var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((var_1), (var_10))), (var_10))))));
                        }
                    } 
                } 
                arr_23 [i_5] [9U] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_20 [i_5] [i_5] [i_6 - 2] [3] [i_6]))))) % (((((/* implicit */_Bool) arr_11 [i_5] [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56647))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))) : (var_2)))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            var_26 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) <= (max((((/* implicit */unsigned int) min((var_11), (var_3)))), (((((/* implicit */_Bool) var_10)) ? (4241112009U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                            arr_31 [6] [i_10] = ((/* implicit */unsigned int) var_15);
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (unsigned char)142)) | (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) var_11)))))) : (var_4))))));
                            var_28 = ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) < (var_4)))) == (var_11))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (~(1223010336)))) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)85)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
