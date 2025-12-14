/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179404
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)93)), (16578985329305360431ULL)))))))));
        var_12 = ((/* implicit */_Bool) ((unsigned int) (short)-32636));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_13 = (-(((long long int) var_9)));
        arr_5 [i_1] = ((/* implicit */int) (~(var_2)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((long long int) var_1)) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 130816))))))));
                            var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3044350269U)))) ? (((/* implicit */int) ((signed char) (short)32636))) : (((((/* implicit */_Bool) (short)-32650)) ? (((/* implicit */int) var_9)) : (var_7)))));
                            arr_18 [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */int) var_9);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 ^= ((/* implicit */unsigned long long int) var_8);
                            arr_23 [i_2] [i_4] [i_3] [i_4] [i_3] = (~(((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                            var_17 = (-(((/* implicit */int) (unsigned short)20778)));
                        }
                        arr_24 [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_4] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) var_1)))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-32668)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13712))) : (var_5))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (short i_10 = 1; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                                var_22 -= (+(var_4));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (-(var_6)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            {
                                arr_38 [i_7 + 2] [i_11] [i_8] [i_7 + 2] [i_1] = ((/* implicit */int) (_Bool)0);
                                arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_4)))) ? (var_5) : (((/* implicit */unsigned long long int) var_2)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned int) ((int) 2357749766U));
                                arr_52 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32675))));
                                var_26 = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) -6883833928874374495LL)) ? (((/* implicit */long long int) 1073737728)) : (3849553679739816095LL))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        for (short i_18 = 2; i_18 < 16; i_18 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned short) var_3)), (var_9))))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
                arr_59 [i_18] = ((/* implicit */short) var_9);
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) (short)-32650)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32748))) : (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_1)) ? (5ULL) : (((/* implicit */unsigned long long int) var_4)))))))));
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-9223372036854775807LL - 1LL))))) ? ((-(((/* implicit */int) (signed char)60)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))))))));
                                arr_69 [i_17] [i_17] [i_19] [i_17] [i_20] [i_17] [i_17] = ((/* implicit */_Bool) ((unsigned int) max((var_0), (var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32686)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned short) (short)32767))))))));
}
