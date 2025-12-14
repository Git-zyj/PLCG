/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170917
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
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((((/* implicit */int) (!(var_1)))), (((((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1] [i_1])) ? (var_10) : (((/* implicit */int) var_1)))) % (((/* implicit */int) (unsigned short)7))))));
                            arr_12 [i_3] [i_1] [i_3] [i_3 + 1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) (+((-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) ^ (var_6)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_1] [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) (short)-27003))))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (2097151ULL) : (max((0ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */long long int) var_2)) : ((-(-21LL)))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_4] [i_1] [(_Bool)0] = ((/* implicit */long long int) min((((/* implicit */int) max((((short) var_5)), (((/* implicit */short) (unsigned char)178))))), (((((/* implicit */_Bool) 27LL)) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_4] [i_5])) : (((int) (signed char)0))))));
                            var_13 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_5 + 1])) / ((+(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_7))));
                                var_15 = ((/* implicit */signed char) var_2);
                            }
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (arr_22 [(_Bool)1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) + (var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (16350364856297637031ULL)))) ? (0U) : (((/* implicit */unsigned int) max((var_10), (var_4))))))));
                            arr_31 [i_0] [i_1] [i_1] [i_7 + 1] [i_7 + 1] = ((/* implicit */int) (-(min((((((/* implicit */_Bool) var_11)) ? (var_6) : (0ULL))), (((/* implicit */unsigned long long int) var_3))))));
                        }
                    } 
                } 
                var_17 -= (~((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) -682705427))))) : (((var_1) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-109)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)14751), (((/* implicit */unsigned short) (short)-27003))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32755)))))) : ((+(((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)10531))))))));
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)184))))))));
    var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1055))));
    var_21 = ((/* implicit */long long int) var_3);
}
