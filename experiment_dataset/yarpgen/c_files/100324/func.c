/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100324
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_13 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 + 1])) != (((/* implicit */int) arr_0 [i_3 - 1]))))) == (((var_10) ? (((/* implicit */int) (unsigned short)7765)) : (((/* implicit */int) (unsigned short)7766))))));
                            var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_15 = (-(((/* implicit */int) ((signed char) var_5))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) (unsigned short)59202);
                                arr_17 [i_5] [i_1] [i_0] [i_5] [i_6] [i_4] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_13 [i_6 + 2] [i_6 + 2] [i_6 - 2])) != (((/* implicit */int) (short)(-32767 - 1)))))), (((int) var_11))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(-879935409)));
                    var_17 &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)33824)) : (((/* implicit */int) (short)25395)))));
                }
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-8367))))) && (((/* implicit */_Bool) ((unsigned long long int) 274877906943ULL))))) ? (7022207501597532081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 12378896195378830445ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_7])))))))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-83)) - (((/* implicit */int) arr_1 [i_1 + 1]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) - (min((((/* implicit */unsigned long long int) var_11)), (19ULL)))))));
                        arr_25 [i_8] [i_7] = ((/* implicit */short) 2147483647);
                        var_20 = ((/* implicit */long long int) min(((short)0), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-78)) && (((/* implicit */_Bool) (unsigned short)7765)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(arr_22 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (short)32738)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) arr_20 [i_9]))))))));
                                arr_30 [i_0] [i_1] [i_7] [i_9] [i_10] = ((/* implicit */int) max((((/* implicit */long long int) max(((+(1714705674))), (arr_28 [i_0] [i_1] [i_9] [i_10])))), (arr_22 [i_0] [i_1] [i_1] [i_9])));
                                arr_31 [i_0] [i_9] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (short)-1)))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), ((~(((unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    arr_35 [i_1] [i_1] = ((/* implicit */int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned char) ((int) var_8));
                                var_24 = ((/* implicit */long long int) min((var_8), (((/* implicit */int) (unsigned char)27))));
                            }
                        } 
                    } 
                }
                arr_42 [i_0] [i_1 + 1] = ((/* implicit */short) (-2147483647 - 1));
                arr_43 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_37 [i_1] [i_1 + 1] [i_1 - 1] [i_0])))));
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (int i_16 = 4; i_16 < 8; i_16 += 4) 
                        {
                            {
                                var_25 |= ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_7 [i_16 - 1] [i_16 + 1] [i_16 - 4]))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (unsigned short)59209))))) : (-1714705674));
                                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)68))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 1) 
    {
        for (short i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            for (short i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [i_18] [i_18]))))) ? (((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) arr_59 [i_18] [i_18] [i_19])))) : (((/* implicit */int) ((short) 4606291173101174442ULL))))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_57 [i_19] [i_17])))))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_8))));
                }
            } 
        } 
    } 
}
